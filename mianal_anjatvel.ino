int led = 6;
int value = 0;
int val = 250;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  while(value < 250){
  analogWrite(led, value);
  value += 10;
  delay(100);
  }
  if(value > 0){
      value = 0;
    }
    while(val >= 0){
  analogWrite(led, val);
  val -= 10;
  delay(100);
  }
    if(val <= 250){
      val = 250;
    }
}
