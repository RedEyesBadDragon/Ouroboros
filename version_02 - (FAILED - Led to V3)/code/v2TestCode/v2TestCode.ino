/*
This program is an open source waveform generator for the
Arduinno platform of microcontrollers.
-
We are using it to drive a carrier wave for and Over-Unity
Electromagnetic Field transformer (i.e. an "infinite energy device").
-
All the information for how and why such devices are possible can 
be found at:
https://www.youtube.com/@RedEyesBadDragon
https://www.siriusdisclosure.com
-
As of now all these things are being developed LIVE 
via: https://www.twitch.tv/redeyesbaddragon

Written By: V Drakaina
Start Date: 01/27/2024
End Date: TBD
*/


#define CARRIER_WAVE 9
#define LED 7

void setup() {
  Serial.begin(9600);   //begin the serial w/ baud rate

  pinMode(CARRIER_WAVE, OUTPUT);  
  digitalWrite(CARRIER_WAVE, LOW);

  //For ADAFRUIT FLORA 
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  
  Serial.println("Wave Form Begin");
  
  //Squares Basic
  Serial.println("YOU ARE GENERATING SQUARES");
  squares();
}

//-----------------------------------------------------------------------//
//FUNCTION: squares
//INPUTS: void
//OUTPUTS: void
//
//Details: This function outputs a variable duty cycle and frequency 
//square wave where the MAX frequency/voltage peak achievable is determined by the 
//Arduino's clock speed/operating voltage.  
//-----------------------------------------------------------------------//
void squares() {

  int t = 5;    //Delay time between on and off square waves (us)
  //int t0 = 0;   //Delay time after ON signal for square wave (us)
  //int t1 = 0;   //Delay time after OFF signal for square wave (us)  

  while(1) { 
    digitalWrite(CARRIER_WAVE, HIGH);
    delayMicroseconds(t);
    digitalWrite(CARRIER_WAVE, LOW);
    delayMicroseconds(t);
  }

}
//-----------------------------------------------------------------------//