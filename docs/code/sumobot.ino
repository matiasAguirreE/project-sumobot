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
   // Look out the other sumobot to attack him
   if (enemyIsNear()) {
    // Attack the other sumobot
    attack();
   } else {
    findEnemy();
   }
   // Checkout if the sumobot is on the border 
   if (onBorderFoward()) {
    // Go away from the border
    goAwayFoward();
   }
   if (onBorderRear()) {
    // Go away from the border
    goAwayRear();
   }
  }
}

/** Function to attack the enemy
  *
  * Function with an algorithm to attack the enemy and avoid the attacks of the enemy 
  */
void attack() {
 // Code to attack the enemy
}

/** Function to find the enemy
  *
  * Function that move the sumobot to find the enemy 
  */
void findEnemy() {
 // Code to find the enemy
}

/** Function to tell if the enemy is on the front or not
  *
  * Function that use the ultrasonic sensor to detect if the enemy is in front of the sumobot or not
  *
  * @return True if the enemy is on the front and False in other cases
  */
bool enemyIsNear() {
 // Code to detect the enemy
}

/** Function to tell if the border is on the foward or not
  *
  * Function that use the infrared sensor on the foward to detect if the border is on the foward of the sumobot or not
  *
  * @return True if the border is on the foward and False in other cases
  */
bool onBorderFoward() {
 // Code to detect the border with the foward sensor
}

/** Function to tell if the border is on the rear or not
  *
  * Function that use the infrared sensor on the rear to detect if the border is on the rear of the sumobot or not
  *
  * @return True if the border is on the rear and False in other cases
  */
bool onBorderRear() {
 // Code to detect the border with the rear sensor
}

/** Function to go away from the border of the foward
  *
  * Function that go back from the border of the foward moving on rear
  */
void goAwayFoward() {
 // Code to go away from the border of the foward
}

/** Function to go away from the border of the rear
  *
  * Function that go back from the border of the rear moving on foward
  */
void goAwayRear() {
 // Code to go away from the border of the rear
}
