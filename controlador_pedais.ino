#include "Effect.h"
#include "EffectBank.h"
#include "Pedal.h"


int btn1 = 4, btn2 = 5, btn3 = 6, btn4 = 7, btn5 = 8;

int led1 = 18, led2 = 19, led3 = 20, led4 = 21, led5 = 22;

int pedal1[2] = {9, 10}, pedal2[2] = {10, 11}, pedal3[2] = {12, 13}, pedal4[2] = {14, 15}, pedal5[2] = {16, 17}; 

Pedal cs2(pedal1[0], pedal1[1], "CS-2");
Pedal sd1(pedal2[0], pedal2[1], "SD-1");
Pedal ds2(pedal3[0], pedal3[1], "DS-2");
Pedal booster(pedal4[0], pedal4[1], "Booster");
Pedal delayPedal(pedal5[0], pedal5[1], "Delay");

const Pedal* distortionBoosterPedalList[3] = {&sd1, &ds2, &booster};
const Pedal* soloPedalList[4] = {&sd1, &ds2, &booster, &delayPedal};
const Pedal* distortionCompressorPedalList[2] = {&cs2, &ds2};
const Pedal* distortionPedalList[1] = {&ds2};
const Pedal* distortionPreBoosterPedalList[2] = {&sd1, &ds2};

Effect distortionBoosterEffect("Distortion - Booster", distortionBoosterPedalList, 3);
Effect soloDistortionEffect("Distortion - Solo", soloPedalList, 4);
Effect distortionCompressorEffect("Distortion - Compressor", distortionCompressorPedalList, 2);
Effect distortionEffect("Distortion", distortionPedalList, 1);
Effect distortionPreBoosterEffect("Distortion - Pre boosted", distortionPreBoosterPedalList, 2);

int* pedals[] = {pedal1, pedal2, pedal3, pedal4, pedal5};


void setup() {

  Serial.begin(9600);
  
  int btnArr[5] = {btn1, btn2, btn3, btn4, btn5};

  reset(pedals, 5);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  while(true) {
    showInitialMessage();


  }

}

























