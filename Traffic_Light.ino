#include <Arduino.h>

const int ledPinGreen  = 13;
const int ledPinYellow = 12;
const int ledPinRed = 11;


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
  digitalWrite(ledPinGreen, HIGH);
  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinYellow, LOW);
  Serial.println("LED Green ON");
  delay(3000);

  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinRed, HIGH);
  digitalWrite(ledPinYellow, LOW);
  Serial.println("LED Red ON");
  delay(3000);

  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinYellow, HIGH)
  ;
  Serial.println("LED Yellow ON");
  delay(2000);

}