#include <LiquidCrystal_I2C.h> 
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  //設定LCD位置0x27,設定LCD大小為16*2


const int Red = 9;
const int Green = 10;
const int Blue = 11;
 
#define FADESPEED 5     // 速度
 

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
  
  Serial.begin(9600);     // initialize serial communications
  
  analogWrite(Red,0);
  analogWrite(Green,0);
  analogWrite(Blue,0);
  
  pinMode(7,OUTPUT);


}



void loop() {
if (Serial.available() > 0) { // if there's serial data available
  int inByte = Serial.read();   // read it
  int r, g, b;
     
   
  
    if (inByte == 1) {
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("ape"); //顯示Hello, World!
      
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if (inByte == 2){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("monkey"); //顯示Hello, World!
      
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if (inByte == 3) {
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("boar"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if (inByte == 4){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("bear"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
      delay(5);
      
     } else if  (inByte == 5){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("chimpanzees"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);
      
      digitalWrite(7,HIGH);
//      delay(5);
            
     } else if  (inByte == 6){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("deer"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if  (inByte == 7){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("leopard cat"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if  (inByte == 8){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("lion"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if  (inByte == 9){lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("tiger"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else if  (inByte == 10){
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("elephant"); //顯示Hello, World!
      analogWrite(Red,0);
      analogWrite(Green,255);
      analogWrite(Blue,0);
      delay(10);
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,255);
      delay(10);
      analogWrite(Red,255);
      analogWrite(Green,0);
      analogWrite(Blue,0);
      delay(10);

      digitalWrite(7,HIGH);
//      delay(5);
      
     } else{

      
      lcd.init(); //初始化LCD 
      lcd.backlight(); //開啟背光
      lcd.print("other"); //顯示Hello, World!
      
      analogWrite(Red,0);
      analogWrite(Green,0);
      analogWrite(Blue,0);

      digitalWrite(7,LOW);
     }
   }
      } 

   
