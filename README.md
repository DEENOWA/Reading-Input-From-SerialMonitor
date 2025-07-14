# Reading-Input-From-SerialMonitor
This Arduino sketch enables serial communication to read user input from the Serial Monitor, including an integer, a floating-point number, and a string, and then echoes the input back. It is designed for an Arduino board (e.g., Arduino Uno) to demonstrate serial input parsing.
The sketch defines variables: myInt (for an integer), myFloat (for a floating-point number), myName (for a string), and br (9600 baud rate for serial communication). In the setup function, Serial communication is initialized at 9600 baud.In the loop function, the sketch:Prompts for an integer ("What Is Your Number: "), waits for input, reads it with Serial.parseInt, and prints it back ("Your Number Is: ").
Prompts for a floating-point number ("Please Input a Float: "), waits for input, reads it with Serial.parseFloat, and prints it back ("Your Floating Point Number Is: ").
Prompts for a name ("What Is Your Name: "), waits for input, reads it with Serial.readString, and prints a greeting ("Hello [name] Welcome To Arduino").
Repeats indefinitely.

Hardware Requirements:Arduino board with serial communication capability (e.g., Arduino Uno, Nano).
No additional components are needed, as the sketch uses the Serial Monitor.

Usage:Upload the sketch to your Arduino board using the Arduino IDE.
Open the Serial Monitor (9600 baud), ensure "Newline" or "Carriage return" is selected, and type inputs when prompted.
Enter an integer, a float, and a name to see the echoed responses.

Notes:The Serial.printS(myName) line contains a typo; it should be Serial.print(myName) to avoid a compilation error.
The while(Serial.available() == 0) loops wait for user input, pausing execution until data is received.
This sketch is ideal for learning serial communication, input parsing, and user interaction with Arduino.
Ensure timely input to avoid delays in the loop.
