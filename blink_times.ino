int NumBlink;
String s="Enter the Number of times you want to LED Blink or Buzzer to sound : ";
int i;
int t=500;
int outPin=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(outPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
    for(i=0;i<2;i++){
      digitalWrite(outPin,HIGH);
      delay(t);
      digitalWrite(outPin,LOW);
      delay(t);
    }
    for(i=0;i<3;i++){
      digitalWrite(outPin,HIGH);
      delay(t/4);
      digitalWrite(outPin,LOW);
      delay(t/4);
    }
    delay((1.5)*t);
}
