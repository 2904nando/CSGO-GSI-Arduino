void setup() {
  led_setup();
//  bomb_armed();
  Serial.begin(9600);
  Serial.setTimeout(1);
}

String incoming_serial = "";

void loop() {
//  while (!Serial.available());
  incoming_serial = Serial.readString();

  if(incoming_serial.startsWith("r")){
    fill_strip(255,0,0);
  }
  else if(incoming_serial.startsWith("g")){
    fill_strip(0,255,0);
  }
  else if(incoming_serial.startsWith("b")){
    fill_strip(0,0,255);
  }
  else if(incoming_serial.startsWith("y")){
    fill_strip(255,255,0);
  }
}
