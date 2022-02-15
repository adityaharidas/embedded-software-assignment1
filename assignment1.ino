const int P_BUTTON1 = 22;
const int P_BUTTON2 = 23; 
const int LED_red = 15; 
const int LED_green = 21;
int P_BUTTONstate1 = 0;
int P_BUTTONstate2 = 0;
int a= 800, b= 100, c= 13, d= 4500;
   // a, b, c, d are parameters of the waveform for a given time in microseconds
void setup()
{
  pinMode(P_BUTTON1, INPUT);
  pinMode(P_BUTTON2, INPUT);
  pinMode(LED_red, OUTPUT);
  pinMode(LED_green, OUTPUT);
}
   //red light is for signal A and green light is for signal B
void loop()
{ 
  P_BUTTONstate1 = digitalRead(P_BUTTON1);
  P_BUTTONstate2 = digitalRead(P_BUTTON2);
  if(P_BUTTONstate1 == 0) 
   //for signal B 
   { digitalWrite(LED_green, HIGH);
     delayMicroseconds(50);
     digitalWrite(LED_green, LOW);
  
    if(P_BUTTONstate2 == 0){
   //for signal A
    int a=800, i=1;
    while(i<=c)
    {
    digitalWrite(LED_red, HIGH);
    delayMicroseconds(a);
    digitalWrite(LED_red, LOW);
    delayMicroseconds(b);
    a = a+50;
     i++;
    } 
    delayMicroseconds(d);
    }
  
  else{
   //for signal A
    int a=800, i=1;
    while(i<=c-3)
    {
      
     digitalWrite(LED_red, HIGH);
     delayMicroseconds(a);
     digitalWrite(LED_red,LOW);
     delayMicroseconds(b);
     a = a+50;
     i++;
    }
    delayMicroseconds(d);
    }
  }
  
}






 

  
