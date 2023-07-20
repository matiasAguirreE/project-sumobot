# Assembly Instructions

These assembly instructions will guide you through the step-by-step process of assembling your sumobot. Please refer to the included photos and diagrams for better understanding.

## Required Tools

Before you begin, make sure you have all of the hardware from the [hardware list](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/hardware-list).

You'll also need allen wrenches for the screws, a 5mm phillips screwdriver, some double sided tape, soldering equipment, a drill with a 5mm bit, as well as the means to make all non-commecial parts. A PLA-loaded 3D printer is recommended since it makes everything straight-forward, but a router CNC also works for the chassis. 

## Step 1: Prepare Components

1. Make all non-commercial components of the [3D files](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/3d-files). As stated before, a PLA-loaded 3D printer is recommended for all the components, especially for all the support parts for the sensors, the weapon and the Arduino box, but the chassis can be made from a 200x200x15mm plank of any material you have on hand that's though enough to be used as the robot's main body. For the prototype, we used a plank of MDF and a router CNC to cut it, and used some extra hex nuts to fix the omnidirectional wheel in place instead of a proper spacer, which put the robot's weight around 0.93 kg. For 3D printing, use at least 15% infill for all components, and a higher infill for the Arduino box, since you'll need to make threads on it later.
2. Make sure the sensors and the arduino fit on their supports, and the supports fit on the chassis and match their screw holes. If that's not the case, feel free to modify the designs to 3D print everything again, or cut/file the excess material.
3. Take the Arduino box and use some of the M3 screws to form the threads by slowly screwing them into the holes inside the box. Be careful to do this slowly and keep the screws straight so the box doesn't break and the screws form the threads correctly.
4. Take both motor supports and bore the 4mm threaded holes with the drill.
5. If the motors don't have wires already soldered into their terminals, you'll need to do so before assembling the robot.
6. Cut the battery's connector and replace it with the XT60 male connector by soldering it.
7. Cut and solder the XT60 female connector's wires' ends and make sure they fit in the driver's Vin and GND terminals.

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

6. Mount the Arduino box on top of the omnidirectional wheel's screws using the M3x50 screws and M3 nuts, and the driver using M3x45 screws and M3 nuts, with the pins facing to the back of the robot. Don't tighten the driver's nuts too much or you'll end up bending the driver. Then, mount the Arduino on the box using the M3x10 screws and the threads you previously formed into the box.

![Step 6](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-6.jpg?raw=true)

7. Mount the sensors into the robot and use the M3 screws and nuts included with the motors to fix the IR sensors in their supports' slots, with the pins facing to the top of the robot.

![Step 7.1](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-7.jpg?raw=true)

For the front IR sensor, mount it from the bottom of the robot, and connect some male female wires to the pins before mounting the sensor, as it would be difficult to do so afterwards. 

![Step 7.2](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-8.jpg?raw=true)

8. Mount the Li-Po battery and the 9V battery onto the robot with some tape, such that they don't obstruct the Arduino's port, and the 9V battery remains close to the DC input of the Arduino. Then, mount the +/- side of the protoboard on top of the Li-Po battery and the button on the front of the Arduino box with some tape. 

![Step 8](https://github.com/matiasAguirreE/project-sumobot/blob/main/docs/media/assembly/step-9.jpg?raw=true)

## Step 3: Connecting Electronics

1. Connect the various electronic components together according to the provided instructions.
2. Connect the driver to the Arduino using jumper wires.
3. Make sure all the connections are secure and properly aligned.

## Step 4: Import Code

1. Import the [code](https://github.com/matiasAguirreE/project-sumobot/tree/main/docs/code) into your Arduino board for the sumobot's functionality.
2. Open the Arduino IDE and create a new sketch.
3. Upload the code to the Arduino board.

## Step 5: Testing

1. Test the assembled sumobot to ensure all the components are working correctly.
2. Power on the sumobot and observe its behavior.
3. Verify if the sensors are detecting obstacles and the wheels are moving as expected.

Congratulations! You have successfully assembled your sumobot. If you have any questions or encounter any issues during the assembly process, please refer to any of the team members of this proyect, or contribute to the proyect following the instructions on the Contributing section on the [README](https://github.com/matiasAguirreE/project-sumobot/tree/main#contributing) file.
