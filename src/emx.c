//emx.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "util.h"
#include "emx.h"

const char pcm_drum[PCM_DRUM_COUNT][PCM_NAME_LENGTH + 1] = {
  "BD-Dark \0",  "BD-99 1 \0",  "BD-99 2 \0",  "BD-Syn1 \0",  "BD-Syn2 \0",  "BD-Syn3 \0",  "BD-Syn4 \0",  "BD-Syn5 \0",
  "BD-Syn6 \0",  "BD-Syn7 \0",  "BD-Syn8 \0",  "BD-Syn9 \0",  "BD-Syn10\0",  "BD-Dist1\0",  "BD-Dist2\0",  "BD-Dist3\0",
  "BD-Dist4\0",  "BD-Dist5\0",  "BD-Dist6\0",  "BD-Dist7\0",  "BD-Squas\0",  "BD-88 1 \0",  "BD-88 2 \0",  "BD-Digi \0",
  "BD-DDD1 \0",  "BD-DDD2 \0",  "BD-Lynn \0",  "BD-Dry1 \0",  "BD-Dry2 \0",  "BD-Dry3 \0",  "BD-Dry4 \0",  "BD-Soft \0",
  "BD-Hip  \0",  "BD-R&B  \0",  "BD-Jazz \0",  "BD-Break\0",  "BD-Ambi \0",  "BD-Def  \0",  "BD-D&B1 \0",  "BD-D&B2 \0",
  "BigBreak\0",  "SD-99 1 \0",  "SD-99 2 \0",  "SD-99 3 \0",  "SD-99 4 \0",  "SD-99 5 \0",  "SD-88 1 \0",  "SD-88 2 \0",
  "SD-88 3 \0",  "SD-Syn1 \0",  "SD-Syn2 \0",  "SD-77   \0",  "SD-Lynn \0",  "SD-Disco\0",  "SD-Dry1 \0",  "SD-Dry2 \0",
  "SD-Dry3 \0",  "SD-Dry4 \0",  "SD-Dry5 \0",  "SD-Dry6 \0",  "SD-Ambi1\0",  "SD-Ambi2\0",  "SD-Ambi3\0",  "SD-Picl1\0",
  "SD-Picl2\0",  "SD-Picl3\0",  "SD-Bras1\0",  "SD-Bras2\0",  "SD-Crckl\0",  "SD-Brk1 \0",  "SD-Brk2 \0",  "SD-Brk3 \0",
  "SD-Brk4 \0",  "SD-D&B  \0",  "SD-Clap1\0",  "SD-Clap2\0",  "SD-R&B1 \0",  "SD-R&B2 \0",  "SD-R&B3 \0",  "SD-R&B4 \0",
  "SD-R&B5 \0",  "RM-Ambi1\0",  "RM-Ambi2\0",  "RM-Dry  \0",  "RM-DDD  \0",  "RM-Lynn \0",  "RM-88   \0",  "Clp-99 1\0",
  "Clp-99 2\0",  "Clp-88 1\0",  "Clp-88 2\0",  "Clp-Nois\0",  "Clp-R&B1\0",  "Clp-R&B2\0",  "HH-99 1C\0",  "HH-99 1O\0",
  "HH-99 2C\0",  "HH-99 2H\0",  "HH-99 2O\0",  "HH-99 3C\0",  "HH-99 3O\0",  "HH-88 C \0",  "HH-88 O \0",  "HH-Syn1C\0",
  "HH-Syn1H\0",  "HH-Syn1O\0",  "HH-Syn2C\0",  "HH-Syn2O\0",  "HH-Syn3C\0",  "HH-Syn3O\0",  "HH-Nrm1C\0",  "HH-Nrm1O\0",
  "HH-Nrm2C\0",  "HH-Nrm2O\0",  "HH-CrspC\0",  "HH-CrspO\0",  "HH-OldC \0",  "HH-OldO \0",  "HH-LynnC\0",  "HH-LynnO\0",
  "Rid-99 1\0",  "Rid-99 2\0",  "Rid-KPR \0",  "Rid-Edg1\0",  "Rid-Edg2\0",  "Rid-Jazz\0",  "Crs-99 1\0",  "Crs-99 2\0",
  "Crs-Norm\0",  "Crs-Spls\0",  "Tom-99  \0",  "Tom-88  \0",  "Tom-Simm\0",  "Tom-NrmH\0",  "Tom-NrmL\0",  "Tom-NrmF\0",
  "Tom-Jazz\0",  "Bng-Hi  \0",  "Bng-Slap\0",  "Bng-Lo1 \0",  "Bng-Lo2 \0",  "Cng-Hi1 \0",  "Cng-Hi2 \0",  "Cng-HiMt\0",
  "Cng-Lo1 \0",  "Cng-Lo2 \0",  "Cng-LoMt\0",  "Cng-LynH\0",  "Cng-LynL\0",  "Timb-Hi1\0",  "Timb-Hi2\0",  "Timb-Lo1\0",
  "Timb-Lo2\0",  "Timb-Rim\0",  "Claves  \0",  "Cowbell \0",  "ChaChaBl\0",  "MamboBel\0",  "Agogo   \0",  "Triangle\0",
  "Tambouri\0",  "Junk1   \0",  "Junk2   \0",  "SleighBl\0",  "Shaker1 \0",  "Shaker2 \0",  "Cabasa1 \0",  "Cabasa2 \0",
  "Cabasa3 \0",  "Guiro-S \0",  "Guiro-L \0",  "Wbl-DDDH\0",  "Wbl-DDDL\0",  "Whistle \0",  "Baya-Ghe\0",  "Baya-Mt1\0",
  "Baya-Mt2\0",  "Tbla-Na \0",  "Tbla-Tin\0",  "Tbla-Mt1\0",  "Tbla-Mt2\0",  "Djmb-1a \0",  "Djmb-1b \0",  "Djmb-1c \0",
  "Djmb-2a \0",  "Djmb-2b \0",  "Djmb-2c \0",  "Udu     \0",  "Taiko-Op\0",  "Taiko-Rm\0",  "Tsuzumi \0",  "GtrWah  \0",
  "Zap1    \0",  "Zap2    \0",  "SynPerc1\0",  "SynPerc2\0",  "SynPerc3\0",  "SynPerc4\0",  "SynPerc5\0",  "SynPerc6\0",
  "Rev-BD  \0",  "Rev-SD1 \0",  "Rev-SD2 \0",  "Rev-Crsh\0",  "Scratch1\0",  "Scratch2"
};

