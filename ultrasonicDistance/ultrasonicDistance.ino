#define trig 12 //Connect the Trig pin to pin 12
#define echo 11 //Connect the Echo pin to pin 11
long distance; //The variable which will store the calculated distance
long duration;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(trig, OUTPUT);
 pinMode(echo, INPUT);
 pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = ((duration/2) / 29.1);
  Serial.println(distance); //Printing the distance value on the Serial Monitor
  delay(200);
}
