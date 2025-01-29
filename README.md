Electibe Manager: electribe-man
  Reads and extracts pattern data from Electribe backup files

Planning to support the following:
   <p/>Electribe EMX-1: Started, currently can read pattern names and pattern content
   <p/>Electribe ESX-1: Plan to support but not started

TEST.EMX & TSER.EMX used as test files which are mostly default patterns from factory.

TSER.EMX - Patters for analysis
   <p/>D.33 Init - Completely empty
   <p/>D.* - Patterns that contain changes to compare with D.33


<pre>

 TSER.EMX A.33 Techno3  134.0 8 
        BD-99 2  1000100010001000 1000100010001000 1000100010001000 1000100010001010 1000100010001000 1000100010001000 1000100010001000 0010001000100010
        SD-99 1  0000100000001001 0000100000001001 0000100000001001 0000100000001001 0000100000001001 0000100000001001 0000100000001001 0000100000001001
        Clp-99 1 0000100000010000 0000100000010000 0000100000010000 0000100000010000 0000100000010000 0000100000010000 0000100000010000 0000100000010000
        HH-Syn1O 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000
        Claves   0010010100100100 0010010100100100 0010010100100100 0010010100100100 0010010100100100 0010010100100100 0010010100100100 0010010100100100
        HH-99 2C 0000010000001100 0000000000001100 0000010000001100 0000000000001100 0000010000001100 0000000000001100 0000010000001100 0000000000001100
        HH-99 2O 0010001100100010 0010001100100010 0010001100100010 0010001100100010 0010001100100010 0010001100100010 0010001100100010 0010001100100010
        Bng-Hi   0001100000100000 0001100000100000 0001100000100000 0001100000100000 0001100000100000 0001100000100000 0001100000100000 0001100000100000
        Bng-Lo1  0000001101000110 0000001101000110 0000001101000110 0000001101000110 0000001101000110 0000001101000110 0000001101000110 0000001101000110
        Synth 1   A#1 ___ A#1 ___ ___ A#2 A#1 ___ ___ A#1 ___ A#0 ___ ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ A#1 A#1 ___ ___ A#1 ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ ___ A#1 ___ A#0 ___ ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ A#1 A#1 ___ ___ A#1 ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ ___ A#1 ___ A#0 ___ ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ A#1 A#1 ___ ___ A#1 ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ ___ A#1 ___ A#0 ___ ___ ___ 
                 ___ A#1 ___ A#1 ___ ___ A#2 A#1 ___ A#1 A#1 ___ ___ A#1 ___ A#1
        Synth 2   ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 A#2 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___
        Synth 3   ___ G#3 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ F_3 ___ ___ F_3 ___ 
                 ___ ___ G#3 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ F_3 ___ ___ F_3 ___ 
                 ___ ___ G#3 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ F_3 ___ ___ F_3 ___ 
                 ___ ___ G#3 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ F_3 ___ ___ F_3 ___
        Synth 4   D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___ 
                 D_4 D_4 D_4 D_4 ___ ___ D_4 D_4 D_4 D_4 D_4 D_4 ___ ___ ___ ___
        Synth 5   ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 A#6 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
                 ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ ___

    TSER.EMX A.34 Techno4  133.0 8 
        BD-Syn10 1010000000100001 1010000000100000 1010000000100001 1010000000100001 1010000000100001 1010000000100000 1010000000100001 1010000000100101
        SD-Crckl 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000
        BD-Syn9  1000000000100000 1000000000100000 1000000000100000 1010000000100000 1000000000100000 1000000000100000 1000000000100000 1010000000100000
        SD-Lynn  0000100101011001 0100100101011001 0000100101011001 0100000101011001 0000100101011001 0100100101011001 0000100101011001 0100000101011001
        Cng-Hi1  0001011011010010 0001011011010010 0001011011010010 0001011011010010 0001011011010010 0001011011010010 0001011011010010 0001011011010010
        HH-Syn1C 1100110111001101 1100110111001101 1100110111001101 1100110111001101 1100110111001101 1100110111001101 1100110111001101 1100110111001101
        HH-Syn1H 0010001000100010 0010001000100010 0010001000100010 0010001000100010 0010001000100010 0010001000100010 0010001000100010 0010001000100010
        HH-Nrm2O 1010001000100010 1010001000100010 1010001000100010 1010001000100010 1010001000100010 1010001000100010 1010001000100010 1010001000100010
        Cng-Lo1  0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000
        Synth 1   ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2 
                 ___ ___ D#1 ___ D#2 ___ ___ C#2 ___ ___ D#1 ___ D#2 ___ ___ C#2
        Synth 2   ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3 
                 ___ ___ D#3 ___ D#3 ___ ___ C#3 ___ ___ D#3 ___ D#3 ___ ___ C#3
        Synth 3   D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 
                 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2 D#2
        Synth 4   D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 A#4 ___ 
                 D#4 A#4 D#4 ___ D#4 A#4 ___ D#4 A#4 D#4 A#4 D#4 A#4 D#5 D#4 ___ 
                 D#4 A#4 D#4 D#4 ___ D#4 ___ D#4 A#4 D#5 ___ D#4 A#4 D#4 ___ ___ 
                 D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 ___ D#4 A#4 D#5 D#4 D#4 D#4 A#4 
                 D#4 D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 A#4 ___ 
                 D#4 A#4 D#4 ___ D#4 A#4 ___ D#4 A#4 D#4 A#4 D#4 A#4 D#5 D#4 ___ 
                 D#4 A#4 D#4 D#4 ___ D#4 ___ D#4 A#4 D#5 ___ D#4 A#4 D#4 ___ ___ 
                 D#4 ___ D#4 A#4 D#5 D#4 ___ D#4 ___ D#4 A#4 D#5 D#4 D#4 D#4 A#4
        Synth 5   D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 ___ D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 ___ D#3 D#3 D#3 D#3 D#3 ___ ___ D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 D#3 D#3 D#3 D#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 ___ 
                 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 ___ D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 ___ D#3 D#3 D#3 D#3 D#3 ___ ___ D#3 D#3 D#3 D#3 D#3 D#3 D#3 D#3 
                 D#3 D#3 D#3 D#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 C#3 ___



