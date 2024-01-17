// C++ code
//
const int LED = 10;
const int sensor_pin = 5;
int sensor_state = 1;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(sensor_pin, INPUT);
}

void loop()
{
 	sensor_state = digitalRead(sensor_pin);
  	Serial.print("this is a button:");
  	Serial.println(sensor_state);
  	digitalWrite(LED, sensor_state);
  

}