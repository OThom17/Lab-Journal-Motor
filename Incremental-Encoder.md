# Motor Control with Encoder Feedback

## Encoder Brief

The encoder will be comprised of two parts: the photo-transistor and the infa-red LED. The encoder will break the mean between the two which will produce a signal of which the arduino can read.

Therefore the physcial design will need to consider:

- The housing of the photo-transistor and LED
- A component which when rotating will break the beam.


## Hardware

###Breaking the beam

These plates will be connected to the shaft and rotate breaking the beam with every rotation. Two have been made, more slits ought to increase the accuracy of the sensor. 

![Images of encoder plates](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Printedslits.jpg)

To house the LED opposite the photo-transistor a bracket has been designed. This ensures that the beam is kept reliably in the same place allowing for accurate readings.

![Image of LED holding plate](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/PrintedLDRH.jpg)

To keep the design compact the electronics (image below) will be soldered in-line. The keeps the LED powered on and emitting light constantly. The sensor circuit is active-low as the photo-transistor turns off without the presence of light.

![Image of the encoder circuit](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/LDRCircuit.png)

Image showing the in-line circuitary.

![Imaage of inline LDR circuitry](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/LDR.jpg)



## Software


The program will detect the time it takes for the shaft to perform a complete rotation of the slit. To do this it'll wait until the sensor read's HIGH (Beam is being blocked) and then start timing in ms. the timer will stop once the sensor reads a LOW (When the encoder plate isn't obstructing the beam.

If the plate isn't blocking the beam when the sample is being taken the 'pulseIn' routine will wait until it is before taking the start time. 

With the circumference of the slit known the speed can be calculated. 



## Adding the Encoder Code


```
constbyte ledPin= 13;
constbyte interruptPin= 2;
volatilebyte state= LOW;

voidsetup() {
	pinMode(ledPin, OUTPUT);
	pinMode(interruptPin, INPUT);
	// configure the interrupt call-back: blink is called everytime the pin
	// goes from low to high.
	attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}
voidloop() {
	digitalWrite(ledPin, state);
}
voidblink() {
	state= !state;
}
```

This code will toggle the LED's state if the beam is beam is broken.

The angular velocity is calculable using the following two variables:

- Time

Timer is enabled when the line is broken and stopped when the connection is back ]

- Angle of rotation

Constant value, initially the single slit plate has been used.

*** Provide angle of rotation for single slitted design.





