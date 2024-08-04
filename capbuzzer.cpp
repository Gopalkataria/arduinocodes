// code for task : 4

#include <ADCTouch.h>

int ref ;     //reference values to remove offset
int buzzerpin = 9;
void setup() 
{
    // No pins to setup, pins can still be used regularly, although it will affect readings
    Serial.begin(9600);
    pinMode(buzzerpin,OUTPUT);
    ref = ADCTouch.read(A0, 500);    //create reference values to 
} 

void loop() 
{
    int value = ADCTouch.read(A0);   //no second parameter

    value -= ref;       //remove offset

    if( value > 40 ){
        // Serial.print("touchy ") ; 
        digitalWrite(buzzerpin,HIGH);
    } else {
        // Serial.print("NO") ; 
        
        digitalWrite(buzzerpin,LOW);
    }
}
