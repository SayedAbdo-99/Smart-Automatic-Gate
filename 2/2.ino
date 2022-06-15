

int Door=2;                   
int value;                   
int gate=3;
void setup ()                
{
  Serial.begin(9600);         
  pinMode(Door,OUTPUT); 
   pinMode(gate,INPUT_PULLUP);     
  digitalWrite(Door,LOW);     
}
void loop () {                 

value = digitalRead(gate);        

if (value == LOW)              
{
  digitalWrite(Door,HIGH);     
  delay(800);
 Serial.write('1');               
  digitalWrite(Door,LOW);
  delay(200);     
   digitalWrite(Door,HIGH);     
  delay(800);  
  //Serial.write('1234567890');               
  digitalWrite(Door,LOW);
  delay(200); 
   digitalWrite(Door,HIGH);
   //Serial.write("1234567890");      
  delay(800);                
  digitalWrite(Door,LOW);
  delay(200); 
   digitalWrite(Door,HIGH);     
  delay(800);
 // Serial.println("1234567890?");                
  digitalWrite(Door,LOW);
  delay(200); 
   digitalWrite(Door,HIGH);     
  delay(800);                
  digitalWrite(Door,LOW);
  delay(200); 
   digitalWrite(Door,HIGH);     
  delay(800);                
  digitalWrite(Door,LOW);
  delay(200); 
   digitalWrite(Door,HIGH);     
  delay(800);                
  digitalWrite(Door,LOW);
  delay(200);   
  }   
else if (value == '0') {digitalWrite(Door,LOW);} 
}
