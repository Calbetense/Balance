#ifndef MPU_H
#define MPU_H

#include "main.h"
#include <Wire.h>       //Just for now

#define MPU_ADDR       0x68
#define READ_BYTES     6

void initMPU();
void readMPU(int16_t *x, int16_t *y, int16_t *z);


#endif