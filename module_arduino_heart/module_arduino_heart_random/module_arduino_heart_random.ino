
int pinLed[10]={1,2,3,4,5,6,7,8,9,10};
void setup() {
  // put your setup code here, to run once:
   //initialisation des variables

int j;
int h;
  //initialisation des modes
  for (j=0; j<10; j++)
  {
  pinMode(pinLed[j], OUTPUT);
  }

  //mise à 0V de chaque pin
  for (h=0; h<10; h++)
  {
  digitalWrite(pinLed[h], LOW);
  }
 
}

void loop()
{
  // put your main code here, to run repeatedly:
  int i=0;
  int j=0;
  
  
  
  
  while (j<10)
 { 
  i=random(0,9);
 
    digitalWrite (pinLed[i], HIGH);
  
  delay(250);
  
  
    digitalWrite (pinLed[i], LOW);
  
  delay(500);

  
    digitalWrite (pinLed[i], HIGH);
  
  delay(250);
 
  
    digitalWrite (pinLed[i], LOW);
 
  delay(2000);
  j++;
 }
 
}
