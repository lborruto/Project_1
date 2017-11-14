
int tabPair[5]={2,4,6,8,10};
int tabImpair[5]={1,3,5,7,9};

  
void setup() {
   //initialisation des variables

int j;
int h;
  //initialisation des modes
  for (j=0; j<10; j++)
  {
  pinMode(tabPair[j], OUTPUT);
  pinMode(tabImpair[j], OUTPUT);
  }

  //mise à 0V de chaque pin
  for (h=0; h<10; h++)
  {
  digitalWrite(tabPair[h], LOW);
  digitalWrite(tabImpair[h], LOW);
  }
 
}

void loop()
{
  // put your main code here, to run repeatedly:
  int i=0; 
  int k=0;
  int l=0;
  int m=0; 
  while (1)
 { 
  for (i=0; i<10; i++)
  {
    digitalWrite (tabPair[i], HIGH);
  }
  delay(250);
  for (k=0; k<10; k++)
  {
    digitalWrite (tabPair[k], LOW);
  }
  delay(500);
  for (l=0; l<10; l++)
  {
    digitalWrite (tabImpair[l], HIGH);
  }
  delay(250);
  for (m=0; m<10; m++)
  {
    digitalWrite (tabImpair[m], LOW);
  }
  delay(2000);
 }
 
}

