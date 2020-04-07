#ifndef FSM_H
#define FSM_H

#include "main.h"

/* Tres estados
:: Read     Reads the MPU value
:: Write    Writes  on the motor by PWM
:: Wait     Waits until 2ms to have a pseudo sample
*/

typedef enum states {
    LED_ON,
    LED_OFF,
    READ,
    WRITE,
    WAIT,
} state_t;

//Inputs
int timeout(int64_t before);

//Outputs
void on(int64_t before);
void off(int64_t before);

//FSM
void fire(state_t state, int64_t before, int16_t *x, int16_t *y, int16_t *z);

#endif /*FSM_H*/