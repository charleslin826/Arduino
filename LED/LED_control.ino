
int ledPins[]={2,3,4,5,6,7,8,9};//設定Array

void setup() {
  for(int i=0;i<8;i++){
    pinMode(ledPins[i],OUTPUT);  //設定從第1個腳位到第8個皆輸出電源(程式語言是第0~7th)
  }
 }

void loop() {
  oneAfterAnotherLoop();
  igniteOddEven();
  oneOnatTime();
  oneOnatTime();
  oneOnatTime();
  }

void oneAfterAnotherLoop(){  //宣告它是一個void
  for(int i=0;i<8 ;i++){
    digitalWrite(ledPins[i],HIGH);
    delay(500);
  }
}

void igniteOddEven(){
     for(int i=0;i<8 ;i++){
      if(i%2==0){
    digitalWrite(ledPins[i],LOW);
      }   
  }
  delay(500);
    for(int i=0;i<8 ;i++){
      if(i%2==0){
    digitalWrite(ledPins[i],HIGH);
      }   
  }
  delay(500);
    for(int i=0;i<8 ;i++){
      if(i%2==0){
    digitalWrite(ledPins[i],LOW);
      }   
  }
  delay(500);
    for(int i=0;i<8 ;i++){
      if(i%2==1){
    digitalWrite(ledPins[i],LOW);
      }   
  }
  delay(500);
  for(int i=0;i<8 ;i++){
      if(i%2==1){
    digitalWrite(ledPins[i],HIGH);
      }   
  }
  delay(500);
  for(int i=0;i<8 ;i++){
      if(i%2==1){
    digitalWrite(ledPins[i],LOW);
      }   
  }
  delay(500);
}

void oneOnatTime(){
  int offLED;
  for(int i=0 ; i<8; i++){
    offLED = i-1;
    if(i==0){
      offLED = 7;
  }
  digitalWrite(ledPins[i],HIGH);
  delay(150);
  digitalWrite(ledPins[offLED],LOW);
  delay(150);
  }
  digitalWrite(ledPins[7],LOW);
}

