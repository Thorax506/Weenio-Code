

// the setup function runs once when you press reset or power the board
int BOB;
  int one = 1;
  int two = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
int noop(int a, int b) {
  int f;
 f=a+b;
  return f;
}

void loop(){
  
  BOB = noop(one, two);

Serial.println(BOB);
delay(1000);

one = one + two;

}