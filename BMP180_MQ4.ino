/* Code to measure Methane presence, Temperature and Pressure*/
#include "Arduino.h"
#include "SFE_BMP180.h"
#define MQ4_5V1_1_PIN_AOUT  A3
#define MQ4_5V2_2_PIN_AOUT  A1
#define MQ4_5V3_3_PIN_AOUT  A0
#define MQ4_5V4_4_PIN_AOUT  A2
SFE_BMP180 bmp180;
void setup() 
{
    Serial.begin(9600);
    while (!Serial) ; 
    Serial.println("start");
    bmp180.begin(); 
}
void loop() 
{
    double bmp180Pressure = bmp180.getPressure();
    double bmp180TempC = bmp180.getTemperatureC();
    int t= millis();
    Serial.println('('T','analogRead(MQ4_5V1_1_PIN_AOUT)','analogRead(MQ4_5V1_2_PIN_AOUT)','analogRead(MQ4_5V1_3_PIN_AOUT)','analogRead(MQ4_5V1_4_PIN_AOUT)','bmp180Pressure','bmp180TempC')');  
    delay(1000);
    
}
