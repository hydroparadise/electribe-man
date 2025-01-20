// util.h


void print_hex(const unsigned char *data, size_t len);
void print_binary(const unsigned char byte);
void compare_patterns(const struct Pattern *pattern1, const struct Pattern *pattern2, size_t len);
void index_to_pattern_bank(char* result, int i);
int bank_pattern_to_index(char* bank);