/home/hydroparadise/dev/data/electribe-man/emxread -f TSER.EMX -c D.33 D.51
path: TSER.EMX
Reading file TSER.EMX
FileName     Bank Name     BPM   Len
    TSER.EMX A.01 Electro1 134.0 8 
        BD-Syn5  1000001000000000 1000001000100100 1000001000000000 1000001000100100 1000001000000000 1000001000100100 1000001000000000 1000001000100100
        SD-88 1  0000100000001000 0000100100001100 0000100000001000 0000100100001100 0000100000001000 0000100100001100 0000100000001000 0000100100001011
        SD-88 3  0100100101001001 0100100101001001 0100100101001001 0100100101011001 0100100101001001 0100100101001001 0100100101001001 0100100101011001
        BD-Lynn  1001001100100100 1001001100100110 1001001100100100 1001001100100110 1001001100100100 1001001100100110 1001001100100100 1001001100100110
        RM-88    0011010110010110 0011010110010110 0011010110010110 0011010110010110 0011010110010110 0011010110010110 0011010110010110 0011010110010110
        HH-Syn1H 1110111111101111 1110111111101111 1110111111101111 1110111111101111 1110111111101111 1110111111101111 1110111111101111 1110111111101111
        HH-Syn1O 0001000000100000 0001000000100100 0001000000100000 0001000000100100 0001000000100000 0001000000100100 0001000000100000 0001000000100100
        Zap1     0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000 0000100000001000
        BD-88 2  0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000 0000000000000000


