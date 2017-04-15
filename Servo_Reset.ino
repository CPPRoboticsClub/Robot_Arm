/* Cal Poly Pomona Robotics Club
 * Robotic Arm Workshop
 * https://github.com/CPPRoboticsClub/Robot_Arm
 * Edited: April 15, 2017
 */

#include<Servo.h>
Servo testServo; // Create Servo object
void setup() {
  testServo.attach(3); // Servo PWM Output Pin (Digital Pin ~3 on Arduino Uno)
  pinMode(13,OUTPUT); // Arduino Built-In LED Pin
}

void loop() {
  testServo.write(0); // Set Servo to 0 degree position
  digitalWrite(13,1); // Turn test LED on
  delay(3000); // 3 second delay
  testServo.write(180); // Set Servo to 180 degree position
  digitalWrite(13,0); // Turn test LED off
  delay(3000); // 3 second delay
}
