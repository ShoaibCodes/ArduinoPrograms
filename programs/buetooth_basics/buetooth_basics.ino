char data = 0;
int ma1=4;
int ma2=5;
int mb1=6;
int mb2=7;            
void setup() 
{
  Serial.begin(9600);        
  pinMode(13, OUTPUT);
  pinMode(ma1, OUTPUT);
  pinMode(ma2, OUTPUT);
  pinMode(mb1, OUTPUT);
  pinMode(mb2, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0) 
  {
    data = Serial.read();  
    Serial.print(data);    
    Serial.print("\n");       
    if(data == '2')           
     { 
      digitalWrite(mb1, LOW); 
      digitalWrite(mb2,HIGH); 
      digitalWrite(ma1, HIGH); 
      digitalWrite(ma2,LOW);
     }
    else if(data == '3')      
      {
      digitalWrite(mb1, HIGH); 
      digitalWrite(mb2,LOW); 
      digitalWrite(ma1, LOW); 
      digitalWrite(ma2,HIGH);   
      }
      else if(data=='1'){
        digitalWrite(mb1, HIGH); 
      digitalWrite(mb2,LOW); 
      digitalWrite(ma1, HIGH); 
      digitalWrite(ma2,LOW);
        }
        
      else if(data=='0'){
        digitalWrite(mb1, LOW); 
      digitalWrite(mb2,HIGH); 
      digitalWrite(ma1, LOW); 
      digitalWrite(ma2,HIGH);
        
        }
  }                            
 
}