./emxread -f TSER.EMX
path: TSER.EMX
Reading file TSER.EMX
FileName     Bank Name     BPM   Len
    TSER.EMX A.01 Electro1 134.0 8 
    TSER.EMX A.02 PrgHous1 136.0 8 
    TSER.EMX A.03 HardHs1  140.0 8 
    TSER.EMX A.04 UKHouse1 139.0 4 
    TSER.EMX A.05 House1   132.0 8 
    TSER.EMX A.06 GarageH1 125.0 8 
    TSER.EMX A.07 FJazz1   130.0 8 
    TSER.EMX A.08 NuSklBr1 138.0 4 
    TSER.EMX A.09 NuSklBr2 140.0 4 
    TSER.EMX A.10 DnB1     170.0 4 
    TSER.EMX A.11 DnB2     174.0 8 
    TSER.EMX A.12 DnB3     177.0 8 
    TSER.EMX A.13 DnB4     180.0 8 
    TSER.EMX A.14 HipHop1  072.0 8 
    TSER.EMX A.15 HipHop2  103.0 4 
    TSER.EMX A.16 HipHop3  098.0 4 
    TSER.EMX A.17 Trance1  140.0 8 
    TSER.EMX A.18 Trance2  138.0 8 
    TSER.EMX A.19 Trance3  138.0 8 
    TSER.EMX A.20 HTrance1 140.0 8 
    TSER.EMX A.21 PsyTrnc1 138.0 8 
    TSER.EMX A.22 Techno1  132.0 8 
    TSER.EMX A.23 Techno2  130.0 8 
    TSER.EMX A.24 Minimal1 137.0 8 
    TSER.EMX A.25 2Step1   134.0 4 
    TSER.EMX A.26 2Step2   134.0 4 
    TSER.EMX A.27 R&B1     104.0 4 
    TSER.EMX A.28 R&B2     095.0 4 
    TSER.EMX A.29 Funk1    109.0 8 
    TSER.EMX A.30 DownTmp1 091.0 8 
    TSER.EMX A.31 AmbiHs1  123.0 4 
    TSER.EMX A.32 IDM1     112.0 4 
    TSER.EMX A.33 Techno3  134.0 8 
    TSER.EMX A.34 Techno4  133.0 8 
    TSER.EMX A.35 Techno5  136.0 8 
    TSER.EMX A.36 Techno6  136.0 8 
    TSER.EMX A.37 Techno7  133.0 8 
    TSER.EMX A.38 Techno8  139.0 8 
    TSER.EMX A.39 Techno9  137.0 8 
    TSER.EMX A.40 Techno10 135.0 4 
    TSER.EMX A.41 Electro2 135.0 8 
    TSER.EMX A.42 Electro3 130.0 4 
    TSER.EMX A.43 Electro4 130.0 8 
    TSER.EMX A.44 Electro5 124.0 4 
    TSER.EMX A.45 Electro6 134.0 8 
    TSER.EMX A.46 IDM2     120.0 8 
    TSER.EMX A.47 IDM3     115.0 8 
    TSER.EMX A.48 IDM4     132.0 8 
    TSER.EMX A.49 IDM5     150.0 8 
    TSER.EMX A.50 IDM6     136.0 4 
    TSER.EMX A.51 IDM7     130.0 8 
    TSER.EMX A.52 IDM8     120.0 4 
    TSER.EMX A.53 Minimal2 140.0 8 
    TSER.EMX A.54 Minimal3 137.0 8 
    TSER.EMX A.55 Minimal4 135.0 4 
    TSER.EMX A.56 Minimal5 132.0 8 
    TSER.EMX A.57 Minimal6 135.0 8 
    TSER.EMX A.58 DnB5     174.0 8 
    TSER.EMX A.59 DnB6     176.0 8 
    TSER.EMX A.60 DnB7     173.0 8 
    TSER.EMX A.61 DnB8     172.0 8 
    TSER.EMX A.62 DnB9     173.0 8 
    TSER.EMX A.63 DnB10    176.0 8 
    TSER.EMX A.64 DnB11    179.0 8 
    TSER.EMX B.01 DnB12    175.0 8 
    TSER.EMX B.02 DnB13    170.0 4 
    TSER.EMX B.03 DnB14    175.0 8 
    TSER.EMX B.04 DnB15    174.0 8 
    TSER.EMX B.05 DnB16    170.0 8 
    TSER.EMX B.06 DnB17    184.0 8 
    TSER.EMX B.07 DnB18    173.0 8 
    TSER.EMX B.08 DnB19    177.0 8 
    TSER.EMX B.09 DnB20    175.0 8 
    TSER.EMX B.10 DnB21    180.0 8 
    TSER.EMX B.11 DnB22    180.0 8 
    TSER.EMX B.12 DnB23    175.0 8 
    TSER.EMX B.13 DnB24    175.0 8 
    TSER.EMX B.14 DnB25    175.0 8 
    TSER.EMX B.15 DnB26    175.0 8 
    TSER.EMX B.16 Trance4  142.0 8 
    TSER.EMX B.17 Trance5  142.0 8 
    TSER.EMX B.18 Trance6  135.0 8 
    TSER.EMX B.19 Trance7  140.0 8 
    TSER.EMX B.20 Trance8  141.0 8 
    TSER.EMX B.21 Trance9  137.0 8 
    TSER.EMX B.22 Trance10 138.0 8 
    TSER.EMX B.23 Trance11 136.0 8 
    TSER.EMX B.24 Trance12 142.0 8 
    TSER.EMX B.25 Trance13 143.0 8 
    TSER.EMX B.26 Trance14 135.0 8 
    TSER.EMX B.27 Trance15 135.0 8 
    TSER.EMX B.28 Trance16 137.0 8 
    TSER.EMX B.29 HTrance2 142.0 8 
    TSER.EMX B.30 HTrance3 139.0 8 
    TSER.EMX B.31 HTrance4 138.0 8 
    TSER.EMX B.32 HTrance5 137.0 8 
    TSER.EMX B.33 PsyTrnc2 140.0 4 
    TSER.EMX B.34 PsyTrnc3 140.0 8 
    TSER.EMX B.35 PsyTrnc4 147.0 8 
    TSER.EMX B.36 PsyTrnc5 140.0 8 
    TSER.EMX B.37 House2   130.0 4 
    TSER.EMX B.38 House3   128.0 4 
    TSER.EMX B.39 House4   128.0 8 
    TSER.EMX B.40 House5   134.0 8 
    TSER.EMX B.41 House6   140.0 4 
    TSER.EMX B.42 House7   135.0 8 
    TSER.EMX B.43 House8   138.0 8 
    TSER.EMX B.44 House9   126.0 4 
    TSER.EMX B.45 House10  129.0 4 
    TSER.EMX B.46 GarageH2 124.0 8 
    TSER.EMX B.47 GarageH3 127.0 8 
    TSER.EMX B.48 GarageH4 127.0 8 
    TSER.EMX B.49 GarageH5 126.0 8 
    TSER.EMX B.50 GarageH6 121.0 4 
    TSER.EMX B.51 GarageH7 126.0 4 
    TSER.EMX B.52 GarageH8 125.0 4 
    TSER.EMX B.53 UKHouse2 135.0 4 
    TSER.EMX B.54 UKHouse3 130.0 4 
    TSER.EMX B.55 UKHouse4 131.0 4 
    TSER.EMX B.56 UKHouse5 140.0 4 
    TSER.EMX B.57 UKHouse6 133.0 4 
    TSER.EMX B.58 PrgHous2 126.0 4 
    TSER.EMX B.59 PrgHous3 135.0 8 
    TSER.EMX B.60 PrgHous4 139.0 8 
    TSER.EMX B.61 PrgHous5 130.0 8 
    TSER.EMX B.62 HardHs2  141.0 8 
    TSER.EMX B.63 HardHs3  140.0 4 
    TSER.EMX B.64 HardHs4  154.0 8 
    TSER.EMX C.01 HardHs5  157.0 8 
    TSER.EMX C.02 HardHs6  150.0 8 
    TSER.EMX C.03 Gabba1   157.0 8 
    TSER.EMX C.04 2Step3   136.0 8 
    TSER.EMX C.05 2Step4   135.0 8 
    TSER.EMX C.06 2Step5   136.0 4 
    TSER.EMX C.07 2Step6   134.0 4 
    TSER.EMX C.08 2Step7   132.0 4 
    TSER.EMX C.09 2Step8   135.0 4 
    TSER.EMX C.10 2Step9   137.0 4 
    TSER.EMX C.11 NuSklBr3 140.0 8 
    TSER.EMX C.12 NuSklBr4 135.0 4 
    TSER.EMX C.13 NuSklBr5 133.0 8 
    TSER.EMX C.14 NuSklBr6 135.0 4 
    TSER.EMX C.15 NuSklBr7 135.0 4 
    TSER.EMX C.16 NuSklBr8 145.0 8 
    TSER.EMX C.17 NuSklBr9 137.0 8 
    TSER.EMX C.18 NuSklB10 138.0 4 
    TSER.EMX C.19 NuSklB11 136.0 4 
    TSER.EMX C.20 NuSklB12 135.0 4 
    TSER.EMX C.21 HipHop4  074.0 4 
    TSER.EMX C.22 HipHop5  099.0 4 
    TSER.EMX C.23 HipHop6  102.0 4 
    TSER.EMX C.24 HipHop7  108.0 4 
    TSER.EMX C.25 HipHop8  102.0 4 
    TSER.EMX C.26 HipHop9  098.0 4 
    TSER.EMX C.27 HipHop10 080.0 4 
    TSER.EMX C.28 HipHop11 101.0 4 
    TSER.EMX C.29 HipHop12 106.0 4 
    TSER.EMX C.30 HipHop13 140.0 8 
    TSER.EMX C.31 HipHop14 094.0 4 
    TSER.EMX C.32 HipHop15 095.0 8 
    TSER.EMX C.33 HipHop16 093.0 8 
    TSER.EMX C.34 HipHop17 093.0 8 
    TSER.EMX C.35 HipHop18 095.0 4 
    TSER.EMX C.36 HipHop19 103.0 8 
    TSER.EMX C.37 HipHop20 095.0 4 
    TSER.EMX C.38 HipHop21 090.0 4 
    TSER.EMX C.39 R&B3     085.0 4 
    TSER.EMX C.40 R&B4     112.0 4 
    TSER.EMX C.41 R&B5     125.0 8 
    TSER.EMX C.42 R&B6     099.0 4 
    TSER.EMX C.43 R&B7     102.0 8 
    TSER.EMX C.44 R&B8     104.0 8 
    TSER.EMX C.45 R&B9     125.0 8 
    TSER.EMX C.46 Funk2    110.0 4 
    TSER.EMX C.47 Funk3    104.0 4 
    TSER.EMX C.48 Funk4    108.0 8 
    TSER.EMX C.49 FJazz2   105.0 8 
    TSER.EMX C.50 FJazz3   112.0 8 
    TSER.EMX C.51 FJazz4   106.0 8 
    TSER.EMX C.52 DownTmp2 085.0 8 
    TSER.EMX C.53 DownTmp3 078.0 8 
    TSER.EMX C.54 DownTmp4 080.0 4 
    TSER.EMX C.55 DownTmp5 075.0 4 
    TSER.EMX C.56 DownTmp6 077.0 8 
    TSER.EMX C.57 DownTmp7 076.0 4 
    TSER.EMX C.58 AmbiHs2  127.0 8 
    TSER.EMX C.59 AmbiHs3  123.0 8 
    TSER.EMX C.60 AmbiHs4  130.0 8 
    TSER.EMX C.61 AmbiHs5  130.0 4 
    TSER.EMX C.62 AmbiHs6  125.0 4 
    TSER.EMX C.63 Dub1     080.0 4 
    TSER.EMX C.64 ER-1     132.0 4 
    TSER.EMX D.01 Demo1-1  138.0 8 
    TSER.EMX D.02 Demo1-2  138.0 8 
    TSER.EMX D.03 Demo1-3  138.0 8 
    TSER.EMX D.04 Demo1-4  138.0 8 
    TSER.EMX D.05 Demo1-5  138.0 8 
    TSER.EMX D.06 Demo1-6  138.0 2 
    TSER.EMX D.07 Demo2-1  125.0 8 
    TSER.EMX D.08 Demo2-2  125.0 8 
    TSER.EMX D.09 Demo2-3  125.0 8 
    TSER.EMX D.10 Demo2-4  125.0 8 
    TSER.EMX D.11 Demo3-1  140.0 8 
    TSER.EMX D.12 Demo3-2  140.0 8 
    TSER.EMX D.13 Demo3-3  140.0 8 
    TSER.EMX D.14 Demo4-1  102.0 8 
    TSER.EMX D.15 Demo4-2  102.0 8 
    TSER.EMX D.16 Demo4-3  102.0 8 
    TSER.EMX D.17 Demo4-4  102.0 8 
    TSER.EMX D.18 Demo4-5  102.0 8 
    TSER.EMX D.19 Demo4-6  102.0 8 
    TSER.EMX D.20 Demo4-7  102.0 8 
    TSER.EMX D.21 Demo4-8  102.0 4 
    TSER.EMX D.22 Demo5-1  180.0 8 
    TSER.EMX D.23 Demo5-2  180.0 8 
    TSER.EMX D.24 Demo5-3  180.0 8 
    TSER.EMX D.25 Demo5-4  180.0 8 
    TSER.EMX D.26 Demo5-5  180.0 8 
    TSER.EMX D.27 Demo5-6  180.0 8 
    TSER.EMX D.28 Demo5-7  180.0 8 
    TSER.EMX D.29 Demo6-1  126.0 8 
    TSER.EMX D.30 Demo6-2  126.0 8 
    TSER.EMX D.31 Demo6-3  126.0 8 
    TSER.EMX D.32 Demo6-4  126.0 8 
    TSER.EMX D.33 Init     120.0 1 
    TSER.EMX D.34 DP1t     120.0 1 
    TSER.EMX D.35 SP1t     120.0 1 
    TSER.EMX D.36 SP1t!    120.0 1 
    TSER.EMX D.37 SP1t!    120.0 2 
    TSER.EMX D.38 Init     135.0 1 
    TSER.EMX D.39 Init     120.0 1 
    TSER.EMX D.40 Init     120.0 1 
    TSER.EMX D.41 Init     130.0 1 
    TSER.EMX D.42 Init     130.0 2 
    TSER.EMX D.43 Init     130.0 2 
    TSER.EMX D.44 Init     020.0 2 
    TSER.EMX D.45 Init     300.0 2 
    TSER.EMX D.46 Init     299.9 2 
    TSER.EMX D.47 Init     299.8 2 
    TSER.EMX D.48 Init     298.1 2 
    TSER.EMX D.49 Init     120.0 1 
    TSER.EMX D.50 Init     120.0 1 
    TSER.EMX D.51 Init     120.0 1 
    TSER.EMX D.52 Init     120.0 1 
    TSER.EMX D.53 Init     120.0 1 
    TSER.EMX D.54 Init     120.0 1 
    TSER.EMX D.55 Init     120.0 1 
    TSER.EMX D.56 Init     120.0 1 
    TSER.EMX D.57 Init     120.0 1 
    TSER.EMX D.58 Init     120.0 1 
    TSER.EMX D.59 Init     120.0 1 
    TSER.EMX D.60 Init     120.0 1 
    TSER.EMX D.61 Init     120.0 1 
    TSER.EMX D.62 Init     120.0 1 
    TSER.EMX D.63 Init     120.0 1 
    TSER.EMX D.64 Init     120.0 1 



