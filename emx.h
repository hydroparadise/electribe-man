//emx.h
//TODO: test for proper header guarding
#pragma once

#define HEADER_SIZE 512
#define PATTERN_COUNT 256
#define PATTERN_DATA_SIZE 4806
#define PATTERN_NAME_LENGTH 8
#define NOTE_BANK_COUNT 8
#define NOTE_BANK_SIZE 16


typedef struct SynthPart {

} SynthPart;

typedef struct Pattern {
    unsigned char data[PATTERN_DATA_SIZE];
    char name[PATTERN_NAME_LENGTH + 1];
    short length;
    short tempo;
    SynthPart synth_parts[5];

} Pattern;

typedef struct EmxFile {
    unsigned char header[HEADER_SIZE];
    unsigned char patterns[PATTERN_COUNT][PATTERN_DATA_SIZE];

} EmxFile;

