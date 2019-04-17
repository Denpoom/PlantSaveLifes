void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
     analogWrite(A0, 233); 

     // Testing... Are the PUMP 2-5Volt able to consume and control VCC directly from the Aduino UNO?
     // Test Result : Failed 
     // because when Pump2-5V get VCC on 5V port on Arduino UNO board, The Aduino will not enough of Voltage, They restart themself while Pump are working.
     // Solution : 
     // Seperating Power Supply both of them( Arduino UNO, PUMP2-5v) to prevent unbalance voltage between them.  
 }
