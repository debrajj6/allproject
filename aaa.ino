#include<Servo.h>
Servo servo1;
int servoPin = 9; // connect servo to pin 10
 int pwmVal = 0; // declare pulse width modulation value

void setup() {
  servo1.attach(9);
//  pinMode(servoPin, OUTPUT); //set up the servoPin as an output pin
  Serial.begin(9600); // begin serial monitor
}

void loop() {
//
//  //for loop that sweeps values from 0 to 255
//  for (pwmVal = 0; pwmVal <= 253; pwmVal += 1) {
//    analogWrite(servoPin, pwmVal);
//    Serial.println(pwmVal);
//    delay(100);
//  }
//  for (pwmVal = 253; pwmVal >= 0; pwmVal -= 1) {
//    analogWrite(servoPin, pwmVal);
//    Serial.println(pwmVal);
//    delay(100);
//  }


  //assign a static pwm value
  servo1.write(50); // rotate
      delay(950);
      servo1.write(1500);  // stop
      delay(2000);
  
}
