#define echo 11
#define trig 12
long sure, mesafe;
void setup() {
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
}
void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
sure=pulseIn(echo,HIGH);
mesafe=sure/58.2;
Serial.println(mesafe);

}
