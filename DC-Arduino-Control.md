## Controlling the hobby motor with the Arduino 

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
  
  digitalWrite(9, HIGH); //Engage the Brake for Channel A
  
  delay(1000);
  
}

```

## Comments on the code

- Speed ranges from 0 - 255 giving a resolution of 256
- Pin 12 engages motor A while pin 9 brakes it
- Pin three has the analog speed value written to when enabled

## Comments on the Motor Shield's operation

- Power supply

The shield can either be powered through the arduino or through the mains inlet. For DC motors the current drawn is often too great to be powered from a PC unit and so the mains supply is required.

- Required Set-up

To initialise the motor in the software all the pin's need to be declared and set-up. For the DC motor only two pin's are required - One for enabling and another for braking the motor. These outputs are connected to the H-Bridge on the motor shield as seen in the schematic below.

![H-Bridge Schematics](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Initial-Design-Photos/H-Bridge.png)

- Changing the rotation direction

Output pin 12 is connected to the H-Bridge in such as way that the transistors alter the direction of the motor's supply in accordance with whetether the pin is HIGH or LOW. The following images describe the current flow with the two directions.

Forward Operation

![H-Bridge Forward](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Initial-Design-Photos/H-BridgeFW.png)

Backward Operation

![H-Bridge Forward](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Initial-Design-Photos/H-BridgeBW.png)


- Rotational Speed

The speed of the motor is written as an analogue value to the H-Bridge and is turned into a modulated pulse with a variable pulse width (PWM). The command responsible for speed control is as follows.

Full Speed

```
  analogWrite(3, 255);  
```
Half Speed
```
  analogWrite(3, 123);  
```
The resolution of the speed control is limited to a range of 0 - 255 giving 256 'steps'.

## Closing the loop












