// code for task : 4

#include <ADCTouch.h>

int ref ;     //reference values to remove offset

void setup() 
{
    // No pins to setup, pins can still be used regularly, although it will affect readings

    Serial.begin(9600);

    ref = ADCTouch.read(A0, 500);    //create reference values to 
} 

void loop() 
{
    int value = ADCTouch.read(A0);   //no second parameter

    value -= ref;       //remove offset

    if( value > 40 ){
        Serial.print("touchy ") ; 
    } else {
        Serial.print("NO") ; 
    }
    Serial.print("\t");           //use if(value > threshold) to get the state of a button

    Serial.println(value0);             //send actual reading
  
    delay(100);
}