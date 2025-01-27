//emx.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "util.h"
#include "emx.h"

const char* pcm_drum[PCM_DRUM_COUNT] = {
  "BD-Dark ",  "BD-99 1 ",  "BD-99 2 ",  "BD-Syn1 ",  "BD-Syn2 ",  "BD-Syn3 ",  "BD-Syn4 ",  "BD-Syn5 ",
  "BD-Syn6 ",  "BD-Syn7 ",  "BD-Syn8 ",  "BD-Syn9 ",  "BD-Syn10",  "BD-Dist1",  "BD-Dist2",  "BD-Dist3",
  "BD-Dist4",  "BD-Dist5",  "BD-Dist6",  "BD-Dist7",  "BD-Squas",  "BD-88 1 ",  "BD-88 2 ",  "BD-Digi ",
  "BD-DDD1 ",  "BD-DDD2 ",  "BD-Lynn ",  "BD-Dry1 ",  "BD-Dry2 ",  "BD-Dry3 ",  "BD-Dry4 ",  "BD-Soft ",
  "BD-Hip  ",  "BD-R&B  ",  "BD-Jazz ",  "BD-Break",  "BD-Ambi ",  "BD-Def  ",  "BD-D&B1 ",  "BD-D&B2 ",
  "BigBreak",  "SD-99 1 ",  "SD-99 2 ",  "SD-99 3 ",  "SD-99 4 ",  "SD-99 5 ",  "SD-88 1 ",  "SD-88 2 ",
  "SD-88 3 ",  "SD-Syn1 ",  "SD-Syn2 ",  "SD-77   ",  "SD-Lynn ",  "SD-Disco",  "SD-Dry1 ",  "SD-Dry2 ",
  "SD-Dry3 ",  "SD-Dry4 ",  "SD-Dry5 ",  "SD-Dry6 ",  "SD-Ambi1",  "SD-Ambi2",  "SD-Ambi3",  "SD-Picl1",
  "SD-Picl2",  "SD-Picl3",  "SD-Bras1",  "SD-Bras2",  "SD-Crckl",  "SD-Brk1 ",  "SD-Brk2 ",  "SD-Brk3 ",
  "SD-Brk4 ",  "SD-D&B  ",  "SD-Clap1",  "SD-Clap2",  "SD-R&B1 ",  "SD-R&B2 ",  "SD-R&B3 ",  "SD-R&B4 ",
  "SD-R&B5 ",  "RM-Ambi1",  "RM-Ambi2",  "RM-Dry  ",  "RM-DDD  ",  "RM-Lynn ",  "RM-88   ",  "Clp-99 1",
  "Clp-99 2",  "Clp-88 1",  "Clp-88 2",  "Clp-Nois",  "Clp-R&B1",  "Clp-R&B2",  "HH-99 1C",  "HH-99 1O",
  "HH-99 2C",  "HH-99 2H",  "HH-99 2O",  "HH-99 3C",  "HH-99 3O",  "HH-88 C ",  "HH-88 O ",  "HH-Syn1C",
  "HH-Syn1H",  "HH-Syn1O",  "HH-Syn2C",  "HH-Syn2O",  "HH-Syn3C",  "HH-Syn3O",  "HH-Nrm1C",  "HH-Nrm1O",
  "HH-Nrm2C",  "HH-Nrm2O",  "HH-CrspC",  "HH-CrspO",  "HH-OldC ",  "HH-OldO ",  "HH-LynnC",  "HH-LynnO",
  "Rid-99 1",  "Rid-99 2",  "Rid-KPR ",  "Rid-Edg1",  "Rid-Edg2",  "Rid-Jazz",  "Crs-99 1",  "Crs-99 2",
  "Crs-Norm",  "Crs-Spls",  "Tom-99  ",  "Tom-88  ",  "Tom-Simm",  "Tom-NrmH",  "Tom-NrmL",  "Tom-NrmF",
  "Tom-Jazz",  "Bng-Hi  ",  "Bng-Slap",  "Bng-Lo1 ",  "Bng-Lo2 ",  "Cng-Hi1 ",  "Cng-Hi2 ",  "Cng-HiMt",
  "Cng-Lo1 ",  "Cng-Lo2 ",  "Cng-LoMt",  "Cng-LynH",  "Cng-LynL",  "Timb-Hi1",  "Timb-Hi2",  "Timb-Lo1",
  "Timb-Lo2",  "Timb-Rim",  "Claves  ",  "Cowbell ",  "ChaChaBl",  "MamboBel",  "Agogo   ",  "Triangle",
  "Tambouri",  "Junk1   ",  "Junk2   ",  "SleighBl",  "Shaker1 ",  "Shaker2 ",  "Cabasa1 ",  "Cabasa2 ",
  "Cabasa3 ",  "Guiro-S ",  "Guiro-L ",  "Wbl-DDDH",  "Wbl-DDDL",  "Whistle ",  "Baya-Ghe",  "Baya-Mt1",
  "Baya-Mt2",  "Tbla-Na ",  "Tbla-Tin",  "Tbla-Mt1",  "Tbla-Mt2",  "Djmb-1a ",  "Djmb-1b ",  "Djmb-1c ",
  "Djmb-2a ",  "Djmb-2b ",  "Djmb-2c ",  "Udu     ",  "Taiko-Op",  "Taiko-Rm",  "Tsuzumi ",  "GtrWah  ",
  "Zap1    ",  "Zap2    ",  "SynPerc1",  "SynPerc2",  "SynPerc3",  "SynPerc4",  "SynPerc5",  "SynPerc6",
  "Rev-BD  ",  "Rev-SD1 ",  "Rev-SD2 ",  "Rev-Crsh",  "Scratch1",  "Scratch2"
};

