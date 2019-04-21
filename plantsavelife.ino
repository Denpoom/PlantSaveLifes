#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//declare for setup LCD monitor with I2C module

//define function(); 
int soilconvert(int soil_moisture); // measuring humidity of soil by soil moisture senser V1.2

void airquility(); // checking air quility for SHARP GP2Y10 Dust Sensor PM2.5 module.

// Arduino pin numbers.///////////////////////////////////////////////////////////
const int sharpLEDPin = 7;   // Arduino digital pin 7 connect to sensor LED.
const int sharpVoPin = A2;   // Arduino analog pin 5 connect to sensor Vo.

#define N 100
static unsigned long VoRawTotal = 0;
static int VoRawCount = 0;

// Set the typical output voltage in Volts when there is zero dust. 
static float Voc = 0.6;

// Use the typical sensitivity in units of V per 100ug/m3.
const float K = 0.5;
///////////////////////////////////////////////////////////////////////////////////

float pumpactive_duration;

bool first_cycle = true;// Defaut First Cycle of loop() there are gap while waiting for First-Cycle of loop()

int pump();//declare pump() for command pump to work.

void setup(){
    Serial.begin(9600);
    lcd.begin(16, 2);// LCD i2C SetUp
    pinMode(2, OUTPUT);//RELAY CONTROL PUMP 2-5v
    pinMode(A1, INPUT);//Registor adjustable
    pinMode(A0, INPUT);//SOIL MOISURE MEANSUREMENT V1.2
    pinMode(sharpLEDPin, OUTPUT); // Set LED pin for SHARP GP2Y10 Dust Sensor PM2.5 module.


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
  
  if(first_cycle){
     
  lcd.setCursor(0,0);
  lcd.print("CHECKING SENSOR");
  lcd.setCursor(0,1);
  lcd.print("status:");
  for(int i = 1; i < 9;i++){
    lcd.print("#");
    delay(600);
  }
  lcd.setCursor(0,1);
  lcd.print("status: Connect");
  delay(2000);
  first_cycle = false; // end of first Cycle preload
  
  }
  
  digitalWrite(sharpLEDPin, LOW);

  // Wait 0.28ms before taking a reading of the output voltage as per spec.
  delayMicroseconds(280);

  // Record the output voltage. This operation takes around 100 microseconds.
  int VoRaw = analogRead(sharpVoPin);
  
  // Turn the dust sensor LED off by setting digital pin HIGH.
  digitalWrite(sharpLEDPin, HIGH);

  // Wait for remainder of the 10ms cycle = 10000 - 280 - 100 microseconds.
  delayMicroseconds(9620);
  
  
  // Use averaging 100 value
  float Vo = VoRaw;
  VoRawTotal += VoRaw;
  VoRawCount++;
  if ( VoRawCount >= N ) {
    Vo = 1.0 * VoRawTotal / N;
    VoRawCount = 0;
    VoRawTotal = 0;
  } else {
    return;
  }

  // Compute the output voltage in Volts.
  Vo = Vo / 1024.0 * 5.0;

  // Convert to Dust Density in units of ug/m3.
  float dV = Vo - Voc;
  if ( dV < 0 ) {
    dV = 0;
    Voc = Vo;
  }
  float dustDensity = dV / K * 100.0;

  int moisture = soilconvert(analogRead(A0)); // convert analog value to percent;

  lcd.clear();//Clear Screen immediately when new value come it has delay around 10000 millisecond


  lcd.setCursor(0,0);
  lcd.print("Moisture: ");
  lcd.print(moisture);
  lcd.print("%");
  
  ////////////////////////////////////////////
    // Turn on the dust sensor LED by setting digital pin LOW.
  lcd.setCursor(0,1);
  lcd.print("Dust:");
  lcd.print(dustDensity);
  lcd.print("ug/m3");
  
  ////////////////////////////////////////////
  
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
