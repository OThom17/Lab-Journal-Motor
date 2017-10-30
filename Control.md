# Motor Control with Encoder Feedback

## Encoder code development

- Hardware Elements

These will be connected to the shaft and rotate thus breaking the beam with every rotation. Two have been made, with more slits the sensor ought to have a better resolution and therefore a more accurate speed reading. 

![Images of encoder plates](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Printedslits.jpg)

As described in the design document this component will hold the LED opposite the transitor.

![Image of LED holding plate](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/PrintedLDRH.jpg)

The LDR circuit will connect the LED to the Arduino (with a current limiting resistor) as well as the photo-transistor with a 10k pull up resistor. The LED will constantly be powered and the Arduino polling the photo-transistor sense output.

![Image of the encoder circuit](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/LDRCircuit.png)

To keep the design simple and compact the LED and photo-transitor have been wired in-line with heatshrink to isolate the connections.

![Imaage of inline LDR circuitry](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/LDR.jpg)






- Software Design and Dev.


Version 1

The program will detect the time it takes for the shaft to perform a complete rotation of the slit. To do this it'll wait until the sensor read's HIGH (Beam is being blocked) and then start timing in ms. the timer will stop once the sensor reads a LOW (When the encoder plate isn't obstructing the beam.

If the plate isn't blocking the beam when the sample is being taken the 'pulseIn' routine will wait until it is before taking the start time. 

With the circumference 


































## Controlling the motor with the Arduino board 

Open loop control was achieved through simply following the tutorial and running the code below.

```

/*************************************************************
Motor Shield 1-Channel DC Motor Demo
by Randy Sarafan

*************************************************************/

void setup() {
  
  //Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
  
}

void loop(){
  
  //forward @ full speed
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 255);   //Spins the motor on Channel A at full speed
  
  delay(3000);
  
  digitalWrite(9, HIGH); //Engage the Brake for Channel A

  delay(1000);
  
  //backward @ half speed
  digitalWrite(12, LOW); //Establishes backward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 123);   //Spins the motor on Channel A at half speed
  
  delay(3000);
  
  digitalWrite(9, HIGH); //Eengage the Brake for Channel A
  
  delay(1000);
  
}

```

## Comments on the code

- Speed ranges from 0 - 255 giving a resolution of 256
- Pin 12 engages motor A while pin 9 brakes it
- Pin three has the analog speed value written to when enabled

## Adding the Encoder Code










