//emx.h

#pragma once
#include "common.h"

#define EMX_FILENAME_MAX 12  //assuming MS-DOS format (FAT16?)


#define EMX_HEADER_SIZE 512
#define EMX_PATTERN_DATA_SIZE 4806
#define PCM_DRUM_COUNT 207
#define PCM_SYNTH_COUNT 76
#define PCM_NAME_LENGTH 8
#define EMX_SYNTH_PART_COUNT 5
#define EMX_DRUM_PART_COUNT 9

typedef struct EmxDrumPart {
    short pcm_index;
    char triggers[NOTE_BANK_COUNT * NOTE_BANK_SIZE][TRIGGER_SIZE];

} EmxDrumPart;

typedef struct EmxSynthPart {
    char notes[NOTE_BANK_COUNT * NOTE_BANK_SIZE][NOTE_LENGTH + 1];
    char triggers[NOTE_BANK_COUNT * NOTE_BANK_SIZE][TRIGGER_SIZE];

} EmxSynthPart;

typedef struct EmxPattern {
    char filename[EMX_FILENAME_MAX + 1];
    char bank[PATTERN_BANK_LENGTH + 1];
    char name[PATTERN_NAME_LENGTH + 1];
    short length;
    unsigned short tempo;
    EmxSynthPart synth_parts[EMX_SYNTH_PART_COUNT];
    EmxDrumPart drum_parts[EMX_DRUM_PART_COUNT];

} EmxPattern;

typedef struct EmxFile {
    unsigned char header[EMX_HEADER_SIZE];
    unsigned char patterns[PATTERN_COUNT][EMX_PATTERN_DATA_SIZE];

} EmxFile;

int read_emx(const char *filename, EmxFile *emx_file);
void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) ;
EmxDrumPart* parse_emx_drum_part(const unsigned char *p, short index);
EmxDrumPart* parse_emx_synth_part(const unsigned char *p, short index);
EmxPattern* parse_emx_pattern(const char  *path, int index, const unsigned char *p);
void parse_emx_file(const char  *path, EmxFile *emx);