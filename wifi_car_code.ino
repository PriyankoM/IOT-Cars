#define IN_11  2        
#define IN_12  3        
#define IN_13  4        
#define IN_14  7       
   
const int ledPin = 13;      
const int threshold = 1000;

char command;            

boolean lightFront = false;
boolean horn = false;

void setup() {  
   
    pinMode(ledPin, OUTPUT);
  
  
    
  
    pinMode(IN_11, OUTPUT);
    pinMode(IN_12, OUTPUT);
    pinMode(IN_13, OUTPUT);
    pinMode(IN_14, OUTPUT);
    
   

  Serial.begin(115200); 

  } 

void goAhead(){ 

      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
      digitalWrite(IN_13, HIGH);
      digitalWrite(IN_14, LOW);
      }

void goBack(){ 

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, HIGH);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
      }

void goRight(){ 

      digitalWrite(IN_11, HIGH);
      digitalWrite(IN_12, LOW);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, HIGH);
      }

void goLeft(){

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, HIGH);
      digitalWrite(IN_13, HIGH);
      digitalWrite(IN_14, LOW);
      }



void stopRobot(){  

      digitalWrite(IN_11, LOW);
      digitalWrite(IN_12, LOW);
      digitalWrite(IN_13, LOW);
      digitalWrite(IN_14, LOW);
      }
  
void loop(){
  if (Serial.available() > 0) 
  
   { 
    

 command = Serial.read();
 Serial.println(command);


 switch (command) {
  Serial.println(command);
case 'F':goAhead();break;
case 'B':goBack();break;
case 'L':goLeft();break;
case 'R':goRight();break;
case 'S':stopRobot();break;
}
}

}
