#include <LiquidCrystal.h>
const int rs = 6;
const int en = 5;
const int d4 = 4;
const int d5 = 3;
const int d6 = 2;
const int d7 = 1;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); 
int Ledladovermelho = 13;
int Ledladoamarelo = 12;
int Ledladoverde = 11;
int Ledsverde = 10;
int Ledsamarelo = 9;
int Ledsvermelho = 8;
int buzzer = 7;
void setup() {
  pinMode(Ledladovermelho,OUTPUT);
  pinMode(Ledladoamarelo,OUTPUT);
  pinMode(Ledladoverde,OUTPUT);
  pinMode(Ledsverde,OUTPUT);
  pinMode(Ledsamarelo,OUTPUT);
  pinMode(Ledsvermelho,OUTPUT);
  pinMode(buzzer,OUTPUT);
  lcd.begin(16,2);
}

void loop() {
  int i=0;
  
  
  digitalWrite(Ledladovermelho,HIGH);
  
  digitalWrite(Ledsverde,HIGH);
  
  delay(1000);
  
  digitalWrite(Ledsverde,LOW);
  
  digitalWrite(Ledsamarelo,HIGH);
  
  delay(2500);
  
  digitalWrite(Ledsamarelo,LOW); 
  
  digitalWrite(Ledladovermelho,LOW); 
  
  digitalWrite(Ledsvermelho,HIGH);
  digitalWrite(Ledladoverde,HIGH);
  delay(1000);
 while(i!=10000){ 
    tone(buzzer,2000,100);
    delay(1000);
    i= i+1000;
  }
  digitalWrite(Ledladoverde,LOW);
  digitalWrite(Ledladoamarelo,HIGH);
  delay(2500);
  digitalWrite(Ledladoamarelo,LOW);
  digitalWrite(Ledladovermelho,HIGH);
  digitalWrite(Ledsvermelho,LOW);
  digitalWrite(Ledsverde,HIGH); 
    i=10;
  while(i!=0){
    lcd.setCursor(0,0);
      lcd.print(i);
      lcd.print(" segundos para");
      lcd.setCursor(0,1);
      lcd.print(" passar");
      i=i-1;
      delay(1000);
      lcd.clear();
    }
}