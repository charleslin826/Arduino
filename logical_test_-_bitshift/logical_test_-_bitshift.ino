void setup() {
  byte a,b,c,d;
  
  Serial.begin(9600);
/*  a=1;
  b=a << 4;
  c=b>>4;
  Serial.println(a);
  Serial.println(b,BIN);
  Serial.println(c);

  a=0x80;
  b=a>>4;
  Serial.println(a,DEC);
  Serial.println(a,HEX);
  Serial.println(a,BIN);
  Serial.println(b,DEC);
  Serial.println(b,BIN);

  a=B11111111;//設為FF 可以清除資料
  b=B11111100;//FC
  c=a&b; //用and來過濾 
  Serial.println(a,DEC);
  Serial.println(a,HEX);
  Serial.println(a,BIN);
  Serial.println(b,DEC);
  Serial.println(b,BIN);
  Serial.println(c,DEC);
  Serial.println(c,BIN);*/

  a=B10000011;
  b=B01110000;
  c= a|b; //a or b
  Serial.println(a,BIN);
  Serial.println(b,BIN);
  Serial.println(c,BIN);

  a=B10001111;
  b=B11111100;
  c=B00110000;
  d=(a&b)|c;
  Serial.print(" a = ");
  Serial.println(a,BIN);
   Serial.print(" b = ");
  Serial.println(b,BIN);
   Serial.print(" c = ");
  Serial.println(c,BIN);
   Serial.print(" d = ");
  Serial.println(d,BIN);

  int x1,x2,y;
  x1=0x7fff;
  Serial.print(" x1= ");
  Serial.print(x1,DEC); // 32767

  x1=0x8fff;
  Serial.print(" x1= ");
  Serial.print(x1,DEC);  //-28673

   x1=-1;
  Serial.print(" x1= ");
  Serial.print(x1,HEX);  //FFFFFFFF

   x1=-10;
   x2=-32766;
   y=x1+x2;
  Serial.print(" x1= ");
  Serial.println(x1,DEC); 
  Serial.print(" x2= ");
  Serial.println(x2,DEC);  
  Serial.print(" y= ");
  Serial.println(y,HEX);
  Serial.println(y,DEC); 
}

void loop() {
  // put your main code here, to run repeatedly:

}