const char* pcm_synths[PCM_SYNTH_COUNT] = {
  "Piano   \0",  "E.Piano \0",  "Clav    \0",  "M1-Organ\0",  "Organ   \0",  "Marimba \0",  "Vibe    \0",  "Cymbell \0",
  "Flute   \0",  "AltoSax \0",  "M1-T.Sax\0",  "Trumpet \0",  "MuteTp  \0",  "BrassEns\0",  "VoiceAh \0",  "M1-Choir\0",
  "VoiceWav\0",  "Violin  \0",  "Strings \0",  "Pizzicat\0",  "F.Guitar\0",  "A.Guitar\0",  "MuteGtr \0",  "FunkGtr \0",
  "Sitar   \0",  "A.Bass  \0",  "E.Bass  \0",  "M1-Bass \0",  "PickBass\0",  "SlapBass\0",  "FMBass  \0",  "88Bass  \0",
  "BoostSaw\0",  "SawSqMix\0",  "HPFSaw  \0",  "OctBass1\0",  "OctBass2\0",  "Saw5th  \0",  "Squ5th  \0",  "SynSin1 \0",
  "SynSin2 \0",  "SynSin3 \0",  "SynSin4 \0",  "SynSin5 \0",  "SynWire1\0",  "SynWire2\0",  "Digi1   \0",  "Digi2   \0",
  "Digi3   \0",  "Digi4   \0",  "SynVox1 \0",  "SynVox2 \0",  "Endless \0",  "Syn-FX1 \0",  "Syn-FX2 \0",  "OrchHit \0",
  "BandHit1\0",  "BandHit2\0",  "DiscoHit\0",  "RaveHit1\0",  "RaveHit2\0",  "RaveHit3\0",  "RaveHit4\0",  "RaveHit5\0",
  "RaveHit6\0",  "CH-Piano\0",  "CH-M1Pia\0",  "CH-EPian\0",  "CH-Organ\0",  "CH-Strgs\0",  "CH-Gtr1 \0",  "CH-Gtr2 \0",
  "DR-BDs  \0",  "DR-SDs  \0",  "DR-CymTm"
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


// Drum Part PCM
#define EMX_PATTERN_DP1_PCM_OFFSET 24
#define EMX_PATTERN_DP2_PCM_OFFSET 50
#define EMX_PATTERN_DP3_PCM_OFFSET 76
#define EMX_PATTERN_DP4_PCM_OFFSET 102
#define EMX_PATTERN_DP5_PCM_OFFSET 128
#define EMX_PATTERN_DP6A_PCM_OFFSET 154
#define EMX_PATTERN_DP6B_PCM_OFFSET 180
#define EMX_PATTERN_DP7A_PCM_OFFSET 206
#define EMX_PATTERN_DP7B_PCM_OFFSET 232
#define EMX_PATTERN_PCM_SIZE 1

// Drum Part Triggers
#define EMX_PATTERN_DP1_TRIGGER_OFFSET 34
#define EMX_PATTERN_DP2_TRIGGER_OFFSET 60
#define EMX_PATTERN_DP3_TRIGGER_OFFSET 86
#define EMX_PATTERN_DP4_TRIGGER_OFFSET 112
#define EMX_PATTERN_DP5_TRIGGER_OFFSET 138
#define EMX_PATTERN_DP6A_TRIGGER_OFFSET 164
#define EMX_PATTERN_DP6B_TRIGGER_OFFSET 190
#define EMX_PATTERN_DP7A_TRIGGER_OFFSET 216
#define EMX_PATTERN_DP7B_TRIGGER_OFFSET 242
#define EMX_PATTERN_TRIGGER_SIZE 16

// Synth Parts
#define EMX_PATTERN_SP1_NOTE_OFFSET 278
#define EMX_PATTERN_SP2_NOTE_OFFSET 554
#define EMX_PATTERN_SP3_NOTE_OFFSET 830
#define EMX_PATTERN_SP4_NOTE_OFFSET 1106
#define EMX_PATTERN_SP5_NOTE_OFFSET 1382


size_t emx_drum_pcm_offsets[EMX_DRUM_PART_COUNT] = {
	EMX_PATTERN_DP1_PCM_OFFSET,
	EMX_PATTERN_DP2_PCM_OFFSET,
	EMX_PATTERN_DP3_PCM_OFFSET,
	EMX_PATTERN_DP4_PCM_OFFSET,
	EMX_PATTERN_DP5_PCM_OFFSET,
	EMX_PATTERN_DP6A_PCM_OFFSET,
	EMX_PATTERN_DP6B_PCM_OFFSET,
	EMX_PATTERN_DP7A_PCM_OFFSET,
	EMX_PATTERN_DP7B_PCM_OFFSET
};

size_t emx_drum_trigger_offsets[EMX_DRUM_PART_COUNT] = {
	EMX_PATTERN_DP1_TRIGGER_OFFSET,
	EMX_PATTERN_DP2_TRIGGER_OFFSET,
	EMX_PATTERN_DP3_TRIGGER_OFFSET,
	EMX_PATTERN_DP4_TRIGGER_OFFSET,
	EMX_PATTERN_DP5_TRIGGER_OFFSET,
	EMX_PATTERN_DP6A_TRIGGER_OFFSET,
	EMX_PATTERN_DP6B_TRIGGER_OFFSET,
	EMX_PATTERN_DP7A_TRIGGER_OFFSET,
	EMX_PATTERN_DP7B_TRIGGER_OFFSET
};

EmxDrumPart* parse_emx_drum_part(const unsigned char *p, short index) {
    EmxDrumPart *drum_part = (EmxDrumPart *)calloc(1, sizeof(EmxDrumPart));

    drum_part->pcm_index = p[emx_drum_pcm_offsets[index]];

    int o = emx_drum_trigger_offsets[index];
	int flip = 0;

    for(int i = 0; i < NOTE_BANK_COUNT * NOTE_BANK_SIZE; i++) {
		int t = o + (2*i / (EMX_PATTERN_TRIGGER_SIZE));
        //printf(" %i " ,t);
        drum_part->triggers[i][TRIGGER_SIZE -1] = (char)(p[t] >>  i % 8) & 0x1;
    }

    return drum_part;
}

EmxDrumPart* parse_emx_synth_part(const unsigned char *p, short index) {
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


    for(int i = 0; i < EMX_DRUM_PART_COUNT; i++) {
      	pattern->drum_parts[i] = *parse_emx_drum_part(p, i);
        printf("\n        %s", pcm_drum[pattern->drum_parts[i].pcm_index]);
        for(int j = 0; j < NOTE_BANK_COUNT * NOTE_BANK_SIZE; j++) {
             if(j%16==0)printf(" ");
            printf("%i",*pattern->drum_parts[i].triggers[j]);

        }
    }

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


