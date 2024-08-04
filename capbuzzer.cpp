#include <ADCTouch.h>

int ref ;
int buzzerpin = 9;
void setup() 
{
    Serial.begin(9600);
    pinMode(buzzerpin,OUTPUT);
    ref = ADCTouch.read(A0, 500); 
} 
void loop() 
{
    int value = ADCTouch.read(A0);   
    value -= ref;
    if( value > 40 ){
        digitalWrite(buzzerpin,HIGH);
    } else {        
        digitalWrite(buzzerpin,LOW);
    }
}
