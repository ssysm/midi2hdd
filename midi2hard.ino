 #include "pitches.h"
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
  Serial.begin(19200);
}
void loop() {
  if (Serial.available()){
    val = Serial.read();
    Serial.println(val);
    digitalWrite(13,1); 
      if(val == 36){
        tone(8,NOTE_C2,1000/4);
      }
      else if(val == 37){
        tone(8,NOTE_CS2,1000/4);
      }
       else if(val == 38){
        tone(8,NOTE_D2,1000/4);
      }
      else if(val == 39){
        tone(8,NOTE_DS2,1000/4);
      }
      else if(val == 40){
        tone(8,NOTE_E2,1000/4);
      }
      else if(val == 41){
        tone(8,NOTE_F2,1000/4);
      }
      else if(val == 42){
        tone(8,NOTE_FS2,1000/4);
      }
      else if(val == 43){
        tone(8,NOTE_G2,1000/4);
      }
      else if(val == 44){
        tone(8,NOTE_GS2,1000/4);
      }
      else if(val == 45){
        tone(8,NOTE_A2,1000/4);
      }
      else if(val == 46){
        tone(8,NOTE_AS2,1000/4);
      }
      else if(val == 47){
        tone(8,NOTE_B2,1000/4);
      }
      else if(val == 48){
        tone(8,NOTE_C3,1000/4);
      }
      else if(val == 49){
        tone(8,NOTE_CS3,1000/4);
      }
      else if(val == 50){
        tone(8,NOTE_D3,1000/4);
      }
      else if(val == 51){
        tone(8,NOTE_DS3,1000/4);
      }
      else if(val == 52){
        tone(8,NOTE_E3,1000/4);
      }
      else if(val == 53){
        tone(8,NOTE_F3,1000/4);
      }
      else if(val == 54){
        tone(8,NOTE_FS3,1000/4);
      }
      else if(val == 55){
        tone(8,NOTE_G3,1000/4);
      }
      else if(val == 56){
        tone(8,NOTE_GS3,1000/4);
      }
      else if(val == 57){
        tone(8,NOTE_A3,1000/4);
      }
      else if(val == 58){
        tone(8,NOTE_AS3,1000/4);
      }
      else if(val == 59){
        tone(8,NOTE_B3,1000/4);
      }
      else if(val == 60){
        tone(8,NOTE_C4,1000/4);
      }
      else if(val == 61){
        tone(8,NOTE_CS4,1000/4);
      }
      else if(val == 62){
        tone(8,NOTE_D4,1000/4);
      }
      else if(val == 63){
        tone(8,NOTE_DS4,1000/4);
      }
      else if(val == 64){
        tone(8,NOTE_E4,1000/4);
      }
      else if(val == 65){
        tone(8,NOTE_F4,1000/4);
      }
      else if(val == 66){
        tone(8,NOTE_FS4,1000/4);
      }
      else if(val == 67){
        tone(8,NOTE_G4,1000/4);
      }
      else if(val == 68){
        tone(8,NOTE_GS4,1000/4);
      }
      else if(val == 69){
        tone(8,NOTE_A4,1000/4);
      }
      else if(val == 70){
        tone(8,NOTE_AS4,1000/4);
      }
      else if(val == 71){
        tone(8,NOTE_B4,1000/4);
      }
      else if(val == 72){
        tone(8,NOTE_C5,1000/4);
      }
      else if(val == 73){
        tone(8,NOTE_CS5,1000/4);
      }
      else if(val == 74){
        tone(8,NOTE_D5,1000/4);
      }
      else if(val == 75){
        tone(8,NOTE_DS5,1000/4);
      }
      else if(val == 76){
        tone(8,NOTE_E5,1000/4);
      }
      else if(val == 77){
        tone(8,NOTE_F5,1000/4);
      }
      else if(val == 78){
        tone(8,NOTE_FS5,1000/4);
      }
      else if(val == 79){
        tone(8,NOTE_G5,1000/4);
      }
      else if(val == 80){
        tone(8,NOTE_GS5,1000/4);
      }
      else if(val == 81){
        tone(8,NOTE_A5,1000/4);
      }
      else if(val == 82){
        tone(8,NOTE_AS5,1000/4);
      }
      else if(val == 83){
        tone(8,NOTE_B5,1000/4);
      }
      else if(val == 84){
        tone(8,NOTE_C6,1000/4);
      }
      else if(val == 85){
        tone(8,NOTE_CS6,1000/4);
      }
      else if(val == 86){
        tone(8,NOTE_D6,1000/4);
      }
      else if(val == 87){
        tone(8,NOTE_DS6,1000/4);
      }
      else if(val == 88){
        tone(8,NOTE_E6,1000/4);
      }
      else if(val == 89){
        tone(8,NOTE_F6,1000/4);
      }
      else if(val == 90){
        tone(8,NOTE_FS6,1000/4);
      }
      else if(val == 91){
        tone(8,NOTE_G6,1000/4);
      }
      else if(val == 92){
        tone(8,NOTE_GS6,1000/4);
      }
      else if(val == 93){
        tone(8,NOTE_A6,1000/4);
      }
      else if(val == 94){
        tone(8,NOTE_AS6,1000/4);
      }
      else if(val == 95){
        tone(8,NOTE_B6,1000/4);
      }
     else if(val == 96){
        tone(8,NOTE_C7,1000/4);
      }
      else if(val == 97){
        tone(8,NOTE_CS7,1000/4);
      }
      else if(val == 98){
        tone(8,NOTE_D7,1000/4);
      }
      else if(val == 99){
        tone(8,NOTE_DS7,1000/4);
      }
      else if(val == 100){
        tone(8,NOTE_E7,1000/4);
      }
      else if(val == 101){
        tone(8,NOTE_F7,1000/4);
      }
      else if(val == 102){
        tone(8,NOTE_FS7,1000/4);
      }
      else if(val == 103){
        tone(8,NOTE_G7,1000/4);
      }
      else if(val == 104){
        tone(8,NOTE_GS7,1000/4);
      }
      else if(val == 105){
        tone(8,NOTE_A7,1000/4);
      }
      else if(val == 106){
        tone(8,NOTE_AS7,1000/4);
      }
      else if(val == 107){
        tone(8,NOTE_B7,1000/4);
      }
      delay(5);
      digitalWrite(13,0);
    }
  }
