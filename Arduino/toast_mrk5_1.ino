// C++ code
//
const int LED = 2;
const int sensor_pin = 7;
int sensor_state = -1;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(sensor_pin, INPUT);
}

void loop()
{
 	sensor_state = digitalRead(sensor_pin);
  	digitalWrite(LED, sensor_state);
  

}