./emxread -f ../TSER.EMX -c D.33 D.37
Comparing patterns D.33 D.37 from file TSER.EMX
D.33 = 224, D.37 = 228 

Byte offset:    0 
  P1 106f40: 49 01001001  73   73 I
  P2 10ba58: 53 01010011  83   83 S

Byte offset:    1 
  P1 106f41: 6E 01101110 110  110 n
  P2 10ba59: 50 01010000  80   80 P

Byte offset:    2 
  P1 106f42: 69 01101001 105  105 i
  P2 10ba5a: 31 00110001  49   49 1

Byte offset:    4 
  P1 106f44: 20 00100000  32   32  
  P2 10ba5c: 21 00100001  33   33 !

Byte offset:   11 
  P1 106f4b: 00 00000000   0    0 .
  P2 10ba63: 01 00000001   1    1 .

Byte offset:  554 
  P1 10716a: BC 10111100 188  -68 .
  P2 10bc82: 3C 00111100  60   60 <

Byte offset:  555 
  P1 10716b: BC 10111100 188  -68 .
  P2 10bc83: 3D 00111101  61   61 =

Byte offset:  556 
  P1 10716c: BC 10111100 188  -68 .
  P2 10bc84: 3E 00111110  62   62 >

Byte offset:  557 
  P1 10716d: BC 10111100 188  -68 .
  P2 10bc85: 3F 00111111  63   63 ?

