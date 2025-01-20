#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "emx.h"
#include "util.h"


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *filename = argv[1];
    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Allocate buffers for header and patterns
    unsigned char header[HEADER_SIZE];
    struct Pattern patterns[PATTERN_COUNT];

    // Read the header (first 512 bytes)
    size_t bytesRead = fread(header, 1, HEADER_SIZE, file);
    if (bytesRead != HEADER_SIZE) {
        perror("Error reading header");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Read patterns
    for (int i = 0; i < PATTERN_COUNT && fread(patterns[i].name, 1, PATTERN_NAME_LENGTH, file) == PATTERN_NAME_LENGTH; ++i) {
        patterns[i].name[PATTERN_NAME_LENGTH] = '\0'; // Null-terminate the name string

        bytesRead = fread(patterns[i].data, 1, PATTERN_DATA_SIZE, file);
        if (bytesRead != PATTERN_DATA_SIZE) {
            perror("Error reading pattern data");
            fclose(file);
            return EXIT_FAILURE;
        }
        
        char bank[5];
        index_to_pattern_bank(bank, i);
        printf("Pattern %s Name: %s\n", bank, patterns[i].name);

        if (ferror(file)) {
            perror("Error reading pattern");
            fclose(file);
            return EXIT_FAILURE;
        }
    }

    // Compare patterns at index 244 and 255
    compare_patterns(&patterns[224], &patterns[228], PATTERN_DATA_SIZE);

    // Close the file
    fclose(file);
    return EXIT_SUCCESS;
}

