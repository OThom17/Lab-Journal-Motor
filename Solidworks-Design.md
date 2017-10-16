# Development of Motor Design

## Potential Developments

As mentioned in the electromagnetics lecture there are a number of design considerations which will improve the motor. 

- Number of copper coils

The point at which the coils are aligned with the magnetic field (Angle = 0) can be considered as a 'dead' region. The inertia from the electromotive force drives the armature into a postion which is again at a normal to the magentic field thus inducing the force once more. 

![](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Arm.png)

By increasing the number of coils the size of the 'dead' region becomes reduced and the motor runs smoother and more efficiently. 

- Number of poles

Similarly by increasing the number of poles would reduce the period with no forces being induced.

- Commutator Design

Typically brushes are used to ensure a reliable connection between the supply and armature. An improvement upon this may be to use a sprung conductor such as a wire. This would limit energy waste through sparking and ensure a more consistent connection.


- Inclusion of an iron based core

Having an iron core within a magnetic field increases the 'u' value which increases the flux density. This in turn increases the electromotive force experienced by the current carrying wire.

![](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/F%3DBIL.png)

![](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Mew.png)



- Frictional losses at the rotation points

By adding low friction surfaces at either end the armature the mechnical losses through heat and sound will be minimised. Furthermore by constructing the armature from lightweight materials less force will be required to perform a rotation.

- More evenly distributed magnetic field

In the first example the magnets were placed in a single stack either side of the armature. To more evenly distribute these would generate a more homogeneous field increasing the efficiency and force induced in the armature. 



## Initial Design & Development

- Armature Design

To reduce to 'dead' space additional cores will be added, to minimise complexity four has been chosen. No additional poles have been added in the aid of reducing overall complexity and therefore the number of additional components.

![Image of 2D design showing 4 core design](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Motor-2D.JPG)

![Image of the Armature - Plan View](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Armature-Plan.JPG)

![Image of the Armature - Front View](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Armature-Front.JPG)

An additional length has been added to act not only as a spacer but will have the commutator contacts around the circumference.

- Supporting the Armature

Two posts have been designed to hold an axel allowing the free rotation of the armature. They feature a wide base to increase stabilty.

![Initial design of the motor support](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Support-Front.JPG)

To provide the connections to the commutator two blocks will be placed either side. This has been taken into account when designing the support as they'll need to be secured.

![Image of support with recesses for commutator blocks](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Support-wCommutator.JPG)

- Housing the magnets

As discussed earlier by placing the magnets appart a longer and more uniformed magnetic field will be generated. To ensure they remain in place two side bars will stretch the length of the motor. To secure these two rectangular holes have been added to the supports. 

![Image of the magnet's housing](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/magnetic-bracket.JPG)

![Image of the support](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Support-Front-Mag.JPG)

- Reducing frictional losses

To improve the efficiency of the motor two bearings have been added to the design. The armature will be fixed to the axel and either side allowed to freely rotate. This has meant that two holes have had to be included each of 19mm diameter (min).

![Image of the chosen bearings](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/IMG_20171011_094336.jpg)

## Addition of encoder hardware

- Housing the photo-transistor

To house the phototransistor a recess has been included in one of the supports. It has been extended to effective cable management

![Image showing recess for housing photo-transistor](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Support-Front-Encoder.JPG) 

However by wanting a recess on both sides of the part there was a substantial amount of overhang for the bearing housing face. 

![](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Overhand.JPG) 

![](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Overhang-Other.JPG)

To avoid this problem a recess was made on the same side as the photo-transistors. A washer shaped piece was then designed to fit into the slot providing the bearing housing face correctly.

![Image of the washer](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Bearing-Washer.JPG)

![Image of the washer recess](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Encoder.JPG)

- Housing the LED

The LED will need to be placed opposite the photo-transistor to ensure a good beam. The encoder plate will then break this allowing speed to be determined. However, this required a complete frame to be added to the front.

![LED Housing Plate](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Assembly-Encoder-Holder.JPG)



- Encoder plate design

These will be added to the shaft's connector and will break the IR beam making speed calculation's possible. Two have been made, one with a single slit and another with four. This will be an interesting experiment into whether more reliable speed measurements can be made. 

![Image of the single slit encoder plate]()

![Image of the multi-slit encoder plate]()

## Final Design Assembly


![Assembly without the encoder plate](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Assembly-w-encoder.JPG)

![Image of design with single slit encoder plate](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Assembly-Endoderplate.JPG)

![Plan view of the final design](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Assembly-Plan.JPG)

![Complete Design](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Assembly-Encoder-Holder.JPG)


## Production 

To start fabricating the parts a spool of 1.75mm PLA material needed to be ordered. I purchased 1kg of green from Rapid electronics. 

![Spool of green 1.75mm PLA material](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/IMG_20171011_094309.jpg)

The parts then needed to be organised corrects on the 3D printer bed. This stage is crucial as the wrong orientation of components can results in a failed printing (overhangs etc). A package called 'Cura' was used to place them and also check that printing would be possible by using the slicer view tool. 

The output of this file is of a g code format. Contained within this binary file is the positional information for the printer to follow. 

![Slicer Software](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/Slicer.JPG)

![Image of the printing process](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/IMG_20171012_110252.jpg)

![Final piece](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/IMG_20171013_154813.jpg)






## Misc Images 

![Winding Process](https://github.com/OThom17/Lab-Journal-Motor/blob/master/Development-Images/IMG_20171016_100850.jpg)











