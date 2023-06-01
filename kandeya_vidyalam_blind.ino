#define trigPin 13
#define echoPin 12
#define buzzer 6

void setup()
{
pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);


pinMode(buzzer,OUTPUT);

}

void loop()

{

long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)     // This is where checking the distance you can change the value

{

//digitalWrite(motor,0);    // When the the distance below 100cm

digitalWrite(buzzer,1);
delay(1000);  
} else

{

///digitalWrite(motor,1);     // when greater than 100cm

digitalWrite(buzzer,0);

} 

}
