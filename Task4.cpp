// code for task : 4

#include <ADCTouch.h>

int ref0, ref1;     //reference values to remove offset

void setup() 
{
    // No pins to setup, pins can still be used regularly, although it will affect readings

    Serial.begin(9600);

    ref0 = ADCTouch.read(A0, 500);    //create reference values to 
} 

void loop() 
{
    int value0 = ADCTouch.read(A0);   //no second parameter

    value0 -= ref0;       //remove offset

    if( value > 40 ){
        Serial.println("touchy ") ; 
    } else {
        Serial.println("NO") ; 
    }
    Serial.print("\t");           //use if(value > threshold) to get the state of a button

    Serial.println(value0);             //send actual reading
  
    delay(100);
}