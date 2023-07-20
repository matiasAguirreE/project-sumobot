# Assembly Instructions

These assembly instructions will guide you through the step-by-step process of assembling your sumobot. Please refer to the included photos and diagrams for better understanding.

## Required Tools

Before you begin, make sure you have all of the hardware from the [hardware list](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/hardware-list).

You'll also need allen wrenches for the screws, a 5mm phillips screwdriver, some double sided tape, soldering equipment, a drill with a 5mm bit, as well as the means to make all non-commecial parts. A PLA-loaded 3D printer is recommended since it makes everything straight-forward, but a router CNC also works for the chassis. Also, and as obvious as it may sound, you'll need a computer with a USB port to load the code in the Arduino.

## Step 1: Prepare Components

1. Make all non-commercial components of the [3D files](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/3d-files). As stated before, a PLA-loaded 3D printer is recommended for all the components, especially for all the support parts for the sensors, the weapon and the Arduino box, but the chassis can be made from a 200x200x15mm plank of any material you have on hand that's though enough to be used as the robot's main body. For the prototype, we used a plank of MDF and a router CNC to cut it, and used some extra hex nuts to fix the omnidirectional wheel in place instead of a proper spacer, which put the robot's weight around 0.93 kg. For 3D printing, use at least 15% infill for all components, and a higher infill for the Arduino box, since you'll need to make threads on it later.
2. Make sure the sensors and the arduino fit on their supports, and the supports fit on the chassis and match their screw holes. If that's not the case, feel free to modify the designs to 3D print everything again, or cut/file the excess material.
3. Take the Arduino box and use some of the M3 screws to form the threads by slowly screwing them into the holes inside the box. Be careful to do this slowly and keep the screws straight so the box doesn't break and the screws form the threads correctly.
4. Take both motor supports and bore the 4mm threaded holes with the drill.
5. If the motors don't have wires already soldered into their terminals, you'll need to do so before assembling the robot.
6. Cut the battery's connector and replace it with the XT60 female connector by soldering it.
7. Cut and solder the XT60 male connector's wires' ends and make sure they fit in the driver's Vin and GND terminals.

## Step 2: Assembly
Before assembling, keep in mind that there's no need to follow most of these steps in this particular order: some of the parts don't really need to be screwed into the chassis in any order. In fact, the only parts where order of assembly really matters are the DC motors, the omnidirectional wheel and the IR sensor support in the front.

1. Screw the motor supports into the chassis using 4 M4x25 screws and M4 nuts for each.

![Step 1](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-1.jpg?raw=true)

2. Take both motors and mount them into the support with the screws included with them, and make sure the wires go through the middle hole in the support.

![Step 2](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-2.jpg?raw=true)

3. Attach the included nut and grub screw into each motor, then attach the wheels with a M4x12 screw on each side.

![Step 3](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-3.jpg?raw=true)

4. Mount all the sensor and weapon supports into the chassis using M4x25 screws and M4 nuts and follows. Make sure to use the flat head screws for the ultrasonic sensor support as shown.

![Step 4](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-4.jpg?raw=true)

5. Mount the weapon using M4x15 screws and M4 nuts, and mount the omnidirectional wheel with the M4x30 screws. Make sure the wheel remains free to rotate and doesn't bump into the nuts. You might need extra nuts to raise the screws.

![Step 5](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-5.jpg?raw=true)

6. Mount the Arduino box on top of the omnidirectional wheel's screws using the M3x50 screws and M3 nuts, and the driver using M3x45 screws and M3 nuts, with the pins facing to the back of the robot. Don't tighten the driver's nuts too much or you'll end up bending the driver. Then, mount the Arduino on the box using the M3x10 screws and the threads you previously formed into the box. If the chassis is made of any conductive metal, consider adding a spacer between the driver and the chassis.

![Step 6](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-6.jpg?raw=true)

