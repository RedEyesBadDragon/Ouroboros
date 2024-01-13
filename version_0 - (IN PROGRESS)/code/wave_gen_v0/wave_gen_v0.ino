//LIBRARY INIT - fetch base instruction "libraries" from internet

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
  // put your main code here, to run repeatedly:
  
  if(1==1) {
    Serial.print("hello world");
    squares();
    
  }
}
///////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------//
void squares() {

  int t = 50;    //Delay time between on and off square waves (ms)
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