int led=10;
void setup() {
pinMode(led,OUTPUT);
}
void loop() {
analogWrite(led,5);
}
