int ledPin = 13;  // LED connected to digital pin 13
int leakPin = 2;    // pushbutton connected to digital pin 7
int leak = 0;      // variable to store the read value

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the digital pin 13 as output
  pinMode(leakPin, INPUT);    // sets the digital pin 7 as input
  Serial.begin(115200);
  Serial.println("Blue Robotics SOS Leak Sensor Example");
}

void loop() {
  leak = digitalRead(leakPin);   // read the input pin
  digitalWrite(ledPin, leak);  // sets the LED to the button's value

  if (leak == 1) {
    Serial.println("Leak Detected!");
  }
}

