//emx.h

#pragma once

#define HEADER_SIZE 512

#define PATTERN_COUNT 256
#define PATTERN_DATA_SIZE 4806
#define PATTERN_NAME_LENGTH 8

#define NOTE_BANK_COUNT 8
#define NOTE_BANK_SIZE 16
#define NOTE_SIZE 3
#define TRIGGER_SIZE 1

#define PCM_DRUM_COUNT 207
#define PCM_SYNTH_COUNT 76
#define PCM_NAME_LENGTH 8



typedef struct DrumPart {


} DrumPart;

typedef struct SynthPart {

    char notes[NOTE_BANK_COUNT * NOTE_BANK_SIZE][NOTE_SIZE + 1];


} SynthPart;

typedef struct Pattern {
    const char *filename;
    size_t abs_position;
    char name[PATTERN_NAME_LENGTH + 1];
    short length;
    short tempo;
    SynthPart synth_parts[5];

} Pattern;

typedef struct EmxFile {
    unsigned char header[HEADER_SIZE];
    unsigned char patterns[PATTERN_COUNT][PATTERN_DATA_SIZE];

} EmxFile;

int read_emx(const char *filename, EmxFile *emx_file);
void compare_emx_pattern_data(const unsigned char *pattern1, const unsigned char *pattern2, size_t len);
void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) ;
