//emx.h

#pragma once

#define PATTERN_COUNT 256
#define PATTERN_NAME_LENGTH 8
#define EMX_HEADER_SIZE 512
#define EMX_PATTERN_DATA_SIZE 4806
#define NOTE_BANK_COUNT 8
#define NOTE_BANK_SIZE 16
#define NOTE_LENGTH 3
#define TRIGGER_SIZE 1
#define PCM_DRUM_COUNT 207
#define PCM_SYNTH_COUNT 76
#define PCM_NAME_LENGTH 8

typedef struct EmxDrumPart {
    char triggers[NOTE_BANK_COUNT * NOTE_BANK_SIZE][TRIGGER_SIZE];

} EmxDrumPart;

typedef struct EmxSynthPart {
    char notes[NOTE_BANK_COUNT * NOTE_BANK_SIZE][NOTE_LENGTH + 1];
    char triggers[NOTE_BANK_COUNT * NOTE_BANK_SIZE][TRIGGER_SIZE];

} EmxSynthPart;

typedef struct EmxPattern {
    const char *filename;
    char name[PATTERN_NAME_LENGTH + 1];
    short length;
    short tempo;
    EmxSynthPart synth_parts[5];

} EmxPattern;

typedef struct EmxFile {
    unsigned char header[EMX_HEADER_SIZE];
    unsigned char patterns[PATTERN_COUNT][EMX_PATTERN_DATA_SIZE];

} EmxFile;

int read_emx(const char *filename, EmxFile *emx_file);
void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) ;
void parse_emx_pattern(int index, const unsigned char *p1);
void parse_emx_file(EmxFile *emx);