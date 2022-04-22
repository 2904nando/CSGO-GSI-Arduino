#define REDPIN 9
#define GREENPIN 6
#define BLUEPIN 5

int current_red, current_green, current_blue = 0;

void led_setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void fill_strip(int red, int green, int blue) {
  analogWrite(REDPIN, red);
  analogWrite(GREENPIN, green);
  analogWrite(BLUEPIN, blue);
}

void turn_off() {
  fill_strip(0,0,0);
}

void bomb_armed() {
  bomb_beep(millis(), 2000);
}

void bomb_beep(long startMillis, int onMillis) {
  while(millis() < startMillis + onMillis) {
    fill_strip(255,0,0);
  }
  turn_off();
}

//void loop() {
//}
