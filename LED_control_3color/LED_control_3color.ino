
int ledPins[]={9,10,11};//設定Array 9=red 10=green 11=blue

void setup() {
  for(int i=0;i<3;i++){
    pinMode(ledPins[i],OUTPUT);  //設定從第1個腳位到第3個皆輸出電源(程式語言是第0~2th)  //預設LOW 所以三個都會亮=白色
  }
   digitalWrite(ledPins[0],HIGH);
  digitalWrite(ledPins[1],HIGH);
  digitalWrite(ledPins[2],HIGH);  // 初始化先全部關閉
  Serial.begin(9600);
 }

void loop() {
  byte value,bitValue; //byte自動轉成二進位的數字儲存
  for(int i=0;i<8;i++){
    value=i;
    bitValue = value && 0x1; //bit0  //HIGH 和LOW 可以用 1(0x1) 和 0(0x0) 取代
    digitalWrite(ledPins[0],bitValue);
    Serial.print("bitValue");
    Serial.println(bitValue); // 可以印出來在序列阜介面上
   bitValue = (value>>1) && 0x1; //bit1
    digitalWrite(ledPins[1],bitValue);
    Serial.print("bitValue");
    Serial.println(bitValue);
    bitValue = (value>>2) && 0x1; //bit2
    digitalWrite(ledPins[2],bitValue);
    Serial.print("bitValue");
    Serial.println(bitValue);
    delay(1000);
  }
//
//000 0
//001 1
//010 2
//011 3
//100 4
//101 5
//110 6
//111 7

//////////////////////  
//  
//  for(int i=0;i<3 ;i++){
//    digitalWrite(ledPins[i],LOW); //LOW才會亮 R+ G+ B+ 
//     delay(1000);
//      for(int j=0;j<3 ;j++){
//    digitalWrite(ledPins[j],LOW); 
//     delay(1000);
//     for(int k=0;k<3 ;k++){
//    digitalWrite(ledPins[k],LOW); 
//    delay(1000);
//  }
//  }
//  }
//  digitalWrite(ledPins[0],HIGH);
//  digitalWrite(ledPins[1],HIGH);
//  digitalWrite(ledPins[2],LOW);
//  delay(1000);///001 B  其實是110 下面皆相反
//  digitalWrite(ledPins[0],HIGH);
//  digitalWrite(ledPins[1],LOW);
//  digitalWrite(ledPins[2],HIGH);
//  delay(1000);//010 G
//    digitalWrite(ledPins[0],HIGH);
//  digitalWrite(ledPins[1],LOW);
//  digitalWrite(ledPins[2],LOW);
//  delay(1000);//011 BG
//    digitalWrite(ledPins[0],LOW);
//  digitalWrite(ledPins[1],HIGH);
//  digitalWrite(ledPins[2],HIGH);
//  delay(1000);//100 R
//    digitalWrite(ledPins[0],LOW);
//  digitalWrite(ledPins[1],HIGH);
//  digitalWrite(ledPins[2],LOW);
//  delay(1000);//101 RB
//    digitalWrite(ledPins[0],LOW);
//  digitalWrite(ledPins[1],LOW);
//  digitalWrite(ledPins[2],HIGH);
//  delay(1000);//110 RG
//    digitalWrite(ledPins[0],LOW);
//  digitalWrite(ledPins[1],LOW);
//  digitalWrite(ledPins[2],LOW);
//  delay(1000);//111 RGB
  }



