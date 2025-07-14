int myInt;
float myFloat;
String myName;
int br = 9600;

void setup() {
  Serial.begin(br);
  // put your setup code here, to run once:

}

void loop() {
  //Reading Integers 
  Serial.println("What Is Your Number: ");
  while(Serial.available() == 0) {

  }
  myInt = Serial.parseInt();
  Serial.print("Your Number Is: ");
  Serial.println(myInt);

  //Reading Floating Point Numbers
  Serial.println("Please Input a Float: ");
  while(Serial.available() == 0) {

  }
  myFloat = Serial.parseFloat();
  Serial.print("Your Floating Point Number Is: ");
  Serial.println(myFloat);

  //Reading Strings
  Serial.println("What Is Your Name: ");
  while(Serial.available() == 0) {

  }
  myName = Serial.readString();
  Serial.print("Hello ");
  Serial.printS(myName);
  Serial.println(" Welcome To Arduino");
  // put your main code here, to run repeatedly:

}
