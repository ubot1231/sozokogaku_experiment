#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
int val = 200;//入力する値を格納する変数

void setup() {
  Serial.begin(9800);
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(12);
  pinMode(pin番号,INPUT);
  pinMode(pin番号,OUTPUT);
  pinMode(pin番号,OUTPUT);
  pinMode(pin番号,OUTPUT);
  pinMode(pin番号,OUTPUT);
}

void loop() {
//ライントレースと連動（サーボ）
  if(analogRead(0)>=val){
    servo1.write(90);
    delay(2000);
    servo1.write(180);
    delay(2000);
  }else if(analogRead(1)>=val){
    servo2.write(90);
    delay(2000);
    servo2.write(50);
    delay(2000);
  }else if(analogRead(2)>=val){
    servo2.write(90);
    delay(2000);
    servo2.write(50);
    delay(2000);
  }
  
//導通したらLEDを点灯
  degitalRead(pin番号,INPUT);
  if(degitalRead(pin番号)==0){   //導通したら
    degitalWrite(pin番号，HIGH); //LED点灯
    degitalWrite(pin番号，HIGH);
    degitalWrite(pin番号，HIGH);
    degitalWrite(pin番号，HIGH);
  }else{
    degitalWrite(pin番号，LOW); //LED点灯
    degitalWrite(pin番号，LOW);
    degitalWrite(pin番号，LOW);
    degitalWrite(pin番号，LOW);
  }
}
