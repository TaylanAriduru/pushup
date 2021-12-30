#include <LiquidCrystal.h>

#define echoPin 6
#define trigPin 7
  int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
 LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  int pushup = -1 ;
  int range = 50;



void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  lcd.begin(16, 2);
  
 
}

void loop() {
  // put your main code here, to run repeatedly:
   long duration, distance;
  
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
 duration = pulseIn(echoPin, HIGH);
 distance = duration / 58.2;
 delay(50);
 if(distance <= range )
 

 pushup++;
 
 lcd.setCursor(0,0);
 lcd.print("PUSH-UP");
 lcd.setCursor(0,1);
 lcd.println(pushup);
 delay(1500);
} 