Byte offset:  558 
  P1 10716e: BC 10111100 188  -68 .
  P2 10bc86: 40 01000000  64   64 @

Byte offset:  559 
  P1 10716f: BC 10111100 188  -68 .
  P2 10bc87: 41 01000001  65   65 A

Byte offset:  560 
  P1 107170: BC 10111100 188  -68 .
  P2 10bc88: 42 01000010  66   66 B

Byte offset:  561 
  P1 107171: BC 10111100 188  -68 .
  P2 10bc89: 43 01000011  67   67 C

Byte offset:  562 
  P1 107172: BC 10111100 188  -68 .
  P2 10bc8a: C4 11000100 196  -60 .

Byte offset:  563 
  P1 107173: BC 10111100 188  -68 .
  P2 10bc8b: 45 01000101  69   69 E

Byte offset:  564 
  P1 107174: BC 10111100 188  -68 .
  P2 10bc8c: C6 11000110 198  -58 .

Byte offset:  565 
  P1 107175: BC 10111100 188  -68 .
  P2 10bc8d: 47 01000111  71   71 G

Byte offset:  566 
  P1 107176: BC 10111100 188  -68 .
  P2 10bc8e: C8 11001000 200  -56 .

Byte offset:  567 
  P1 107177: BC 10111100 188  -68 .
  P2 10bc8f: 49 01001001  73   73 I

Byte offset:  568 
  P1 107178: BC 10111100 188  -68 .
  P2 10bc90: CA 11001010 202  -54 .

Byte offset:  569 
  P1 107179: BC 10111100 188  -68 .
  P2 10bc91: CB 11001011 203  -53 .

Byte offset:  570 
  P1 10717a: BC 10111100 188  -68 .
  P2 10bc92: 00 00000000   0    0 .

Byte offset:  571 
  P1 10717b: BC 10111100 188  -68 .
  P2 10bc93: 3D 00111101  61   61 =

Byte offset:  572 
  P1 10717c: BC 10111100 188  -68 .
  P2 10bc94: 3E 00111110  62   62 >

