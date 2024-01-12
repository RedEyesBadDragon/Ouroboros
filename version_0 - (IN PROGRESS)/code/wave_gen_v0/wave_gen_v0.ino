//LIBRARY INIT - fetch base instruction "libraries" from internet

#define CARRIER_WAVE 5

//SETUP CODE-RUNS ONCE////////////////////////////////////////////////////////
void setup() {
  // put your setup code here, to run once:
  pinMode(CARRIER_WAVE, OUTPUT);  
  digitalWrite(CARRIER_WAVE, LOW);

}
/////////////////////////////////////////////////////////////////////////////


//MAIN LOOP-RUNS INDEFINETLEY///////////////////////////////////////////////
void loop() {
  // put your main code here, to run repeatedly:
  
  if(1==1) {
    squares();

  }
}
///////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------//
void squares() {

  int t = 1000;    //Delay time between on and off square waves (ms)
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




/*
void sines() {

  return();
}

void triangles() {

  return();
}

void resonantPulse() {

  return();
}
*/