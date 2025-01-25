//emx.h
//TODO: test for proper header guarding
#pragma once

#define HEADER_SIZE 512
#define PATTERN_COUNT 256
#define PATTERN_DATA_SIZE 4806
#define PATTERN_NAME_LENGTH 8
#define NOTE_BANK_COUNT 8
#define NOTE_BANK_SIZE 16
#define NOTE_SIZE 3





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





/*
const char* pcm_perco[] = {
  "BD-Dark ",
  "BD-99 1 ",
  "BD-99 2 ",
  "BD-Syn1 ",
  "BD-Syn2 ",
  "BD-Syn3 ",
  "BD-Syn4 ",
  "BD-Syn5 ",
  "BD-Syn6 ",
  "BD-Syn7 ",
  "BD-Syn8 ",
  "BD-Syn9 ",
  "BD-Syn10",
  "BD-Dist1",
  "BD-Dist2",
  "BD-Dist3",
  "BD-Dist4",
  "BD-Dist5",
  "BD-Dist6",
  "BD-Dist7",
  "BD-Squas",
  "BD-88 1 ",
  "BD-88 2 ",
  "BD-Digi ",
  "BD-DDD1 ",
  "BD-DDD2 ",
  "BD-Lynn ",
  "BD-Dry1 ",
  "BD-Dry2 ",
  "BD-Dry3 ",
  "BD-Dry4 ",
  "BD-Soft ",
  "BD-Hip  ",
  "BD-R&B  ",
  "BD-Jazz ",
  "BD-Break",
  "BD-Ambi ",
  "BD-Def  ",
  "BD-D&B1 ",
  "BD-D&B2 ",
  "BigBreak",
  "SD-99 1 ",
  "SD-99 2 ",
  "SD-99 3 ",
  "SD-99 4 ",
  "SD-99 5 ",
  "SD-88 1 ",
  "SD-88 2 ",
  "SD-88 3 ",
  "SD-Syn1 ",
  "SD-Syn2 ",
  "SD-77   ",
  "SD-Lynn ",
  "SD-Disco",
  "SD-Dry1 ",
  "SD-Dry2 ",
  "SD-Dry3 ",
  "SD-Dry4 ",
  "SD-Dry5 ",
  "SD-Dry6 ",
  "SD-Ambi1",
  "SD-Ambi2",
  "SD-Ambi3",
  "SD-Picl1",
  "SD-Picl2",
  "SD-Picl3",
  "SD-Bras1",
  "SD-Bras2",
  "SD-Crckl",
  "SD-Brk1 ",
  "SD-Brk2 ",
  "SD-Brk3 ",
  "SD-Brk4 ",
  "SD-D&B  ",
  "SD-Clap1",
  "SD-Clap2",
  "SD-R&B1 ",
  "SD-R&B2 ",
  "SD-R&B3 ",
  "SD-R&B4 ",
  "SD-R&B5 ",
  "RM-Ambi1",
  "RM-Ambi2",
  "RM-Dry  ",
  "RM-DDD  ",
  "RM-Lynn ",
  "RM-88   ",
  "Clp-99 1",
  "Clp-99 2",
  "Clp-88 1",
  "Clp-88 2",
  "Clp-Nois",
  "Clp-R&B1",
  "Clp-R&B2",
  "HH-99 1C",
  "HH-99 1O",
  "HH-99 2C",
  "HH-99 2H",
  "HH-99 2O",
  "HH-99 3C",
  "HH-99 3O",
  "HH-88 C ",
  "HH-88 O ",
  "HH-Syn1C",
  "HH-Syn1H",
  "HH-Syn1O",
  "HH-Syn2C",
  "HH-Syn2O",
  "HH-Syn3C",
  "HH-Syn3O",
  "HH-Nrm1C",
  "HH-Nrm1O",
  "HH-Nrm2C",
  "HH-Nrm2O",
  "HH-CrspC",
  "HH-CrspO",
  "HH-OldC ",
  "HH-OldO ",
  "HH-LynnC",
  "HH-LynnO",
  "Rid-99 1",
  "Rid-99 2",
  "Rid-KPR ",
  "Rid-Edg1",
  "Rid-Edg2",
  "Rid-Jazz",
  "Crs-99 1",
  "Crs-99 2",
  "Crs-Norm",
  "Crs-Spls",
  "Tom-99  ",
  "Tom-88  ",
  "Tom-Simm",
  "Tom-NrmH",
  "Tom-NrmL",
  "Tom-NrmF",
  "Tom-Jazz",
  "Bng-Hi  ",
  "Bng-Slap",
  "Bng-Lo1 ",
  "Bng-Lo2 ",
  "Cng-Hi1 ",
  "Cng-Hi2 ",
  "Cng-HiMt",
  "Cng-Lo1 ",
  "Cng-Lo2 ",
  "Cng-LoMt",
  "Cng-LynH",
  "Cng-LynL",
  "Timb-Hi1",
  "Timb-Hi2",
  "Timb-Lo1",
  "Timb-Lo2",
  "Timb-Rim",
  "Claves  ",
  "Cowbell ",
  "ChaChaBl",
  "MamboBel",
  "Agogo   ",
  "Triangle",
  "Tambouri",
  "Junk1   ",
  "Junk2   ",
  "SleighBl",
  "Shaker1 ",
  "Shaker2 ",
  "Cabasa1 ",
  "Cabasa2 ",
  "Cabasa3 ",
  "Guiro-S ",
  "Guiro-L ",
  "Wbl-DDDH",
  "Wbl-DDDL",
  "Whistle ",
  "Baya-Ghe",
  "Baya-Mt1",
  "Baya-Mt2",
  "Tbla-Na ",
  "Tbla-Tin",
  "Tbla-Mt1",
  "Tbla-Mt2",
  "Djmb-1a ",
  "Djmb-1b ",
  "Djmb-1c ",
  "Djmb-2a ",
  "Djmb-2b ",
  "Djmb-2c ",
  "Udu     ",
  "Taiko-Op",
  "Taiko-Rm",
  "Tsuzumi ",
  "GtrWah  ",
  "Zap1    ",
  "Zap2    ",
  "SynPerc1",
  "SynPerc2",
  "SynPerc3",
  "SynPerc4",
  "SynPerc5",
  "SynPerc6",
  "Rev-BD  ",
  "Rev-SD1 ",
  "Rev-SD2 ",
  "Rev-Crsh",
  "Scratch1",
  "Scratch2",
};
*/