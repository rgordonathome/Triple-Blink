// Pins
int greenLED = 5;
int yellowLED = 6;
int redLED = 7;

void setup() {
  // set to output to LED pins
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  // turn off all LEDs
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  // enable serial communication
  Serial.begin(9600);

}

void loop() {
  
  // turn on green LED
  digitalWrite(greenLED, HIGH);
  // wait 1 second
  Serial.println("Green on");
  delay(1000);
  // turn off green LED
  digitalWrite(greenLED, LOW);
  
  // turn on yellow LED
  digitalWrite(yellowLED, HIGH);
  // wait 1 second
  Serial.println("Yellow on");
  delay(1000);
  // turn off yellow LED
  digitalWrite(yellowLED, LOW);

  // turn on red LED
  digitalWrite(redLED, HIGH);
  // wait 1 second
  Serial.println("Red on");
  delay(1000);
  // turn off red LED
  digitalWrite(redLED, LOW);

}
