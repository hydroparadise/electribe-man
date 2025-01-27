// util.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char* get_filename(const char* path) {
    const char* slash_pos = strrchr(path, '/');
    if (slash_pos == NULL) {
        slash_pos = strrchr(path, '\\');
    }
    if (slash_pos != NULL) {
        return strdup(slash_pos + 1);
    } else {
        return strdup(path);
    }
}

void print_char(const char c) {
    if (c >= 32) {
        putchar(c);
    } else {
        printf(".");
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

unsigned short read_big_endian_short(unsigned char byte1, unsigned char byte2) {
    // Combine the two bytes into a big endian short
    unsigned short result = (byte1 << 8) | byte2;
    return result;
}

/*
expected input: 0 - 255
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
    snprintf(result, sizeof(result), "%c.%02d", bank, index_in_bank);
}

int pattern_bank_to_index(const char *pattern) {
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

