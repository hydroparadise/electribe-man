// util.h
#pragma once

#define TRUE 1
#define FALSE 0
#define ERROR -1

void print_hex(const unsigned char *data, size_t len);
void print_binary(const unsigned char byte);
void index_to_pattern_bank(const char* result, int i);
int bank_pattern_to_index(const char* bank);