Byte offset:  573 
  P1 10717d: BC 10111100 188  -68 .
  P2 10bc95: 3F 00111111  63   63 ?

Byte offset:  574 
  P1 10717e: BC 10111100 188  -68 .
  P2 10bc96: 40 01000000  64   64 @

Byte offset:  575 
  P1 10717f: BC 10111100 188  -68 .
  P2 10bc97: 41 01000001  65   65 A

Byte offset:  576 
  P1 107180: BC 10111100 188  -68 .
  P2 10bc98: 42 01000010  66   66 B

Byte offset:  577 
  P1 107181: BC 10111100 188  -68 .
  P2 10bc99: 43 01000011  67   67 C

Byte offset:  578 
  P1 107182: BC 10111100 188  -68 .
  P2 10bc9a: C4 11000100 196  -60 .

Byte offset:  579 
  P1 107183: BC 10111100 188  -68 .
  P2 10bc9b: C5 11000101 197  -59 .

Byte offset:  580 
  P1 107184: BC 10111100 188  -68 .
  P2 10bc9c: C6 11000110 198  -58 .

Byte offset:  581 
  P1 107185: BC 10111100 188  -68 .
  P2 10bc9d: C7 11000111 199  -57 .

Byte offset:  582 
  P1 107186: BC 10111100 188  -68 .
  P2 10bc9e: C8 11001000 200  -56 .

Byte offset:  583 
  P1 107187: BC 10111100 188  -68 .
  P2 10bc9f: C9 11001001 201  -55 .

Byte offset:  584 
  P1 107188: BC 10111100 188  -68 .
  P2 10bca0: CA 11001010 202  -54 .

Byte offset:  585 
  P1 107189: BC 10111100 188  -68 .
  P2 10bca1: FF 11111111 255   -1 .

Byte offset:  586 
  P1 10718a: BC 10111100 188  -68 .
  P2 10bca2: 3C 00111100  60   60 <

Byte offset:  587 
  P1 10718b: BC 10111100 188  -68 .
  P2 10bca3: 3D 00111101  61   61 =

Byte offset:  588 
  P1 10718c: BC 10111100 188  -68 .
  P2 10bca4: 3E 00111110  62   62 >

Byte offset:  589 
  P1 10718d: BC 10111100 188  -68 .
  P2 10bca5: 3F 00111111  63   63 ?

Byte offset:  590 
  P1 10718e: BC 10111100 188  -68 .
  P2 10bca6: 40 01000000  64   64 @

Byte offset:  591 
  P1 10718f: BC 10111100 188  -68 .
  P2 10bca7: 41 01000001  65   65 A

Byte offset:  592 
  P1 107190: BC 10111100 188  -68 .
  P2 10bca8: 42 01000010  66   66 B

Byte offset:  593 
  P1 107191: BC 10111100 188  -68 .
  P2 10bca9: 43 01000011  67   67 C

Byte offset:  594 
  P1 107192: BC 10111100 188  -68 .
  P2 10bcaa: C4 11000100 196  -60 .

Byte offset:  595 
  P1 107193: BC 10111100 188  -68 .
  P2 10bcab: 45 01000101  69   69 E

Byte offset:  596 
  P1 107194: BC 10111100 188  -68 .
  P2 10bcac: C6 11000110 198  -58 .

Byte offset:  597 
  P1 107195: BC 10111100 188  -68 .
  P2 10bcad: 47 01000111  71   71 G

Byte offset:  598 
  P1 107196: BC 10111100 188  -68 .
  P2 10bcae: C8 11001000 200  -56 .

Byte offset:  599 
  P1 107197: BC 10111100 188  -68 .
  P2 10bcaf: 49 01001001  73   73 I

Byte offset:  600 
  P1 107198: BC 10111100 188  -68 .
  P2 10bcb0: CA 11001010 202  -54 .

Byte offset:  601 
  P1 107199: BC 10111100 188  -68 .
  P2 10bcb1: CB 11001011 203  -53 .

Byte offset:  602 
  P1 10719a: BC 10111100 188  -68 .
  P2 10bcb2: 00 00000000   0    0 .

Byte offset:  603 
  P1 10719b: BC 10111100 188  -68 .
  P2 10bcb3: 3D 00111101  61   61 =

Byte offset:  604 
  P1 10719c: BC 10111100 188  -68 .
  P2 10bcb4: 3E 00111110  62   62 >

Byte offset:  605 
  P1 10719d: BC 10111100 188  -68 .
  P2 10bcb5: 3F 00111111  63   63 ?

Byte offset:  606 
  P1 10719e: BC 10111100 188  -68 .
  P2 10bcb6: 40 01000000  64   64 @

Byte offset:  607 
  P1 10719f: BC 10111100 188  -68 .
  P2 10bcb7: 41 01000001  65   65 A

Byte offset:  608 
  P1 1071a0: BC 10111100 188  -68 .
  P2 10bcb8: 42 01000010  66   66 B

Byte offset:  609 
  P1 1071a1: BC 10111100 188  -68 .
  P2 10bcb9: 43 01000011  67   67 C

Byte offset:  610 
  P1 1071a2: BC 10111100 188  -68 .
  P2 10bcba: C4 11000100 196  -60 .

Byte offset:  611 
  P1 1071a3: BC 10111100 188  -68 .
  P2 10bcbb: C5 11000101 197  -59 .

Byte offset:  612 
  P1 1071a4: BC 10111100 188  -68 .
  P2 10bcbc: C6 11000110 198  -58 .

