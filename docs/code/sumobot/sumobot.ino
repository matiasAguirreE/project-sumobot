// Declaration of pins
/** Pin of the left motor on clockwise 
 *
 * It is the number of the pin used to control the left motor on clockwise
 */
int motorLeftPin1 = 6;

/** Pin of the left motor on counter-clock wise 
 *
 * It is the number of the pin used to control the left motor on counter-clock wise
 */
int motorLeftPin2 = 9;

/** Pin of the right motor on clockwise 
 *
 * It is the number of the pin used to control the right motor on clockwise
 */
int motorRightPin1 = 10;

/** Pin of the right motor on counter-clock wise 
 *
 * It is the number of the pin used to control the right motor on counter-clock wise
 */
int motorRightPin2 = 11;

/** Pin of the foward infrared 
  *
  * It is the number of the pin used to control the foward infrared
  */
const int fowardInfraredPin = 8;

/** Pin of the rear infrared 
  *
  * It is the number of the pin used to control the rear infrared
  */
const int rearInfraredPin = 7;

/** Pin of the ultrasonic trigger 
  *
  * It is the number of the pin used to control the trigger of the ultrasonic sensor
  */
const int ultrasonicTriggerPin = 4;

/** Pin of the ultrasonic echo 
  *
  * It is the number of the pin used to control the echo of the ultrasonic sensor
  */
const int ultrasonicEchoPin = 2;

/** Pin of the button 
  *
  * It is the number of the pin used to control the button
  */
const int buttonPin = 1;

// Declaration of constants
/** Distance of the dome in centimeters
  *
  * It is the distance of the dome in centimeters where the sumobots have to fight
  */
const int maxDistance = 150;

/** Value of threshold
  *
  * Value of threshold to establish when the infrared detect a color black and when the infrared detect a color white
  */
const int detectionThreshold = 800;

// Declaration of variables
/** Boolean of button
  *
  * Boolean of the button that says if the button was pressed
  */
bool buttonPressed = false;

/** Setup of the infrared pins, the button and the ultrasonic sensor
  *
  * Setup of the two infrared pins, one on the foward and the other on the rear, setup of one button and setup of the ultrasonic pins of the ultrasonic sensor, which is the trigger and the echo
  */
void setup() {
  // Setup of the serial port
  Serial.begin(9600);
  // Setup of the infrared pins
  pinMode(fowardInfraredPin, INPUT);
  pinMode(rearInfraredPin, INPUT);

  // Setup of the button
  pinMode(buttonPin, INPUT_PULLUP);

  // Setup of the ultrasonic pins
  pinMode(ultrasonicTriggerPin, OUTPUT);
  pinMode(ultrasonicEchoPin, INPUT);

  // Setup of the motors
  pinMode(motorLeftPin1, OUTPUT);
  pinMode(motorLeftPin2, OUTPUT);
  pinMode(motorRightPin1, OUTPUT);
  pinMode(motorRightPin2, OUTPUT);
}

/** Loop to control the attack of the sumobot
  *
  * Loop to control when the sumobot has to attack, how the sumobot has to move to attack and where is the enemy of the sumobot
  */
void loop() {
  // If the button was pressed
  if (digitalRead(buttonPin) == LOW && !buttonPressed){
   buttonWasPressed();
  }
  if (buttonPressed) {
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

/** Function that is executed when the button was pressed
  *
  * Function that is executed after the button was pressed, where the function add a delay of five seconds and change the boolean buttonPressed
  */
void buttonWasPressed() {
 // Change boolean of buttonPressed
 buttonPressed = true;
 // Delay to attack five seconds after the button was pressed
 delay(5000);
}

/** Function to attack the enemy
  *
  * Function with an algorithm to attack the enemy and avoid the attacks of the enemy 
  */
void attack() {
 // Code to attack the enemy
 moveMotors(0, 255);
}

/** Function to find the enemy
  *
  * Function that move the sumobot to find the enemy 
  */
void findEnemy() {
 // Code to find the enemy
 moveMotors(50, 50);
}

/** Function to tell if the enemy is on the front or not
  *
  * Function that use the ultrasonic sensor to detect if the enemy is in front of the sumobot or not
  *
  * @return True if the enemy is on the front and False in other cases
  */
bool enemyIsNear() {
 // Generate a pulse to detect the enemy
 digitalWrite(ultrasonicTriggerPin, LOW);
 delayMicroseconds(2);
 digitalWrite(ultrasonicTriggerPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(ultrasonicTriggerPin, LOW);

 // Calculates the duration of the pulse
 long duration = pulseIn(ultrasonicEchoPin, HIGH);
 // Calculates the distance in centimeters based on the duration of the pulse
 int distance = duration/58;

 // Returns the boolean that says if the enemy is near of him
 return distance<maxDistance;
}

/** Function to tell if the border is on the foward or not
  *
  * Function that use the infrared sensor on the foward to detect if the border is on the foward of the sumobot or not
  *
  * @return True if the border is on the foward and False in other cases
  */
bool onBorderFoward() {
 // Save the lecture of the infrared sensor
 int lecture = analogRead(fowardInfraredPin);

 // Returns the boolean that says if the sumobot is on the border on the foward
 return lecture>=detectionThreshold;
}

/** Function to tell if the border is on the rear or not
  *
  * Function that use the infrared sensor on the rear to detect if the border is on the rear of the sumobot or not
  *
  * @return True if the border is on the rear and False in other cases
  */
bool onBorderRear() {
 // Save the lecture of the infrared sensor
 int lecture = analogRead(rearInfraredPin);

 // Returns the boolean that says if the sumobot is on the border on the rear
 return lecture>=detectionThreshold;
}

/** Function to go away from the border of the foward
  *
  * Function that go back from the border of the foward moving on rear
  */
void goAwayFoward() {
 // Code to go away from the border of the foward
 moveMotors(-255, -255);
}

/** Function to go away from the border of the rear
  *
  * Function that go back from the border of the rear moving on foward
  */
void goAwayRear() {
 // Code to go away from the border of the rear
 moveMotors(255, 255);
}

/** Function to move the motors
  *
  * Function that move the motors based on the left speed and right speed inserted on the params
  *
  * @param leftSpeed Is the speed of the left motor
  * @param rightSpeed Is the speed of the right motor
  */
void moveMotors(int leftSpeed, int rightSpeed) {
  if (leftSpeed > 0) {
    analogWrite(motorLeftPin2, leftSpeed);  
  } else {
    analogWrite(motorLeftPin1, -leftSpeed);
  }
  if (rightSpeed > 0) {
    analogWrite(motorRightPin2, rightSpeed);
  } else {
    analogWrite(motorRightPin1, -rightSpeed);
  }
}