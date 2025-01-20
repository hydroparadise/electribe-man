#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1736704

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

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *file1 = argv[1];
    const char *file2 = argv[2];

    FILE *f1 = fopen(file1, "rb");
    if (!f1) {
        perror("Error opening file 1");
        return EXIT_FAILURE;
    }

    FILE *f2 = fopen(file2, "rb");
    if (!f2) {
        perror("Error opening file 2");
        fclose(f1);
        return EXIT_FAILURE;
    }

    unsigned char buffer1[BUFFER_SIZE];
    unsigned char buffer2[BUFFER_SIZE];

    size_t bytes_read1, bytes_read2;

    while (1) {
        bytes_read1 = fread(buffer1, 1, BUFFER_SIZE, f1);
        bytes_read2 = fread(buffer2, 1, BUFFER_SIZE, f2);

        if (bytes_read1 != bytes_read2 || (feof(f1) && feof(f2))) {
            break;
        }

        for (size_t i = 0; i < bytes_read1; ++i) {
            if (buffer1[i] != buffer2[i]) {
                printf("Difference at byte %li (%02lx)\n", i,i);

                printf("File 1: ");
                print_hex(buffer1 + i, 1);
                print_binary(buffer1[i] );
                printf("\n");

                printf("File 2: ");
                print_hex(buffer2 + i, 1);
                print_binary(buffer2[i] );
                printf("\n");
            }
        }

        if (ferror(f1) || ferror(f2)) {
            perror("Error reading files");
            fclose(f1);
            fclose(f2);
            return EXIT_FAILURE;
        }
    }

    if (!feof(f1) && !feof(f2)) {
        perror("Unexpected end of file reached");
    }

    fclose(f1);
    fclose(f2);

    return 0;
}

