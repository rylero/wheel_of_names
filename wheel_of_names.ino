// Define pin connections & motor's steps per revolution
const int dirPin = 8;
const int stepPin = 9;
const int stepsPerRevolution = 200;
int currentSpeed = 0;


void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  // Set motor direction clockwise
  digitalWrite(dirPin, LOW);
  if (digitalRead(2) == LOW) {
    
    currentSpeed = random(50, 75);
  }
  
      Serial.println(currentSpeed);
  if (currentSpeed > 0 & currentSpeed < 1100) {
    for(int x = 0; x < stepsPerRevolution/2; x++)
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(currentSpeed);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(currentSpeed);
      if (currentSpeed > 1100) {
        currentSpeed = -50000;
        break;
      }
    }
    currentSpeed += random(3,14);
    if (currentSpeed > 200) {
      currentSpeed += random(4,7);
    }
    if (currentSpeed > 1100) {
        currentSpeed = -50000;
    }
    if (currentSpeed > 300) {
      currentSpeed += random(5,10);
    }
    if (currentSpeed > 1100) {
        currentSpeed = -50000;
    }
    if (currentSpeed > 400) {
      currentSpeed += random(8,15);
    }
    if (currentSpeed > 1100) {
        currentSpeed = -50000;
    }
    
    if (currentSpeed > 600) {
      currentSpeed += random(14,17);
    }
    
    for(int x = 0; x < stepsPerRevolution/2; x++)
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(currentSpeed);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(currentSpeed);
      if (currentSpeed > 1100) {
        currentSpeed = -50000;
        break;
      }
    }
  }
}
