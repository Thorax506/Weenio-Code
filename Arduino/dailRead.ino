int my_analog_value= 0;
int analog_sensor = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(analog_sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
my_analog_value = analogRead(analog_sensor);
Serial.println(my_analog_value);
delay(200);
}