Byte offset:  613 
  P1 1071a5: BC 10111100 188  -68 .
  P2 10bcbd: C7 11000111 199  -57 .

Byte offset:  614 
  P1 1071a6: BC 10111100 188  -68 .
  P2 10bcbe: C8 11001000 200  -56 .

Byte offset:  615 
  P1 1071a7: BC 10111100 188  -68 .
  P2 10bcbf: C9 11001001 201  -55 .

Byte offset:  616 
  P1 1071a8: BC 10111100 188  -68 .
  P2 10bcc0: CA 11001010 202  -54 .

Byte offset:  617 
  P1 1071a9: BC 10111100 188  -68 .
  P2 10bcc1: FF 11111111 255   -1 .

Byte offset:  618 
  P1 1071aa: BC 10111100 188  -68 .
  P2 10bcc2: 3C 00111100  60   60 <

Byte offset:  619 
  P1 1071ab: BC 10111100 188  -68 .
  P2 10bcc3: 3D 00111101  61   61 =

Byte offset:  620 
  P1 1071ac: BC 10111100 188  -68 .
  P2 10bcc4: 3E 00111110  62   62 >

Byte offset:  621 
  P1 1071ad: BC 10111100 188  -68 .
  P2 10bcc5: 3F 00111111  63   63 ?

Byte offset:  622 
  P1 1071ae: BC 10111100 188  -68 .
  P2 10bcc6: 40 01000000  64   64 @

Byte offset:  623 
  P1 1071af: BC 10111100 188  -68 .
  P2 10bcc7: 41 01000001  65   65 A

Byte offset:  624 
  P1 1071b0: BC 10111100 188  -68 .
  P2 10bcc8: 42 01000010  66   66 B

Byte offset:  625 
  P1 1071b1: BC 10111100 188  -68 .
  P2 10bcc9: 43 01000011  67   67 C

Byte offset:  626 
  P1 1071b2: BC 10111100 188  -68 .
  P2 10bcca: C4 11000100 196  -60 .

Byte offset:  627 
  P1 1071b3: BC 10111100 188  -68 .
  P2 10bccb: 45 01000101  69   69 E

Byte offset:  628 
  P1 1071b4: BC 10111100 188  -68 .
  P2 10bccc: C6 11000110 198  -58 .

Byte offset:  629 
  P1 1071b5: BC 10111100 188  -68 .
  P2 10bccd: 47 01000111  71   71 G

Byte offset:  630 
  P1 1071b6: BC 10111100 188  -68 .
  P2 10bcce: C8 11001000 200  -56 .

Byte offset:  631 
  P1 1071b7: BC 10111100 188  -68 .
  P2 10bccf: 49 01001001  73   73 I

Byte offset:  632 
  P1 1071b8: BC 10111100 188  -68 .
  P2 10bcd0: CA 11001010 202  -54 .

Byte offset:  633 
  P1 1071b9: BC 10111100 188  -68 .
  P2 10bcd1: CB 11001011 203  -53 .

Byte offset:  634 
  P1 1071ba: BC 10111100 188  -68 .
  P2 10bcd2: 00 00000000   0    0 .

Byte offset:  635 
  P1 1071bb: BC 10111100 188  -68 .
  P2 10bcd3: 3D 00111101  61   61 =

Byte offset:  636 
  P1 1071bc: BC 10111100 188  -68 .
  P2 10bcd4: 3E 00111110  62   62 >

Byte offset:  637 
  P1 1071bd: BC 10111100 188  -68 .
  P2 10bcd5: 3F 00111111  63   63 ?

Byte offset:  638 
  P1 1071be: BC 10111100 188  -68 .
  P2 10bcd6: 40 01000000  64   64 @

Byte offset:  639 
  P1 1071bf: BC 10111100 188  -68 .
  P2 10bcd7: 41 01000001  65   65 A

Byte offset:  640 
  P1 1071c0: BC 10111100 188  -68 .
  P2 10bcd8: 42 01000010  66   66 B

Byte offset:  641 
  P1 1071c1: BC 10111100 188  -68 .
  P2 10bcd9: 43 01000011  67   67 C

Byte offset:  642 
  P1 1071c2: BC 10111100 188  -68 .
  P2 10bcda: C4 11000100 196  -60 .

Byte offset:  643 
  P1 1071c3: BC 10111100 188  -68 .
  P2 10bcdb: C5 11000101 197  -59 .

Byte offset:  644 
  P1 1071c4: BC 10111100 188  -68 .
  P2 10bcdc: C6 11000110 198  -58 .

Byte offset:  645 
  P1 1071c5: BC 10111100 188  -68 .
  P2 10bcdd: C7 11000111 199  -57 .

Byte offset:  646 
  P1 1071c6: BC 10111100 188  -68 .
  P2 10bcde: C8 11001000 200  -56 .

Byte offset:  647 
  P1 1071c7: BC 10111100 188  -68 .
  P2 10bcdf: C9 11001001 201  -55 .

Byte offset:  648 
  P1 1071c8: BC 10111100 188  -68 .
  P2 10bce0: CA 11001010 202  -54 .

Byte offset:  649 
  P1 1071c9: BC 10111100 188  -68 .
  P2 10bce1: FF 11111111 255   -1 .

Byte offset:  650 
  P1 1071ca: BC 10111100 188  -68 .
  P2 10bce2: 3C 00111100  60   60 <

