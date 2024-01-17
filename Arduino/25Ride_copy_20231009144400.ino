int var;
int led = 5;
void setup() {
pinMode(led,OUTPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
var = 0;
while (var < 1000) 
{
  var = var + 1;
  if (var == 500){
    digitalWrite(led,HIGH);
  }
}
digitalWrite(led,LOW);
}
