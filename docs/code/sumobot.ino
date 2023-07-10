// Declaration of pins

/** Pin of the left motor on clockwise 
 *
 * It is the number of the pin used to control the left motor on clockwise
 */
int motorLeftPin1;

/** Pin of the left motor on counter-clock wise 
 *
 * It is the number of the pin used to control the left motor on counter-clock wise
 */
int motorLeftPin2;

/** Pin of the right motor on clockwise
 *
 * It is the number of the pin used to control the right motor on clockwise
 */
int motorRightPin1;

/** Pin of the right motor on counter-clock wise
 *
 * It is the number of the pin used to control the right motor on counter-clock wise
 */
int motorRightPin2;

/** Pin of the foward infrared 
 *
 * It is the number of the pin used to control the foward infrared
 */
int fowardInfraredPin = 13;

/** Pin of the rear infrared 
 *
 * It is the number of the pin used to control the rear infrared
 */
int rearInfraredPin = 12;

/** Pin of the ultrasonic trigger 
 *
 * It is the number of the pin used to control the trigger of the ultrasonic sensor
 */
int ultrasonicTriggerPin = 3;

/** Pin of the ultrasonic echo 
 *
 * It is the number of the pin used to control the echo of the ultrasonic sensor
 */
int ultrasonicEchoPin = 4;

/** Pin of the button 
 *
 * It is the number of the pin used to control the button
 */
int buttonPin = 2;

/** Setup of the infrared pins, the button and the ultrasonic sensor
  *
  * Setup of the two infrared pins, one on the foward and the other on the rear, setup of one button and setup of the ultrasonic pins of the ultrasonic sensor, which is the trigger and the echo
  */
void setup() {
  // Setup of the infrared pins
  pinMode(fowardInfraredPin, INPUT);
  pinMode(rearInfraredPin, INPUT);

  // Setup of the button
  pinMode(buttonPin, INPUT);

  // Setup of the ultrasonic pins
  pinMode(ultrasonicTriggerPin, INPUT);
  pinMode(ultrasonicEchoPin, INPUT);
}

/** Loop to control the attack of the sumobot
  *
  * Loop to control when the sumobot has to attack, how the sumobot has to move to attack and where is the enemy of the sumobot
  */
void loop() {
  // If the button was pressed
  if (digitalRead(buttonPin) == LOW) {
    delay(5000); // Delay to attack five seconds after the button was pressed
    // Attack the other sumobot
  }
}
