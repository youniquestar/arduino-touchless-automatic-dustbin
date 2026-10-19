#include <Servo.h>

#define trigPin 9
#define echoPin 10

Servo myServo;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myServo.attach(6);
  myServo.write(0); // closed position

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.println(distance);

  if (distance < 15) {
    myServo.write(90); // open lid
    delay(3000);
    myServo.write(0); // close lid
  }

  delay(300);
}
