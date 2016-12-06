int trigPin = 4;
int echoPin = 3;
//int greenPin=10;
int buzzerPin=11;
long duration, distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
//pinMode(greenPin, OUTPUT);
pinMode(buzzerPin, OUTPUT);
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
//analogWrite(greenPin,255);
{
  tone(buzzerPin, 261, 383);
  delay(192);
  tone(buzzerPin, 294, 340);
  delay(170);
  tone(buzzerPin, 329, 304);
  delay(152);
  tone(buzzerPin, 349, 286);
  delay(143);
  tone(buzzerPin, 392, 255);
  delay(128);
  tone(buzzerPin, 440, 227);
  delay(114);
  tone(buzzerPin, 493, 203);
  delay(101);
  tone(buzzerPin, 523, 191);
  delay(95);
  delay(1000);
  }
else
//analogWrite(greenPin,20);
delay(200);

}