Byte offset:  651 
  P1 1071cb: BC 10111100 188  -68 .
  P2 10bce3: 3D 00111101  61   61 =

Byte offset:  652 
  P1 1071cc: BC 10111100 188  -68 .
  P2 10bce4: 3E 00111110  62   62 >

Byte offset:  653 
  P1 1071cd: BC 10111100 188  -68 .
  P2 10bce5: 3F 00111111  63   63 ?

Byte offset:  654 
  P1 1071ce: BC 10111100 188  -68 .
  P2 10bce6: 40 01000000  64   64 @

Byte offset:  655 
  P1 1071cf: BC 10111100 188  -68 .
  P2 10bce7: 41 01000001  65   65 A

Byte offset:  656 
  P1 1071d0: BC 10111100 188  -68 .
  P2 10bce8: 42 01000010  66   66 B

Byte offset:  657 
  P1 1071d1: BC 10111100 188  -68 .
  P2 10bce9: 43 01000011  67   67 C

Byte offset:  658 
  P1 1071d2: BC 10111100 188  -68 .
  P2 10bcea: C4 11000100 196  -60 .

Byte offset:  659 
  P1 1071d3: BC 10111100 188  -68 .
  P2 10bceb: 45 01000101  69   69 E

Byte offset:  660 
  P1 1071d4: BC 10111100 188  -68 .
  P2 10bcec: C6 11000110 198  -58 .

Byte offset:  661 
  P1 1071d5: BC 10111100 188  -68 .
  P2 10bced: 47 01000111  71   71 G

Byte offset:  662 
  P1 1071d6: BC 10111100 188  -68 .
  P2 10bcee: C8 11001000 200  -56 .

Byte offset:  663 
  P1 1071d7: BC 10111100 188  -68 .
  P2 10bcef: 49 01001001  73   73 I

Byte offset:  664 
  P1 1071d8: BC 10111100 188  -68 .
  P2 10bcf0: CA 11001010 202  -54 .

Byte offset:  665 
  P1 1071d9: BC 10111100 188  -68 .
  P2 10bcf1: CB 11001011 203  -53 .

Byte offset:  666 
  P1 1071da: BC 10111100 188  -68 .
  P2 10bcf2: 00 00000000   0    0 .

Byte offset:  667 
  P1 1071db: BC 10111100 188  -68 .
  P2 10bcf3: 3D 00111101  61   61 =

Byte offset:  668 
  P1 1071dc: BC 10111100 188  -68 .
  P2 10bcf4: 3E 00111110  62   62 >

Byte offset:  669 
  P1 1071dd: BC 10111100 188  -68 .
  P2 10bcf5: 3F 00111111  63   63 ?

Byte offset:  670 
  P1 1071de: BC 10111100 188  -68 .
  P2 10bcf6: 40 01000000  64   64 @

Byte offset:  671 
  P1 1071df: BC 10111100 188  -68 .
  P2 10bcf7: 41 01000001  65   65 A

Byte offset:  672 
  P1 1071e0: BC 10111100 188  -68 .
  P2 10bcf8: 42 01000010  66   66 B

Byte offset:  673 
  P1 1071e1: BC 10111100 188  -68 .
  P2 10bcf9: 43 01000011  67   67 C

Byte offset:  674 
  P1 1071e2: BC 10111100 188  -68 .
  P2 10bcfa: C4 11000100 196  -60 .

Byte offset:  675 
  P1 1071e3: BC 10111100 188  -68 .
  P2 10bcfb: C5 11000101 197  -59 .

Byte offset:  676 
  P1 1071e4: BC 10111100 188  -68 .
  P2 10bcfc: C6 11000110 198  -58 .

Byte offset:  677 
  P1 1071e5: BC 10111100 188  -68 .
  P2 10bcfd: C7 11000111 199  -57 .

Byte offset:  678 
  P1 1071e6: BC 10111100 188  -68 .
  P2 10bcfe: C8 11001000 200  -56 .

Byte offset:  679 
  P1 1071e7: BC 10111100 188  -68 .
  P2 10bcff: C9 11001001 201  -55 .

Byte offset:  680 
  P1 1071e8: BC 10111100 188  -68 .
  P2 10bd00: CA 11001010 202  -54 .

Byte offset:  681 
  P1 1071e9: BC 10111100 188  -68 .
  P2 10bd01: FF 11111111 255   -1 .

Byte offset:  697 
  P1 1071f9: 02 00000010   2    2 .
  P2 10bd11: 00 00000000   0    0 .

Byte offset:  713 
  P1 107209: 02 00000010   2    2 .
  P2 10bd21: 00 00000000   0    0 .

Byte offset:  729 
  P1 107219: 02 00000010   2    2 .
  P2 10bd31: 00 00000000   0    0 .

Byte offset:  745 
  P1 107229: 02 00000010   2    2 .
  P2 10bd41: 00 00000000   0    0 .

Byte offset:  761 
  P1 107239: 02 00000010   2    2 .
  P2 10bd51: 00 00000000   0    0 .

Byte offset:  777 
  P1 107249: 02 00000010   2    2 .
  P2 10bd61: 00 00000000   0    0 .

Byte offset:  793 
  P1 107259: 02 00000010   2    2 .
  P2 10bd71: 00 00000000   0    0 .

Byte offset:  809 
  P1 107269: 02 00000010   2    2 .
  P2 10bd81: 00 00000000   0    0 .
</pre>
