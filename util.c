// util.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "emx.h"

void print_hex(const unsigned char *data, size_t len) {
    for (size_t i = 0; i < len; ++i) {
        printf("%02x ", data[i]);
    }
}

void print_binary(const unsigned char byte) {
    unsigned char mask = 1 << 7;
    while (mask > 0) {
        if (byte & mask)
            putchar('1');
        else
            putchar('0');
        mask >>= 1;
    }
    putchar(' ');
}

/*
expectned input: 0 - 255
0 = A.01
255 = D.64
*/
void index_to_pattern_bank(char* result, int i) {
    char bank;
    switch(i / 64) {
        case 0: bank = 'A'; break;
        case 1: bank = 'B'; break;
        case 2: bank = 'C'; break;
        case 3: bank = 'D'; break;
    }

    int index_in_bank = i % 64 + 1;
    sprintf(result, "%c.%02d", bank, index_in_bank); // Format the string

}

int bank_pattern_to_index(const char *pattern) {
    // Ensure pattern is not NULL
    if (pattern == NULL || strlen(pattern) != 4) {
        return -1; // Return an error code for invalid input
    }

    int bank;
    int index;

    // Extract the bank character and convert it to an integer
    switch (pattern[0]) {
        case 'A': bank = 0; break;
        case 'B': bank = 1; break;
        case 'C': bank = 2; break;
        case 'D': bank = 3; break;
        default: return -1; // Invalid bank character
    }

    // Extract the index (two-digit number)
    sscanf(&pattern[2], "%d", &index);

    // Compute and return the final index
    return bank * 64 + index - 1; // Subtracting 1 because index starts from 0
}

void compare_pattern_data(const unsigned char *pattern1, const unsigned char *pattern2, size_t len) {
    for (size_t i = 0; i < len; ++i) {

        if (pattern1[i] != pattern2[i]) {
            printf("Difference at byte %zu: Pattern1[%03zu]:%02x vs Pattern2[%03zu]:%02x\n",
                   i, i, pattern1[i], i, pattern2[i]);
            print_binary(pattern1[i]); printf("\n");
            print_binary(pattern2[i]); printf("\n");
            printf("\n");
        }
    }
}

//TODO: refactor to EMX specific or make base struct to make function generic
void compare_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) {
    int idx1 = bank_pattern_to_index(p1);
    int idx2 = bank_pattern_to_index(p2);

    printf("%s = %i, %s = %i \n", p1, idx1, p2, idx2);
    compare_pattern_data(emx->patterns[idx1], emx->patterns[idx2], PATTERN_DATA_SIZE);
}



