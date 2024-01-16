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
Start Date: 01/11/2024
End Date: TBD

-
This program utilizes some open source code listed below:
-
Arduino Docs: FunctionGenerator.ino

*/

//LIBRARY INIT - fetch base instruction "libraries" from internet
//#include "Waveforms.h"
#define CARRIER_WAVE 5

//SETUP CODE-RUNS ONCE////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);   //begin the serial w/ baud rate

  pinMode(CARRIER_WAVE, OUTPUT);  
  digitalWrite(CARRIER_WAVE, LOW);

}
/////////////////////////////////////////////////////////////////////////////


//MAIN LOOP-RUNS INDEFINETLEY///////////////////////////////////////////////
void loop() {
  
  Serial.println("Wave Form Begin");
  
  //Squares Basic
  Serial.println("YOU ARE GENERATING SQUARES");
  squares();

  //Sines Basic 
  Serial.println("YOU ARE GENERATING SINES");
  //sines();
  
  //Triangle Basic
  Serial.println("YOU ARE GENERATING TRIANGLES");
  //triangle();

  //Saw Basic
  Serial.println("YOU ARE GENERATING SAWS");
  //saw();

  //Variable Single Pulse
  Serial.println("YOU ARE GENERATING VSP");
  //vsp();

  //Variable Resonant Pulse 
  Serial.println("YOU ARE GENERATING VRP");
  //vrp();

}
///////////////////////////////////////////////////////////////////////////

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

  int t = 500;    //Delay time between on and off square waves (ms)
  //int t0 = 0;   //Delay time after ON signal for square wave (ms)
  //int t1 = 0;   //Delay time after OFF signal for square wave (ms)  

  while(1) { 
    digitalWrite(CARRIER_WAVE, HIGH);
    delay(t);
    digitalWrite(CARRIER_WAVE, LOW);
    delay(t);
  }

}
//-----------------------------------------------------------------------//

//-----------------------------------------------------------------------//
//FUNCTION: sines
//INPUT: 
//OUTPUT:
//
//Details:
//-----------------------------------------------------------------------//
void sines() {

  
}
//-----------------------------------------------------------------------//

//-----------------------------------------------------------------------//
//FUNCTION: triangles
//INPUT:
//OUTPUT:
//
//Details:
//-----------------------------------------------------------------------//
void triangles() {

}
//-----------------------------------------------------------------------//

//-----------------------------------------------------------------------//
//FUNCTION: vsp
//INPUT:
//OUTPUT:
//
//Details:
//-----------------------------------------------------------------------//
void vsp() {

}
//-----------------------------------------------------------------------//

//-----------------------------------------------------------------------//
//FUNCTION: vrp
//INPUT:
//OUTPUT:
//
//Details:
//-----------------------------------------------------------------------//
void vrp() {

 
}
//-----------------------------------------------------------------------//