const int ldrPin = A0;      // Pin connected to the photoresistor (LDR)
const int redPin = 6;       // Pin connected to the red LED
const int yellowPin = 9;    // Pin connected to the yellow LED
const int greenPin = 11;     // Pin connected to the green LED
const int buzzerPin = 3;     // Pin connected to the buzzer

void setup() {
  pinMode(redPin, OUTPUT);    // Set the red LED pin as an output
  pinMode(yellowPin, OUTPUT); // Set the yellow LED pin as an output
  pinMode(greenPin, OUTPUT);  // Set the green LED pin as an output
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
  Serial.begin(9600);         // Start serial communication for debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the value from the photoresistor
  Serial.println(ldrValue);           // Print the LDR value to the Serial Monitor

  // Determine the light level and control LEDs and buzzer
  if (ldrValue < 200) { // Low light condition
    digitalWrite(redPin, HIGH);   // Turn on the red LED
    digitalWrite(yellowPin, LOW);  // Turn off the yellow LED
    digitalWrite(greenPin, LOW);   // Turn off the green LED
  } 
  else if (ldrValue < 600) { // Medium light condition
    digitalWrite(redPin, LOW);    // Turn off the red LED
    digitalWrite(yellowPin, HIGH); // Turn on the yellow LED
    digitalWrite(greenPin, LOW);   // Turn off the green LED
    tone(buzzerPin, 1000);         // Sound the buzzer at 1000 Hz
    delay(1000);                   // Wait for 1 second
    noTone(buzzerPin);             // Turn off the buzzer
  } 
  else { // High light condition
    digitalWrite(redPin, LOW);     // Turn off the red LED
    digitalWrite(yellowPin, LOW);  // Turn off the yellow LED
    digitalWrite(greenPin, HIGH);  // Turn on the green LED
    tone(buzzerPin, 1000);         // Sound the buzzer at 1000 Hz
    delay(500);                    // Wait for 0.5 seconds
    noTone(buzzerPin);             // Turn off the buzzer
  }

  delay(500); // Delay for stability before the next loop iteration
}
