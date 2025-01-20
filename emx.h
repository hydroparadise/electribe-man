//emx.h


#define HEADER_SIZE 512
#define PATTERN_COUNT 256
#define PATTERN_SIZE 4806
#define PATTERN_NAME_LENGTH 8
#define PATTERN_DATA_SIZE (PATTERN_SIZE - PATTERN_NAME_LENGTH)



struct SynthPart {

};

struct Pattern {
    char name[PATTERN_NAME_LENGTH + 1];
    unsigned char data[PATTERN_DATA_SIZE];
    
    short length;
    
    short tempo;
};

