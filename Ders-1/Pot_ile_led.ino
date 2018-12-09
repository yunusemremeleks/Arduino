int led=10;
int pot=A0;
int deger;
void setup() {
pinMode(led,OUTPUT);
pinMode(pot,INPUT);
}
void loop() {
deger=analogRead(pot);
deger=map(deger,0,1023,0,255);
analogWrite(led,deger);
delay(10);
}
