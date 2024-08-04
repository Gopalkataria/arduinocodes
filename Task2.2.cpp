//Task 2.2 : LDR sensor ( light dependant resistance)

#define SENSOR_PIN 9

void setup()

{

  pinMode(SENSOR_PIN, INPUT);

  Serial.begin(9600);

}

void loop()

{

  if (digitalRead(SENSOR_PIN) == LOW) {

    Serial.println("Object Detected");

  } else {

    Serial.println("Object NOT Detected");

  }

  delay(100);

}