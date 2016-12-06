int trigPin = 12;
int echoPin = 11;
int greenPin=10;
long duration, distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

if (distance < 10)
analogWrite(greenPin,255);
else
analogWrite(greenPin,20);
delay(200);

}
