#include <PulseSensorPlayground.h>

const int PulseWire = A0;      // Pulse Sensor connected to A0
const int LED = LED_BUILTIN;   // Arduino onboard LED
int Threshold = 550;           // Threshold value

PulseSensorPlayground pulseSensor;

void setup() {
  Serial.begin(9600);

  pulseSensor.analogInput(PulseWire);
  pulseSensor.blinkOnPulse(LED);
  pulseSensor.setThreshold(Threshold);

  if (pulseSensor.begin()) {
    Serial.println("It's a Pulse Sensor!");
  }
}

void loop() {

  if (pulseSensor.sawStartOfBeat()) {

    int myBPM = pulseSensor.getBeatsPerMinute();

    Serial.println("♥ A HeartBeat Happened!");
    Serial.print("BPM: ");
    Serial.println(myBPM);
  }

  delay(50);
}
