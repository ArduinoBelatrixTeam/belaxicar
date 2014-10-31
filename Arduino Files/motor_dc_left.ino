/*
* Ejemplo para extender el control del motor por medio
* del integrado L293B
*/

const int inleftForward = 2;
const int inleftBackward = 3;
//Salidas al integrado L293B
const int outMotorLeftF = 13;
const int outMotorLeftB = 12;
const int outMotorLeftEnable = 11;

void setup() {
  // initialize outputs
  pinMode(outMotorLeftF, OUTPUT);
  pinMode(outMotorLeftB, OUTPUT); 
  pinMode(outMotorLeftEnable, OUTPUT); 
  // initialize inputs
  pinMode(inleftForward, INPUT);
  pinMode(inleftBackward, INPUT);    
  
  //set initial state
  digitalWrite(outMotorLeftF,LOW);
  digitalWrite(outMotorLeftB,LOW);
  digitalWrite(outMotorLeftEnable,HIGH); 
}

void loop(){
 
  if(digitalRead(inleftForward)){
   digitalWrite(outMotorLeftF,HIGH);
  }else{
   digitalWrite(outMotorLeftF,LOW);
  }
  
   if(digitalRead(inleftBackward)){
   digitalWrite(outMotorLeftB,HIGH);
  }else{
    digitalWrite(outMotorLeftB,LOW);
  }
}


