//
// Created by Harrison Mutai on 21/10/2020.
//

#ifndef LAB_6_ENVSENSORAPP_H
#define LAB_6_ENVSENSORAPP_H

#include "stm32l475e_iot01_tsensor.h"
#include "stm32l475e_iot01_gyro.h"
#include "stm32l475e_iot01_magneto.h"
#include "stm32l475e_iot01_psensor.h"
#include "stm32l475e_iot01_accelero.h"
#include "stm32l475e_iot01_hsensor.h"
#include "DigitalOut.h"

class envSensorApp {
private:
    float _temp;
    float _pressure;
    float _humidity;
    float* _gyroXYZ;
    int16_t* _aXYZ; // accelaration data
    DigitalOut _led;

    int16_t toCelsius(int16_t temp_f){
        return((temp_f-32)*5/9);
    }
public:
    envSensorApp(PinName led) : _led(led), _temp(0), _pressure(0), _humidity(0) { }
    void init();
    void const readSensors();
    void printData();
};


#endif //LAB_6_ENVSENSORAPP_H
