const int ledInfrarouge = 8; //Numéro de la broche qui contrôle la LED infrarouge
int temps = 0; //Initialisation du temps

void setup() {
  // put your setup code here, to run once:
  digitalWrite(ledInfrarouge, HIGH);//Met la LED infrarouge à l'état haut (allumage de la LED)
}

void loop() {
  // put your main code here, to run repeatedly:
  analogRead(A0);
}
