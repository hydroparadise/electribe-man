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

void print_help() {
    printf("Usage: emxread [options]\n");
    printf("\nOptions:\n");
    printf("-h         Display this help message.\n");
    printf("-f <file>  Read pattern data from the specified file.\n");
    printf("-p         Print all patterns from the file (if read).\n");
    printf("-n         Print part notes.\n");
    printf("-m         Print part motion values.\n");
    printf("-c <bank1> <bank2>  Compare two patterns in the file (requires -f option to be used.)\n");
};

#define OPTION_COUNT 10

#define HELP 0
#define READ_PATTERN_DATA 1
#define COMPARE_PATTERN_DATA 2
#define PRINT_PATTERN_DATA 3
#define PRINT_PART_NOTES 4
#define PRINT_PART_MOTIONS 5

unsigned char options[OPTION_COUNT];
void init_options() {
    for (int a = 0; a < OPTION_COUNT; a++) {
        options[a] = FALSE;
    }
}

/****
 * Arg tests:
 *  emxread -f ../TSER.EMX -p -c D.33 D.37  <- IDE working directory ./bin
 *  emxread
 */
int main(const int argc, char *argv[]) {

    init_options();
    EmxFile emx_file;

    //option values place holders
    const char *path = NULL;
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
                path = argv[++a];
                printf("path: %s\n", path);
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
                //printf("p1: %s, p2: %s\n", p1, p2);
            }
        }

        if (path != NULL) {
            for (int o = 0; o < OPTION_COUNT; o++) {
                //printf("Run Argument %i: %s -> %i\n", a, argv[a], options[o]);
                switch (o) {
                    case READ_PATTERN_DATA:
                        if (options[READ_PATTERN_DATA]) {
                            printf("Reading file %s\n", path);
                            read_emx(path, &emx_file);
                            parse_emx_file(path, &emx_file);
                            options[READ_PATTERN_DATA] = FALSE;
                        }
                        break;
                    case COMPARE_PATTERN_DATA:
                        if (options[COMPARE_PATTERN_DATA] && p1 != NULL && p2 != NULL) {
                            printf("\nComparing patterns %s %s from file %s\n", p1, p2, path);
                            compare_emx_bank_pattern_data(p1, p2, &emx_file);
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

    if (path == NULL) {
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

