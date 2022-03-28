float t = 0;
float cycleTime = 0;
float frequency = .01;
float maxAmplitude = 1000;
float minAmplitude = 100;
char buff[100];
bool lightOn = false;
float previousMillis;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  previousMillis = millis();
}

// the loop function runs over and over again forever
void loop() {
  if (cycleTime > myMap(sin(t), -1, 1, minAmplitude, maxAmplitude)) {
    turnLightState();
    cycleTime = 0;
    previousMillis = millis();
  }
  cycleTime += millis() - previousMillis;
  t += frequency;
  dtostrf(myMap(sin(t), -1.0, 1.0, minAmplitude, maxAmplitude), 6, 8, buff);
  Serial.println(buff);
}

void turnLightState() {
  digitalWrite(LED_BUILTIN, (lightOn) ? LOW : HIGH);
  lightOn = !lightOn;
}

float myMap(float value, float istart, float istop, float ostart, float ostop) {
    return ostart + (ostop - ostart) * ((value - istart) / (istop - istart));
}
