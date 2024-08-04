// code for task : 2 ( LDR sensor )

const int ldrPin = A0;  // Analog pin connected to the IR sensor
int ldrValue = 0;      // Variable to store the sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  ldrValue = analogRead(irPin); // Read the value from the IR sensor
  Serial.println(ldrValue);     
  delay(500);                  
}
