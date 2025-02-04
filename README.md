# LED-CONTROLLER-USING-VOICE-RECOGNITION

### INTRODUCTION :

Controlling LED lights using voice recognition. This project is made using Arduino.  This idea’s functionality is nowadays seen in a lot of LED lights. Innovation and technology try to make the life of users convenient and this project is one of the demo of that real life example. Bluetooth (Module HC-05) is used in this project. In this project we will see what a Bluetooth (Module HC-05) is, how it works and how to interface this with Arduino with wiring connections and the code.

### MATERIALS REQUIRED : 

You will need the following materials for making your own voice controlled LED:

### Hardware used:

Component	Quantity
Arduino Uno Board	1
USB cable	1
Bread Board	1
Bluetooth (Module HC-05)	1
LED (Red, Green, Yellow)	3
Jumper Wires	-

### Software used:
1.	Arduino IDE
2.	Arduino Bluetooth Controller (Android App)

 
### CIRCUIT DIAGRAM :
![image](https://github.com/user-attachments/assets/5e7ef275-56c3-41e0-b765-d2a6160c12db)
Figure 1


### Step By Step Procedure: 

In this project , LED components are used to demonstrate the result of the voice-controlled functionality.
●	Initialize serial communication. In Bluetooth HC 05,we only used 4 pins. RX pin,TX pin,VCC,GND. RX pin is used for receiving the command, TX is used for transferring the data, ground is used for getting 5V power from the source and VCC shows the positive power.
●	RX will be connected to the TX pin of the Arduino UNO board . TX will be connected to the RX pin and ground will be connected to the ground pin and VCC will be connected to the 5V power.
●	Connect the LED in the breadboard. Red pin will be connected on pin number 2, green on pin number 3 and yellow on pin number 4. Ground connection will be passed to each LED.
●	Now, passing 5V power to the Arduino board.

### Expected Outcome: 

The green LED light will turn on when we say green as the user phone’s active voice recognition recognizes the voice command with the help of HC-05 bluetooth connection. Similarly, this happens for red and yellow LEDs.


### Code Explanation : 

We have made several functions like:
●	RedOn()
●	YellowOn()
●	GreenOn()

For turning on the LEDs individually.
We have made several functions like:
●	RedOff()
●	YellowOff()
●	GreenOff()

### For turning off the LEDs individually
The function like:
●	allOn()
●	allIOff()
To turn on and Off all the LEDs together

Serial. begin (9600); opens serial port, sets data rate to 9600 bps. This tells the Arduino to get ready to exchange messages with the Serial Monitor at a data rate of 9600 bits per second.
The most common reason to use Serial. begin () is when you want to output some information from your Arduino to your computer screen.Serial.available() gets the number of bytes (characters) available for reading from the serial port. This is data that’s already arrived and stored in the serial receive buffer (which holds 64 bytes).
Voice is then converted to text format by Arduino and various if-else statements are used to fulfill the conditions required. For example: if yellow is asked in the voice control, the voice will be converted to text “yellow”, the if else statement will run which will lead to running of the yellowOn() function resulting in the bulb glowing.


### Result
![image](https://github.com/user-attachments/assets/3444a676-2768-4d21-bc07-903473378087)
Figure 2 Green LED Glowing

![image](https://github.com/user-attachments/assets/7c5a26e3-d851-4844-b382-620a94a23db7)
Figure 3 Turning on all lights

![image](https://github.com/user-attachments/assets/0fded795-2a1f-4aad-a303-509d331d5a9d)
Figure 4 Using voice recognition

