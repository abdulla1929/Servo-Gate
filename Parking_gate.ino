#include<LiquidCrystal_I2C.h>
#include<Servo.h>
LiquidCrystal_I2C lcd(0x27,16,2);
Servo servo;
const int trig=5;
const int echo=6;
const int red=9;
const int blue=10;



void setup() {
Serial.begin(9600);
lcd.init();
lcd.backlight();
servo.attach(3);
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);

}

void loop() {
 digitalWrite(trig,LOW);
 delay(300);
 digitalWrite(trig,HIGH);
 delay(300);
 digitalWrite(trig,LOW);

int duration,cm;
duration=pulseIn(echo,HIGH);
cm = (duration*0.0343)/2;

 if(cm<=5){
 servo.write(0);
 lcd.setCursor(0,0);
 lcd.print("open");
 analogWrite(red,LOW);
 digitalWrite(blue,HIGH);

 delay(700);



}
else{
servo.write(90);
 lcd.setCursor(0,0);
 lcd.print("closed");
 digitalWrite(blue,LOW);
 digitalWrite(red,HIGH);

}
Serial.print(" ");
Serial.print(cm);
Serial.print("cm ");
}


