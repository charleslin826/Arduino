const int Motor_pin = 9;
const int LED_pin = 10;

void setup() {
  Serial.begin(9600);
  analogWrite(Motor_pin,0);  //初始給電值為0
  analogWrite(LED_pin,0);     //初始給電值為0
}

void loop() {
  for(int i =10; i<260; i=i+10){
    Serial.print("i =");
    Serial.println(i);
    analogWrite(Motor_pin,i);
    analogWrite(LED_pin,i);
    delay(1000);
  }

}
