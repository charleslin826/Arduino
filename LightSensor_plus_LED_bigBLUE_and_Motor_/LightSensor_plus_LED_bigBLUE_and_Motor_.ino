const int Motor_pin = 9;
const int LED_pin = 10;
const int Light_sensor_pin = 14;//pin腳的A0 = 14

void setup() {
  Serial.begin(9600);
  pinMode(Light_sensor_pin,INPUT);
  pinMode(LED_pin,OUTPUT);
  analogWrite(Motor_pin,0);
  digitalWrite(LED_pin,LOW);
  
  
}

void loop() {
  int sensorValue,MotorValue;

  sensorValue = analogRead(Light_sensor_pin);
  Serial.print("sensorValue = ");
  Serial.println(sensorValue);
  if(sensorValue > 700){
    digitalWrite(LED_pin,HIGH);    
  };
  
    MotorValue =sensorValue/7;
    analogWrite(Motor_pin,MotorValue);  
    Serial.print("MotorValue = ");
    Serial.println(MotorValue);
    delay(1000);
    digitalWrite(LED_pin,LOW);
}
