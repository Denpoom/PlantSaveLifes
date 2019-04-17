#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//declare for setup LCD monitor with I2C module

//define function(); 
int soilconvert(int soil_moisture); // measuring humidity of soil by soil moisture senser V1.2

int airquility(){}; // checking air quility for SHARP GP2Y10 Dust Sensor PM2.5 module.

float pumpactive_duration;

int pump();

void setup(){
    Serial.begin(9600);
    lcd.begin(16, 2);// LCD i2C SetUp
    pinMode(2, OUTPUT);//RELAY CONTROL PUMP 2-5v
    pinMode(A1, INPUT);//Registor adjustable
    pinMode(A0, INPUT);//SOIL MOISURE MEANSUREMENT V1.2


    //BIOS MODE FOR DELEY PROGRAM;
    lcd.setCursor(0,0); //First line
    lcd.print("PLANT SAFE LIFE!");
    lcd.setCursor(0,1); //Second line
    lcd.print("  loading ");
    //RUN NUMBER PERCENT FROM 0 TO 100;
    for(int i=0; i< 101;i++){
        lcd.setCursor(10,1);
        lcd.print(i);
        lcd.print(" %");
        delay(10);
        lcd.blink();
    }
    delay(1000);
    lcd.clear();

    
    //SURE THAT THE SYSTEM IS SECURE
    //BY THERE IS SAFETY 2 STEPS CODE BY CONTROLABLE RESISTOR 
     
 
    int unlock = 1;
    while(unlock){
      lcd.setCursor(0,0); //First line
      lcd.print("ADJUST TO 10 -->"); 
      int value = analogRead(A1)/100;
      lcd.setCursor(0,1);//second line
      lcd.print("FOR UNLOCK: ");
      lcd.print(value);
      delay(1000);
      lcd.clear();
      if(value == 10){
        while(unlock){
          value = analogRead(A1)/100;
          lcd.setCursor(0,0); //First line
          lcd.print("ADJUST TO 0 -->"); 
          lcd.setCursor(0,1);//second line
          lcd.print("TO UNLOCK: ");
          lcd.print(value);
          delay(1000);
          lcd.clear();
          if(value == 0)
            unlock = 0;
        }
      }  
    }
    lcd.clear();
    
}
void loop() // While (true){}
{

  int moisture = soilconvert(analogRead(A0)); // convert analog value to percent;

  lcd.setCursor(0,0);
  lcd.print("Moisture: ");
  lcd.print(moisture);
  lcd.print("%");

  //display in computer
  Serial.println("Moisture:");
  Serial.println(moisture);
  Serial.println("%");
  delay(1000);



  //Watering Function
  if(moisture < 40){
     pumpactive_duration += pump();

  if(moisture > 70){
     pumpactive_duration = 0;
     }
  }
  if(pumpactive_duration > 30){
    int unlock = 1;
    while(unlock){
      lcd.setCursor(0,0); //First line
      lcd.print("!WATER OVERFLOW!"); 
      int value = analogRead(A1)/100;
      lcd.setCursor(0,1);//second line
      lcd.print("5 TO UNLOCK: ");
      lcd.print(value);
      delay(1000);
      lcd.clear();
      if(value == 5){
        while(unlock){
          value = analogRead(A1)/100;
          lcd.setCursor(0,0); //First line
          lcd.print("!WATER OVERFLOW!"); 
          lcd.setCursor(0,1);//second line
          lcd.print("0 TO UNLOCK: ");
          lcd.print(value);
          delay(1000);
          lcd.clear();
          if(value == 0){
             unlock = 0;
             pumpactive_duration = 0;
          }
        }
      }  
    }
  }
  lcd.clear();
  

}

int soilconvert(int soil_moisture){
  int percent = map(soil_moisture, 573, 380, 0, 100);
  if(percent < 0){
    percent = 0;
  }
  if(percent > 100){
    percent = 100;
  }
  return percent;
  
}

int pump(){
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(2, LOW);
  return 2;
}
int airquility(){
  
  
}
