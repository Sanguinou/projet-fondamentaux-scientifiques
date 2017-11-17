#include "cardio.h"

 float bpmCalc(float multiplier, float bpm, float timer, float bpfloat) {
  /*dividing the 60s by the amount of time that has passed, 
   *getting the number by which to multiply the number 
   *of beats to determine user's bpm
   */
  multiplier = 60000/timer;
     
  bpm = multiplier*bpfloat; //multiplying number of beats by multiplier to obtain number of beats per minute
}

