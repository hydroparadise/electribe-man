//emx.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "util.h"
#include "emx.h"

const char* pcm_perc[PCM_DRUM_COUNT] = {
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

void compare_emx_pattern_data(const unsigned char *pattern1, const unsigned char *pattern2, size_t len) {
    for (size_t i = 0; i < len; ++i) {

        if (pattern1[i] != pattern2[i]) {
            printf("Difference at byte %zu: Pattern1[%03zu]:%02x vs Pattern2[%03zu]:%02x\n",
                 i, i, pattern1[i], i, pattern2[i]);
            print_binary(pattern1[i]); printf("\n");
            print_binary(pattern2[i]); printf("\n");
            printf("\n");
        }
    }
}

void compare_emx_bank_pattern_data(const char *p1, const char *p2, EmxFile *emx) {
    int idx1 = bank_pattern_to_index(p1);
    int idx2 = bank_pattern_to_index(p2);

    printf("%s = %i, %s = %i \n", p1, idx1, p2, idx2);
    compare_emx_pattern_data(emx->patterns[idx1], emx->patterns[idx2], PATTERN_DATA_SIZE);
}



int read_emx(const char *filename, EmxFile *emx_file) {

    FILE *file = fopen(filename, "rb");

    if (!file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read the header (first 512 bytes)
    size_t bytesRead = fread(emx_file->header, 1, HEADER_SIZE, file);
    if (bytesRead != HEADER_SIZE) {
        perror("Error reading header");
        fclose(file);
        return EXIT_FAILURE;
    }

  // Read patterns
    for (int i = 0; i < PATTERN_COUNT; ++i) {

        bytesRead = fread(emx_file->patterns[i], 1, PATTERN_DATA_SIZE, file);
        if (bytesRead != PATTERN_DATA_SIZE) {
            perror("Error reading pattern data");
            fclose(file);
            return EXIT_FAILURE;
        }
    }

    fclose(file);
    return EXIT_SUCCESS;
}