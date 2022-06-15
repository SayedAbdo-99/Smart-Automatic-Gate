

int Door=7;                
int vvv;                   

void setup ()                
{
  Serial.begin(9600);         
  pinMode(Door,OUTPUT);   
  digitalWrite(Door,LOW);  
}
void loop () {                 

vvv = Serial.read();        

if (vvv == '1')              
{
  digitalWrite(Door,HIGH);               
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
else if (vvv == '0') {digitalWrite(Door,LOW);} 
}
