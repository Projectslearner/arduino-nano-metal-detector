/*
    Project name : Metal Detector
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-metal-detector
*/

const int metalDetectorPin = A0; // Analog pin connected to the metal detector sensor

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop() 
{
  int sensorValue = analogRead(metalDetectorPin); // Read sensor value
  
  // Print sensor value to Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // If sensor value is above a threshold, metal is detected
  if (sensorValue > 500) 
  {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Metal Detected!");
  }
  delay(500); // Delay for stability
}
