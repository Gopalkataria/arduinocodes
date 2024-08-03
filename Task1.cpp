// code for task : 1 ( on board LED )


void setup() {
 pinMode(LED_BULTIN,OUTPUT);
}

void loop() {
    digitalWrite(LED_BULTIN, HIGH) ; 
    delay(1000) ; 
    digitalWrite(LED_BULTIN,LOW) ; 
    delay(1000) ; 
}