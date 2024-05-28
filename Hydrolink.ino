#include <LiquidCrystal_I2C.h>

#define trig 7
#define echo 6
#define red 4
#define yell 3
#define green 2
#define buzz 5
#define m1 8
#define m2 9

LiquidCrystal_I2C lcd(0x27,16,2);

void gL(){
  digitalWrite(red, LOW);
  digitalWrite(yell, LOW);
  digitalWrite(green, HIGH);
}

void yL(){
  digitalWrite(red, LOW);
  digitalWrite(yell, HIGH);
  digitalWrite(green, LOW);
}

void rL(){
  digitalWrite(red, HIGH);
  digitalWrite(yell, LOW);
  digitalWrite(green, LOW);
}

void beep(){
  for(int i = 0; i < 3; i++){
      tone(buzz,440);
      delay(100);
      noTone(buzz);
      delay(100);
    }
}

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yell, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  
  digitalWrite(trig, HIGH);
  delay(100); 
  digitalWrite(trig, LOW);
  

  int duration = pulseIn(echo,HIGH);
  int distance = (duration/2)/29.1;
  
  //Printar no Serial Monitor
  Serial.print(distance);
  Serial.println("cm");
  
  //Display Nível da Água
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NIVEL DA AGUA:");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print("cm");
  
  //Controle dos LED`s
   if (distance > 50){
    noTone(7);
    gL();
  }
  else if (distance > 10 && distance < 50){
    noTone(7);
    yL();    
  }
  else if(distance < 10){ // LED VERMELHA -- Nível de Atenção
    beep();
    rL();
  }
}