const char* pcm_synths[PCM_SYNTH_COUNT] = {
  "Piano   ",  "E.Piano ",  "Clav    ",  "M1-Organ",  "Organ   ",  "Marimba ",  "Vibe    ",  "Cymbell ",
  "Flute   ",  "AltoSax ",  "M1-T.Sax",  "Trumpet ",  "MuteTp  ",  "BrassEns",  "VoiceAh ",  "M1-Choir",
  "VoiceWav",  "Violin  ",  "Strings ",  "Pizzicat",  "F.Guitar",  "A.Guitar",  "MuteGtr ",  "FunkGtr ",
  "Sitar   ",  "A.Bass  ",  "E.Bass  ",  "M1-Bass ",  "PickBass",  "SlapBass",  "FMBass  ",  "88Bass  ",
  "BoostSaw",  "SawSqMix",  "HPFSaw  ",  "OctBass1",  "OctBass2",  "Saw5th  ",  "Squ5th  ",  "SynSin1 ",
  "SynSin2 ",  "SynSin3 ",  "SynSin4 ",  "SynSin5 ",  "SynWire1",  "SynWire2",  "Digi1   ",  "Digi2   ",
  "Digi3   ",  "Digi4   ",  "SynVox1 ",  "SynVox2 ",  "Endless ",  "Syn-FX1 ",  "Syn-FX2 ",  "OrchHit ",
  "BandHit1",  "BandHit2",  "DiscoHit",  "RaveHit1",  "RaveHit2",  "RaveHit3",  "RaveHit4",  "RaveHit5",
  "RaveHit6",  "CH-Piano",  "CH-M1Pia",  "CH-EPian",  "CH-Organ",  "CH-Strgs",  "CH-Gtr1 ",  "CH-Gtr2 ",
  "DR-BDs  ",  "DR-SDs  ",  "DR-CymTm"
};


void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) {
    int idx1 = pattern_bank_to_index(p1);
    int idx2 = pattern_bank_to_index(p2);

    printf("%s = %i, %s = %i \n", p1, idx1, p2, idx2);

    for (size_t i = 0; i < EMX_PATTERN_DATA_SIZE; ++i) {

        if (emx->patterns[idx1][i] != emx->patterns[idx2][i]) {
            printf("\n");
            printf("Byte offset: %4zu ", i); printf("\n");

            int abs_pos1 = EMX_HEADER_SIZE + (EMX_PATTERN_DATA_SIZE * idx1 + i);
            int abs_pos2 = EMX_HEADER_SIZE + (EMX_PATTERN_DATA_SIZE * idx2 + i);

            printf("  P1 %06x: ", abs_pos1);
            printf("%02X ", emx->patterns[idx1][i]);
            print_binary(emx->patterns[idx1][i]);
            printf("%*u ", 3, emx->patterns[idx1][i]);
            printf("%*d ", 4, (char)emx->patterns[idx1][i]);
            print_char(emx->patterns[idx1][i]);
            printf("\n");

            printf("  P2 %06x: ", abs_pos2);
            printf("%02X ", emx->patterns[idx2][i]);
            print_binary(emx->patterns[idx2][i]);
            printf("%*u ", 3, emx->patterns[idx2][i]);
            printf("%*i ", 4, (char)emx->patterns[idx2][i]);
            print_char(emx->patterns[idx2][i]);
            printf("\n");
        }
    }
}


