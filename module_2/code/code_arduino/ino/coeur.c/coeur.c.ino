#include "param.h"
#include "coeur.h"

int pinLed[10]={1,2,3,4,5,6,7,8,9,10};
void setup() 
{
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

switch(choix)

  case 1:
  void loop()
{
  int i=0; 
  int k=0;
  int l=0;
  int m=0; 
  while (1)
 { 
  for (i=0; i<10; i++)
  {
    digitalWrite (pinLed[i], HIGH);
  }
  delay(250);
  for (k=0; k<10; k++)
  {
    digitalWrite (pinLed[k], LOW);
  }
  delay(500);
  for (l=0; l<10; l++)
  {
    digitalWrite (pinLed[l], HIGH);
  }
  delay(250);
  for (m=0; m<10; m++)
  {
    digitalWrite (pinLed[m], LOW);
  }
  delay(2000);
 }
}
    break;
    
  case 2:
  while (1)
 { 
  for (i=0; i<10; i+2)
  {
    digitalWrite (pinLed[i], HIGH);
  }
  delay(100);
  for (k=0; k<10; k+2)
  {
    digitalWrite (pinLed[k], LOW);
  }
  delay(100);
  for (l=1; l<10; l+2)
  {
    digitalWrite (pinLed[l], HIGH);
  }
  delay(100);
  for (m=1; m<10; m+2)
  {
    digitalWrite (pinLed[m], LOW);
  }
  delay(500);
 } 
    break;
    
  case 3:
  void loop()
  { 
    int i=0; 
    int k=0;
    int l=0;
    int m=0; 
    while (1)
   { 
    i=random(0,9);
    {
      digitalWrite (pinLed[i], HIGH);
    delay(250);
      digitalWrite (pinLed[i], LOW);
    delay(500);
      digitalWrite (pinLed[i], HIGH);
    delay(250);
      digitalWrite (pinLed[i], LOW);
    delay(2000);
    }
   }
  }
    break; 
}
