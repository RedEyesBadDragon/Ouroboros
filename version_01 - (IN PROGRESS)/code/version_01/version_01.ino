/*
This program is an open source waveform generator for the
Arduinno platform of microcontrollers.
-
We are using it to drive a carrier wave for and Over-Unity
Electromagnetic Field transformer (i.e. an "infinite energy device").
&
Subsequently use a self sustained switching method to achieve
self powering.
-
All the information for how and why such devices are possible can 
be found at:
https://www.youtube.com/@RedEyesBadDragon
https://www.siriusdisclosure.com
-
As of now all these things are being developed LIVE 
via: https://www.twitch.tv/redeyesbaddragon

Written By: V Drakaina
Start Date: 01/22/2024
End Date: TBD

-
This program utilizes some open source code listed below:
-
*/

#define CARRIER_WAVE 5
#define FLYBACK_SWITCH 3

//INIT////////////////////////////////////////////////////////////////////////
void setup() {
  Serial.begin(9600);   //begin the serial w/ baud rate

  pinMode(CARRIER_WAVE, OUTPUT);  
  digitalWrite(CARRIER_WAVE, LOW);

  pinMode(FLYBACK_SWITCH, OUTPUT);
  digitalWrite(FLYBACK_SWITCH, HIGH);

}
//INIT END////////////////////////////////////////////////////////////////////////

//MAIN////////////////////////////////////////////////////////////////////////
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Wave Form Begin");
  
  //Squares Basic
  Serial.println("YOU ARE GENERATING SQUARES");
  squares();
}
//MAIN END///////////////////////////////////////////////////////////////////////

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

  //int t = 500;    //Delay time between on and off square waves (us)
  int t0 = 125;   //Delay time after ON signal for square wave (us)
  int t1 = 375;   //Delay time after OFF signal for square wave (us)  

  int sw = 0;     //to determine whether FLYBACK is on?

  while(1) { 

    //digitalWrite(FLYBACK_SWITCH, LOW);  //output goes to LOAD

    digitalWrite(CARRIER_WAVE, HIGH);
    delayMicroseconds(t0);
    digitalWrite(CARRIER_WAVE, LOW);
    
    /*if(sw == 1) { 
      digitalWrite(FLYBACK_SWITCH, HIGH);  //output FLYBACK
      sw == 0;
    }else{
      sw = sw + 1;
    }*/

    delayMicroseconds(t1);

  }

}
//-----------------------------------------------------------------------//