7. Mount the sensors into the robot and use the M3 screws and nuts included with the motors to fix the IR sensors in their supports' slots, with the pins facing to the top of the robot.

![Step 7.1](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-7.jpg?raw=true)

For the front IR sensor, mount it from the bottom of the robot, and connect some male female wires to the pins before mounting the sensor, as it would be difficult to do so afterwards. 

![Step 7.2](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-8.jpg?raw=true)

8. Mount the Li-Po battery and the 9V battery onto the robot with some tape, such that they don't obstruct the Arduino's port, and the 9V battery remains close to the DC input of the Arduino. Then, mount the +/- side of the protoboard on top of the Li-Po battery and the button on the front of the Arduino box with some tape. 

![Step 8](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-9.jpg?raw=true)

## Step 3: Connecting Electronics

1. Connect all components except the batteries as shown in the following picture using jumper wires where needed. Pay attention to the pins on each component as their relative positions may vary. Note that the connection between the Li-Po battery and the driver has a XT60 connector in between. You should connect the male end to the driver.

![Circuit](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/circuit-diagram.png?raw=true)

2. Connect the batteries and verify that at least one LED from the Arduino, the driver and the IR sensors each are on. Be wary of any indication of a short circuit and disconnect the Li-po battery inmediately if that's the case.

3. If everything works properly, disconnect both batteries for now.


## Step 4: Import the Code

To upload the code, we'll need Arduino IDE and the "Button" library, so before doing anything else, download and install Arduino IDE [here](https://www.arduino.cc/en/software) if you don't have it installed already. Open it, go to Tools/Manage libraries, type "Button" on the search bar, look for the "Button" library by Michael Adams and install it.

1. Download the [code](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/code), open it on your computer with Arduino IDE and connect your Arduino to your PC without connecting any battery.
2. Verify that your PC recognizes your Arduino Uno board. To do this, go to Tools/Board and select Arduino Uno. Then, go to Tools/Port and select the port the Arduino board is connected to. If your PC recognizes it, you should be able to select at least one port, which may display the board's name. If there's more than one port and neither have the board's name, select one, try uploading the Blink sketch in File/Examples/01.Basics and see if it effectively uploads it to your Arduino. If that doesn't work, try again on another port. If that doesn't work either and your Arduino board is a bootleg one, try installing the [CH340 driver](https://sparks.gogo.co.nz/ch340.html) and try again.
3. Upload the code.

## Step 5: Testing

Although you can try testing all components separately using different codes for each part of the robot, you can also try testing both the code and the robot at once:

1. Connect the 9V battery to the Arduino and test the IR sensors. Even without the code, you can check if they work as intended by bringing an object close to each sensor: if it works, a second LED should light up on the sensor, indicating that it detected the object. It should also work with white surfaces in contrast with dark opaque surfaces, as it allows the robot to detect the border of the arena. If it doesn't work, try adjusting it's sensitivity by turning it's knob with a screwdriver.
2. Now we move on to the rest. Connect the Li-Po battery and press the button. If it works correctly and the motors are correctly connected to the driver and the Arduino, the robot should move 5 seconds later.
3. Once it starts moving, the robot should alternate between turning to the right and moving forward if it doesn't detect anything.
4. If the robot detects anything in front of it, it should charge forward.
5. If the robot detects the border from the back, it should also charge forward for 1 second.
6. If the robot detects the border from the front, it should turn and then back off, but it may miss the border if the robot aproaches it too fast. 

If the robot turns or moves in the opposite direction when it should charge on one direction, one or both motors' connection might be reversed. Try swapping one or both motors' connection to the driver, as that reverts its movement.

To "turn off" the robot, you can either disconnect the 9V battery or press the reset button on the Arduino board.

Congratulations! You have successfully assembled your sumobot. If you have any questions or encounter any issues during the assembly process, please refer to any of the team members of this project, or contribute to the project following the instructions on the contributing section on the [README](https://github.com/matiasAguirreE/project-sumobot/tree/main#contributing) file.
