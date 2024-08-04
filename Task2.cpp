// code for task : 2 ( LDR sensor )

const int irPin = A0;  // Analog pin connected to the IR sensor
int irValue = 0;      // Variable to store the sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  irValue = analogRead(irPin); // Read the value from the IR sensor
  Serial.println(irValue);     
  delay(500);                  
}
