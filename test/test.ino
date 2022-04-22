#define REDPIN 9
#define GREENPIN 6
#define BLUEPIN 5

#define FADESPEED 5

int r,g,b = 0;
String incomingString;

void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    incomingString = Serial.readString();
  
    if (incomingString.startsWith("r")) {
      r = incomingString.substring(1,incomingString.length()+1).toInt();
    }
    if (incomingString.startsWith("g")) {
      g = incomingString.substring(1,incomingString.length()+1).toInt();
    }
    if (incomingString.startsWith("b")) {
      b = incomingString.substring(1,incomingString.length()+1).toInt();
    }

    Serial.println(String("R: ").concat(r));
    Serial.println(String("G: ").concat(g));
    Serial.println(String("B: ").concat(b));
    Serial.println();

    analogWrite(REDPIN,r);
    analogWrite(GREENPIN,g);
    analogWrite(BLUEPIN,b);
  }
//  analogWrite(REDPIN,255);
//  analogWrite(GREENPIN,0);
//  analogWrite(BLUEPIN,0);
//  int r, g, b;
//  // fade from blue to violet
//  for (r = 0; r < 256; r++) { 
//    analogWrite(REDPIN, r);
//    delay(FADESPEED);
//  } 
//  // fade from violet to red
//  for (b = 255; b > 0; b--) { 
//    analogWrite(BLUEPIN, b);
//    delay(FADESPEED);
//  } 
//  // fade from red to yellow
//  for (g = 0; g < 256; g++) { 
//    analogWrite(GREENPIN, g);
//    delay(FADESPEED);
//  } 
//  // fade from yellow to green
//  for (r = 255; r > 0; r--) { 
//    analogWrite(REDPIN, r);
//    delay(FADESPEED);
//  } 
//  // fade from green to teal
//  for (b = 0; b < 256; b++) { 
//    analogWrite(BLUEPIN, b);
//    delay(FADESPEED);
//  } 
//  // fade from teal to blue
//  for (g = 255; g > 0; g--) { 
//    analogWrite(GREENPIN, g);
//    delay(FADESPEED);
//  } 
}
