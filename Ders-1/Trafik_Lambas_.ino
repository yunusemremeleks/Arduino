int kirmizi=5;
int sari=4;
int yesil=3;
void setup() {
pinMode(kirmizi,OUTPUT);
pinMode(sari,OUTPUT);
pinMode(yesil,OUTPUT);
}
void loop() {
digitalWrite(kirmizi,HIGH);
delay(4000);
digitalWrite(sari,HIGH);
delay(1000);
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(yesil,HIGH);
delay(4000);
digitalWrite(yesil,LOW);
}
