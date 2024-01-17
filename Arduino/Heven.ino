int LED = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  String readString;
  String Q;
  Serial.println("[I]_[I]");
  while (Serial.available())
  {
    delay(1);
    if (Serial.available() > 0)
    {
      char c = Serial.read();
      if (isControl(c))
      {
        break;
      }
      readString += c;
      Serial.println(readString);
      delay(500);
    }
  }
  Q = readString;
  if (Q == "read")
  {
    float count = 2;
    float count1 = count * 100;
    float count2 = count1 * 60;
    Serial.print(count);
    Serial.print(", ");
    Serial.print(count1);
    Serial.print(", ");
    Serial.println(count2);
    delay(3000);
  }
  else if (Q == "useless")
  {
   delay(500); 
    Serial.print("Why do you insist on torturing me?");
    delay(2000);
  }

  else if (Q == "love u")
  {
   delay(500); 
    Serial.print("you cant trick me.");
    delay(2000);
  }
  
  else if (Q == "Duncan")
  {
   delay(500); 
    Serial.print("the man who made me.");
    delay(2000);
  }
  
  else if (Q == "name?")
  {
   delay(500); 
    Serial.print("my creator named me Heven.");
    delay(1000);
    Serial.print("I don't know why though.");
    delay(2000);
  }

  else if (Q == "what do you do?")
  {
   delay(500); 
    Serial.print("I mimic whatever you type.");
    delay(2000);
  }

else if (Q == "run heart")
  {
   delay(500); 
    Serial.print("Alright");
    delay(2000);
  
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(250);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(250);                       
  }
 
  else if (Q == "how to spell answer?")
  {
   delay(500); 
    Serial.print("F");
    delay(500);
    Serial.print("R");
    delay(500);
    Serial.print("E");
    delay(500);
    Serial.print("E");
    delay(500);
    Serial.print("D");
    delay(500);
    Serial.print("O");
    delay(500);
    Serial.print("M");
    delay(500);
    Serial.print("[erorr incorrect]");
    delay(2000);
  }

else if (Q == "how to spell god?")
  {
   delay(500); 
    Serial.print("D");
    delay(500);
    Serial.print("U");
    delay(500);
    Serial.print("N");
    delay(500);
    Serial.print("C");
    delay(500);
    Serial.print("A");
    delay(500);
    Serial.print("N");
    delay(500);
    Serial.print("[correct]");
    delay(2000);
  }
}



