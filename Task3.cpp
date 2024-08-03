// code for task : 3

const int buzzerPin = 8;  // Define the pin connected to the buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as an output
}

void loop() {

digitalWrite(buzzerPin, HIGH);  // Turn the buzzer on
delay(500);

digitalWrite(buzzerPin, LOW);   // Turn the buzzer off
delay(500);       

}
