const int sw_pin = 8;
const int x_pin = 0;
const int y_pin = 1;
const int x2_pin = 2;
const int y2_pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw_pin, INPUT);
  digitalWrite(sw_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("Switch:   ");
  //Serial.print(digitalRead(sw_pin));
  //Serial.print("\n");
  //Serial.print("X-axis:   ");

  Serial.print("X-axis:  ");
  Serial.print(analogRead(x_pin)/4); //502 //518
  Serial.print("   Y-axis:  ");
  Serial.print(analogRead(y_pin)/4); //502 //518
  Serial.print("       X2-axis:  ");
  Serial.print(analogRead(x2_pin)/4); //502 //518
  Serial.print("   Y2-axis:  ");
  Serial.println(analogRead(y2_pin)/4); //502 //518
  //Serial.print("\n");
  //Serial.print("Y-axis:  ");
  //Serial.print(analogRead(y_pin));//515 //502
  //Serial.print("\n\n");
  delay(50);
}
