#include "main.h"

void setup() {
  state_t state = LED_OFF;
  int64_t before = 0;

  //Pins D6 and D5 as outputs
  DDRD |= (1 << 6) | (1 << 5);

  #ifdef DEBUG
  startPlotter();
  #endif

  while(1){
    fire(state, before);

    #ifdef DEBUG
    printPlotter();
    #endif
  }
}

/*
void loop() {
  fire();

  #ifdef DEBUG
  printPlotter();
  #endif
}
*/