void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(millis());
 int current_time;
 int past_time;
 int interval_time;

 current_time = millis();
 
if (current_time - past_time >= interval_time) 
{
    /* Event code */
    Serial.print("Blink. ");
    
     digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);
}
}