// util.h
#pragma once

#define TRUE 1
#define FALSE 0
#define ERROR -1

char* get_filename(const char* path);
void print_byte_hex(unsigned char byte);
void print_binary(unsigned char byte);
void print_char(char c);
unsigned short read_big_endian_short(unsigned char byte1, unsigned char byte2);
void index_to_pattern_bank(const char* result, int i);
int pattern_bank_to_index(const char* bank);
