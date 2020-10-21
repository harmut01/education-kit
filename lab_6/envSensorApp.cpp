//
// Created by Harrison Mutai on 21/10/2020.
//

#include "envSensorApp.h"

void envSensorApp::init(){
    BSP_ACCELERO_Init();
    BSP_GYRO_Init();
    BSP_MAGNETO_Init();
    BSP_PSENSOR_Init();
    BSP_PSENSOR_Init();
}
void const envSensorApp::readSensors(){
    BSP_ACCELERO_AccGetXYZ(_aXYZ);
    BSP_GYRO_GetXYZ(_gyroXYZ);

    _temp = toCelsius(BSP_TSENSOR_ReadTemp());
    _pressure = BSP_PSENSOR_ReadPressure();
    _humidity = BSP_HSENSOR_ReadHumidity();

}
void envSensorApp::printData(){
    printf("Temperature = %d, Pressure = %d, Humidty = %d\n", _temp, _pressure, _humidity);
    printf("Accelaration (X, Y, Z): %d, %d, %d ", *_aXYZ, *(_aXYZ+1), *(_aXYZ+2));
    printf("Gyro (X, Y, Z): %d, %d, %d ", *_gyroXYZ, *(_gyroXYZ+1), *(_gyroXYZ+2));
}
