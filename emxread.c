/***
    Author: James Chad Harrison
    Email: hydroparadise@yahoo.com
    Description: Reads Korg EMX-1 backup files to extract information and compare patterns

    Tested on Linux Mint 21 x64
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "emx.h"
#include "util.h"

#define HELP 0
#define READ_PATTERN_DATA 1
#define COMPARE_PATTERN_DATA 2
#define PRINT_PATTERN_DATA 3

#define OPTION_COUNT 10
unsigned char options[OPTION_COUNT];
//NOTE: could be bitmap, but keeping array until all options are sorted out

void print_help() {
    printf("Usage: emxread [options]\n");
    printf("\nOptions:\n");
    printf("-h         Display this help message.\n");
    printf("-f <file>  Read pattern data from the specified file.\n");
    printf("-p         Print all patterns from the file (if read).\n");
    printf("-c <bank1> <bank2>  Compare two patterns in the file (requires -f option to be used.)\n");
};

int read_emx(const char *filename, EmxFile *emx_file);
void init_options();


/****
 * Arg tests:
 *  emxread -f ../TSER.EMX -p -c D.33 D.37  <- IDE working directory ./bin
 *  emxread
 */
int main(const int argc, char *argv[]) {

    init_options();
    EmxFile emx_file;

    //option values place holders
    const char *filename = NULL;
    char *p1 = NULL;
    char *p2 = NULL;

    for (int a = 0; a < argc; a++) {
        //debug
        //printf("Read Argument %i: %s\n", a, argv[a]);

        if (strcmp("-h", argv[a]) == 0) {
            print_help();
            return EXIT_SUCCESS;
        }
        if (!strcmp(argv[a], "-f")) {
            if (a < argc - 1 && argv[a + 1][0] != '-') {
                filename = argv[++a];
                printf("filename: %s\n", filename);
                options[READ_PATTERN_DATA] = TRUE;
            }
        }
        if (!strcmp(argv[a], "-p")) {
            options[PRINT_PATTERN_DATA] = TRUE;
        }

        if (!strcmp(argv[a], "-c")) {
            if (a < argc - 2 && argv[a + 1][0] != '-' && argv[a + 2][0] != '-') {
                options[COMPARE_PATTERN_DATA] = TRUE;
                p1 = argv[++a];
                p2 = argv[++a];
                printf("p1: %s, p2: %s\n", p1, p2);
            }

        }

        if (filename != NULL) {
            for (int o = 0; o < OPTION_COUNT; o++) {
                //printf("Run Argument %i: %s -> %i\n", a, argv[a], options[o]);
                switch (o) {
                    case READ_PATTERN_DATA:
                        if (options[READ_PATTERN_DATA]) {
                            printf("Reading file %s\n", filename);
                            read_emx(filename, &emx_file);
                            options[READ_PATTERN_DATA] = FALSE;
                        }
                        break;
                    case COMPARE_PATTERN_DATA:
                        if (options[COMPARE_PATTERN_DATA] && p1 != NULL && p2 != NULL) {
                            printf("Comparing patterns %s %s from file %s\n", p1, p2, filename);
                            compare_bank_pattern_data(p1, p2, &emx_file);
                            p1 = NULL; p2 = NULL;
                            options[COMPARE_PATTERN_DATA] = FALSE;
                        }
                        break;
                    case PRINT_PATTERN_DATA:
                        if (options[PRINT_PATTERN_DATA]) {
                            printf("Printing all patterns\n");
                            //print patterns function <- TODO: implement
                            options[PRINT_PATTERN_DATA] = FALSE;
                        }
                    break;
                    default: break;;
                }
            }
        }
    }

    if (filename == NULL) {
        printf("File not specified\n");
        print_help();
        return EXIT_FAILURE;
    }

    if (options[HELP] || argc < 2) {
        print_help();
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void init_options() {
    for (int a = 0; a < OPTION_COUNT; a++) {
        options[a] = FALSE;
    }
}

int read_emx(const char *filename, EmxFile *emx_file) {

    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }


    // Read the header (first 512 bytes)
    size_t bytesRead = fread(emx_file->header, 1, HEADER_SIZE, file);
    if (bytesRead != HEADER_SIZE) {
        perror("Error reading header");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Read patterns
    for (int i = 0; i < PATTERN_COUNT; ++i) {
        bytesRead = fread(emx_file->patterns[i], 1, PATTERN_DATA_SIZE, file);
        if (bytesRead != PATTERN_DATA_SIZE) {
            perror("Error reading pattern data");
            fclose(file);
            return EXIT_FAILURE;
        }
    }

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}