#include <Ultrasonic.h>
Ultrasonic sensor(11,10); // (Trig PIN,Echo PIN)
int deger;
void setup() {
Serial.begin(9600);
}
void loop()
{
deger=sensor.Ranging(CM);
Serial.println(deger);
}
