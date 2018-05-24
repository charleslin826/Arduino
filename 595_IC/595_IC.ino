const int DS_pin=2;
const int OUTPUT_pin=3;
const int STCP_pin=4;
const int SHCP_pin=5;

void setup() {
  Serial.begin(9600);
  pinMode(DS_pin,OUTPUT);
  pinMode(OUTPUT_pin,OUTPUT);
  pinMode(STCP_pin,OUTPUT);
  pinMode(SHCP_pin,OUTPUT);

  digitalWrite(SHCP_pin,LOW);  //初始值是0
  digitalWrite(STCP_pin,LOW);  //初始值是0
  digitalWrite(OUTPUT_pin,HIGH); //OUTPUT//初始值是HIGH =關閉的狀態 =>改為LOW才會亮燈
  
}
///////////////////////////////////////////////
void loop() {
  byte value;
  int delayTime;

  delayTime=1000;
  
  value=B10101010; //設定奇數亮  
  ShiftLEDValue(value);//啟動設定值
    delay(delayTime);
  digitalWrite(OUTPUT_pin,HIGH); //關閉

  
  value=B01010101; //設定偶數亮  
  ShiftLEDValue(value);//啟動設定值
    delay(delayTime);
  digitalWrite(OUTPUT_pin,HIGH); //關閉


  value=B00000001;  //設定亮第7(8)顆
  ShiftLEDValue(value);//啟動設定值
   delay(delayTime);
  digitalWrite(OUTPUT_pin,HIGH);//關閉


    value=B10000000; //設定亮第0(1)顆
  ShiftLEDValue(value);//啟動設定值
  delay(delayTime);
   digitalWrite(OUTPUT_pin,HIGH);//關閉
   
}
///////////////////////////////////////////////////////
void ShiftLEDValue(byte value){
  byte shiftValue;

  for(int i=0; i<8;i++){ //LOOP裡面是做數位運算

    shiftValue = (value >> i) & 0x1; ///0x1是16進位的1的意思  (詳細看照片)
    Serial.print("shiftValue =");
    Serial.println(shiftValue);
    digitalWrite(DS_pin , shiftValue);
    //delay(1);
    digitalWrite(SHCP_pin,HIGH); ////一次shift一個bit(arduino一次只能接受1bit) 共作八次  {這裡是給電 1}
    //delay(1);
    digitalWrite(SHCP_pin,LOW);  ////一次shift一個bit(arduino一次只能接受1bit) 共作八次  {這裡是斷電 0}
    //delay(1);
  }
    digitalWrite(STCP_pin,HIGH); //將shift的值放進register   {這裡是給電 1}
   // delay(5);
    digitalWrite(STCP_pin,LOW);  //將shift的值放進register   {這裡是斷電 0}
   // delay(5);
    
   digitalWrite(OUTPUT_pin,LOW);//輸出
}

