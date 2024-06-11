#include<Servo.h>

Servo horizontal;
int motor1=0;

Servo vertical;
int motor2=0;

int ldrbottomright=0;
int ldrtopright=1;
int ldrtopleft=2;
int ldrbottomleft=3;

int topleft;
int topright;
int bottomleft;
int bottomright;


int avgtop;
int avgbottom;
int avgleft;
int avgright;


void setup() {
  
horizontal.attach(10);
horizontal.write(0);
vertical.attach(9);
vertical.write(0);
delay(500);

}

void loop() {
  
motor1 = horizontal.read();
motor2 = vertical.read();

topleft = analogRead(ldrtopleft);
topright = analogRead(ldrtopright);
bottomleft = analogRead(ldrbottomleft);
bottomright = analogRead(ldrbottomright);

avgtop = (topleft+topright)/2;
avgbottom = (bottomleft+bottomright)/2;
avgleft = (topleft+bottomleft)/2;
avgright = (topright+bottomright)/2;

if(avgtop < avgbottom)
{ 
  vertical.write(motor2 + 1);
  delay(10);
}
else if (avgbottom < avgtop)
{ vertical.write(motor2 - 1);
delay(10);
}
else
{
  vertical.write(motor2);
}

if (avgleft > avgright)
{ horizontal.write(motor1 + 1);
delay(10);
}
else if (avgright > avgleft)
{ horizontal.write(motor1 - 1);
delay(10);
}
else 
{ 
  horizontal.write(motor1);
}
delay(50);
}
