#include "FSM.h"

/* Tres estados
:: Read     Reads the MPU value
:: Write    Writes  on the motor by PWM
:: Wait     Waits until 2ms to have a pseudo sample
*/

//Inputs
int timeout(int64_t before){
  return millis() > 500UL + before;
}

//Outputs
void on(int64_t before){
  before = millis();
  PORTD |= (1 << 5);
}
void off(int64_t before){
  before = millis();
  PORTD &= ~(1 << 5);
}



//FSM
void fire(state_t state, int64_t before){
  // State 1 
  switch (state)
  {
  case LED_ON:
    if(timeout(before)){ 
      on(before);
      state = LED_OFF;
    }
    break;
  // State 2
  case LED_OFF:
    if(timeout(before)){
      off(before);
      state = LED_ON;
    }
    break;



  default:
    state = LED_OFF;
    break;
  }
}
