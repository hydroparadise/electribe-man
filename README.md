Electibe Manager: electriber_man
  Reads and extracts pattern data from Electribe backup files

Planning to support the following:
   <p/>Electribe EMX-1: Started, currently can read patter names
   <p/>Electribe ESX-1: Plan to support but not started

TEST.EMX & TSER.EMX used as test files which are mostly default patterns from factory.

TSER.EMX - Patters for analysis
   <p/>D.33 Init - Completely empty
   <p/>D.* - Patterns that contain changes to compare with D.33

</p> example usage

emxread -f ../TSER.EMX -p -c D.33 D.37
