const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 9;
long randNum1; // at 75%
long randNum2; // at 90%

void setup() {
  Serial.begin(9600);
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  randNum1 = random(0,1);
  randNum2 = random(0,1);
  Serial.println(randNum1);
  Serial.println(randNum2);
  if(randNum2 = 1) {
    setColor(255,0,0);
    Serial.println("Red, >90%");
  } else if(randNum1 = 1) {
    setColor(255,255,0);
    Serial.println("Yellow, >75%");
  } else {
    setColor(0,255,0);
    Serial.println("Green, <75%");
  }
  delay(1000);
}

void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
