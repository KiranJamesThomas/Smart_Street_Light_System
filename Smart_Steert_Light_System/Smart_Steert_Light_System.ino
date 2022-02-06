int led1 = 3;

int ldr = A5;

int ir1 = A1;

void setup() 
{
  Serial.begin (9600);
  
  pinMode (led1,OUTPUT); 
  
  pinMode (ldr,INPUT);
  
  pinMode (ir1,INPUT);

}
void loop() 
{
 Serial.println(analogRead(A5));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus==LOW)
     {
       
       digitalWrite(led1, HIGH);
       analogWrite(led1,255/5);
       
          
       if (analogRead(A1)<300)       // IR 1 CODE    
               {
                digitalWrite(led1,HIGH);
                analogWrite(led1,255);      
                delay(1000);// micro second
               } 
            else 
                {
                  digitalWrite(led1,HIGH);
                  analogWrite(led1,255/5);
                  
                }

     }
           
     else if(ldrStatus==HIGH)
       {
         
         digitalWrite(led1, LOW);
         
      }
   
}
