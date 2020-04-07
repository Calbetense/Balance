#include "MPU.h"


void initMPU(){
    Wire.begin();
    //Disable Temperature Sensor
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x6B);
    Wire.write(1 << 3);
    Wire.endTransmission(true);
    // Low Pass Filter
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x1A);
    Wire.write(0b110);
    Wire.endTransmission(true);
}

void readMPU(int16_t *x, int16_t *y, int16_t *z){
    //Point to the gyro read register
    Wire.beginTransmission(MPU_ADDR);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    //Store the data
    Wire.requestFrom(MPU_ADDR, READ_BYTES, true);
    *x = Wire.read()<<8 | Wire.read();
    *y = Wire.read()<<8 | Wire.read();
    *z = Wire.read()<<8 | Wire.read();
}