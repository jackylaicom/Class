byte analogInput=0;
byte LEDOutput=3;
byte val=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDOutput,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(analogInput);
  Serial.println(val);
  analogWrite(LEDOutput,val);
  delay(10);
}
