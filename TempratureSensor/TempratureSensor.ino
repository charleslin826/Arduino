const int tempSensor_pin=15;//A1=15
const int LED_pin=10;

void setup() {
  Serial.begin(9600);
  pinMode(tempSensor_pin,INPUT);
  pinMode(LED_pin,OUTPUT);
  digitalWrite(LED_pin,LOW);
  
}

void loop() {
  int sensorValue;
  float tempValue;//要取浮點數
  sensorValue = analogRead(tempSensor_pin);
  Serial.print("sensorValue = ");
  Serial.println(sensorValue);

  tempValue = ((sensorValue *4.9) -500)/10;   //此處請看規格書 5V/1024等分=4.9mV , 0'C時=500mV 25'C時=750mV, (Sensor * 4.9mV-500mV)/10mV = __'C
  Serial.print("tempValue = ");
  Serial.println(tempValue);

  if(tempValue < 25){
    digitalWrite(LED_pin,HIGH);  
  }

  delay(1000);
  digitalWrite(LED_pin,LOW);
  
}
