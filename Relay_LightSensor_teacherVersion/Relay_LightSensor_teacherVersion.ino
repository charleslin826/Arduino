int relayPin=3;
//const int Light_sensor_pin = 14;//pin腳的A0 = 14
int val;
void setup() {
  //繼電器
  pinMode(relayPin,OUTPUT);
  //光敏電阻
  Serial.begin(9600);
  //pinMode(Light_sensor_pin,INPUT);
}

void loop() {
  //int sensorValue;
  //sensorValue = analogRead(Light_sensor_pin);
  //Serial.print("sensorValue = ");
  //Serial.println(sensorValue);
//  if(sensorValue < 700){
//    digitalWrite(relayPin,HIGH); 
//    delay(3000);
//  };
//    digitalWrite(relayPin,LOW);
//    delay(500);
    val = analogRead(A0);
    float newValue = (0.5*val)+(0.5*analogRead(A0));//兩次相隔一行程式碼的時間差 
    Serial.println(0.5*val);
    Serial.println(0.5*analogRead(A0));
    if(newValue>700){
      digitalWrite(relayPin,HIGH);
    }else if (newValue<600){
      digitalWrite(relayPin,LOW);
    }
    
} 