int read_emx(const char *filename, EmxFile *emx_file) {

    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read the header (first 512 bytes)
    size_t bytesRead = fread(emx_file->header, 1, EMX_HEADER_SIZE, file);
    if (bytesRead != EMX_HEADER_SIZE) {
        perror("Error reading header");
        fclose(file);
        return EXIT_FAILURE;
    }


  // Read patterns
    for (int i = 0; i < PATTERN_COUNT; ++i) {

        bytesRead = fread(emx_file->patterns[i], 1, EMX_PATTERN_DATA_SIZE, file);
        if (bytesRead != EMX_PATTERN_DATA_SIZE) {
            perror("Error reading pattern data");
            fclose(file);
            return EXIT_FAILURE;
        }
    }

    fclose(file);
    return EXIT_SUCCESS;
}


#define EMX_PATTERN_NAME_OFFSET 0

#define EMX_PATTERN_NAME_LENGTH 8

#define EMX_PATTERN_TEMPO_OFFSET 8
//#define EMX_PATTERN_TEMPO_SIZE 2
#define EMX_PATTERN_TEMPO_SHIFT 7
#define EMX_PATTERN_TEMPO_MASK 0x0F

#define EMX_PATTERN_LENGTH_OFFSET 11
#define EMX_PATTERN_LENGTH_MASK 0x0F


//Synth Parts
#define EMX_PATTERN_SP1_NOTE_OFFSET 278
#define EMX_PATTERN_SP2_NOTE_OFFSET 554
#define EMX_PATTERN_SP3_NOTE_OFFSET 830
#define EMX_PATTERN_SP4_NOTE_OFFSET 1106
#define EMX_PATTERN_SP5_NOTE_OFFSET 1382

//Drum Parts
#define EMX_PATTERN_DP1_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP2_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP3_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP4_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP5_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP6A_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP6B_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP7A_TRIGGER_OFFSET 0
#define EMX_PATTERN_DP7B_TRIGGER_OFFSET 0

EmxDrumPart* parse_emx_drum_part(const unsigned char *p) {
    return NULL;
}

EmxDrumPart* parse_emx_synth_part(const unsigned char *p) {
    return NULL;
}

EmxPattern* parse_emx_pattern(const char *path, int index, const unsigned char *p) {

    EmxPattern *pattern = (EmxPattern *)calloc(1, sizeof(EmxPattern));

    if (!pattern) {
        perror("Failed to allocate memory for pattern");
        return NULL;
    }

    // File name
    snprintf(pattern->filename, sizeof(pattern->filename), "%s", get_filename(path));
    printf("%*s ",EMX_FILENAME_MAX , pattern->filename);

    // Pattern Bank
    index_to_pattern_bank(pattern->bank, index);
    printf("%s ", pattern->bank);

    // Pattern Name
    memcpy(pattern->name, p + EMX_PATTERN_NAME_OFFSET, PATTERN_NAME_LENGTH);
    pattern->name[PATTERN_NAME_LENGTH] = '\0'; // Null-terminate the string
    printf("%s ", pattern->name);

    // Pattern Tempo/BPM
    pattern->tempo = read_big_endian_short(
        (unsigned char) p[EMX_PATTERN_TEMPO_OFFSET],
        (unsigned char) p[EMX_PATTERN_TEMPO_OFFSET + 1]
    );
    printf("%03i.%i ",
           pattern->tempo >> EMX_PATTERN_TEMPO_SHIFT,
           pattern->tempo & EMX_PATTERN_TEMPO_MASK
    );

    // Pattern Length
    pattern->length = (p[EMX_PATTERN_LENGTH_OFFSET] & EMX_PATTERN_LENGTH_MASK) + 1;
    printf("%i ", pattern->length);

    printf("\n");

    //free(pattern); // Free allocated memory
    return pattern;
}

void parse_emx_file(const char *path, EmxFile *emx) {
    printf("FileName     Bank Name     BPM   Len\n");
    for (int i = 0; i < PATTERN_COUNT; ++i) {
        EmxPattern *pattern = parse_emx_pattern(path,i,emx->patterns[i]);
        free (pattern);
    }
}


