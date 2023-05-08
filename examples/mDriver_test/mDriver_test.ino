#include <mDriver.h>

// Motor pins
#define AIN1 22
#define BIN1 21
#define AIN2 1
#define BIN2 19
#define PWMA 23
#define PWMB 3

const int correctionA = -1;
const int correctionB = -1;

Motor leftMotor = Motor(AIN1, AIN2, PWMA, correctionA);
Motor rightMotor = Motor(BIN1, BIN2, PWMB, correctionB);

int speed = 100; // standard speed can be modified later

void setup() {
  // Nothing
}

void loop() {
  // put your main code here, to run repeatedly:
  
  forward(leftMotor, rightMotor, speed);
  delay(1000);
  stop(leftMotor, rightMotor);
  delay(500);
  right(leftMotor, rightMotor, speed);
  delay(1000);
  stop(leftMotor, rightMotor);
  delay(500);
  left(leftMotor, rightMotor, speed);
  delay(1000);
  stop(leftMotor, rightMotor);
  delay(500);
}