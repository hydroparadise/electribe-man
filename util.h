// util.h
#pragma once

#define TRUE 1
#define FALSE 0
#define ERROR -1

void print_hex(const unsigned char *data, size_t len);
void print_binary(const unsigned char byte);
void compare_emx_pattern_data(const unsigned char *pattern1, const unsigned char *pattern2, size_t len);
void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) ;
void index_to_pattern_bank(char* result, int i);
int bank_pattern_to_index(char* bank);
