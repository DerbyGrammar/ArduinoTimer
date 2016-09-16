/*
  Chris Nethercott / ThorinDev
  ArduinoTimer
*/

long startTime;
long endTime;
long elapsedTime;

void setup() {
  startTime = millis();
  delay(1000);
  endTime = millis();
  
  elapsedTime = startTime-endTime;
  Serial.println(elapsedTime);
}

void loop() {

}
