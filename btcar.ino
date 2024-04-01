// Starting of Program

// Define pins for motor control
int m1a = 9;  // Motor 1, pin A
int m1b = 10; // Motor 1, pin B
int m2a = 11; // Motor 2, pin A
int m2b = 12; // Motor 2, pin B

// Define pin for buzzer or LED
int buzz = 7;

// Variable to store received serial data
char val;

void setup() {
  // Set motor control pins and buzzer pin as output pins
  pinMode(m1a, OUTPUT);   // Digital pin 9 set as output pin
  pinMode(m1b, OUTPUT);   // Digital pin 10 set as output pin
  pinMode(m2a, OUTPUT);   // Digital pin 11 set as output pin
  pinMode(m2b, OUTPUT);   // Digital pin 12 set as output pin
  pinMode(buzz, OUTPUT);  // Digital pin 7 set as output pin
  
  // Start serial communication with baud rate 9600
  Serial.begin(9600);
}

void loop() {
  // Check if serial data is available
  while (Serial.available() > 0) {
    // Read the serial data character by character
    val = Serial.read();
    // Print the received character to serial monitor
    Serial.println(val);
  }

  // Perform actions based on the received command
  if (val == 'V') { // Horn or LED on
    digitalWrite(buzz, HIGH);
  }
  if (val == 'v') { // Horn or LED off
    digitalWrite(buzz, LOW);
  }
  if (val == 'F') { // Forward
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  } else if (val == 'B') { // Backward
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
  } else if (val == 'L') { // Left
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  } else if (val == 'R') { // Right
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  } else if (val == 'S') { // Stop
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  } else if (val == 'I') { // Forward Right
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  } else if (val == 'J') { // Backward Right
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  } else if (val == 'G') { // Forward Left
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  } else if (val == 'H') { // Backward Left
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
  }
}
