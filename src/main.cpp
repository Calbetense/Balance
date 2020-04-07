#include "main.h"

void setup() {
  //FSM Variables
  state_t state = LED_OFF;
  int64_t before = 0;
  //Storage variables
  int16_t x, y, z;

  //Pins D6 and D5 as outputs
  DDRD |= (1 << 6) | (1 << 5);

  //Init modules
  initMPU();
  #ifdef DEBUG
  startPlotter();
  #endif

  while(1){
    fire(state, before, &x, &y, &z);

    #ifdef DEBUG
    printPlotter();
    #endif
  }
}

/*
void loop() {
}
*/