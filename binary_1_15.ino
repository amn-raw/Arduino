int pins[4];
int t=1000;
int i,j,k;
byte on=HIGH;
byte off=LOW;
void setup() {
  for(i=0;i<4;i++){
  pins[i]=i+2;
}
for(i=0;i<4;i++){
  pinMode(pins[i],OUTPUT);
}
}

void loop() {
    for(i=0;i<16;i++){
    j=i;
    k=3;
    while(k!=-1){
      digitalWrite(pins[k],(j%2)?on:off);
      j/=2;
      k--;
    }
    delay(t);}
  
}
