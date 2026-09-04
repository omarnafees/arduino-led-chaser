  int BlueLED=3;
  int RedLED=10;
  int GreenLED=6;

void setup() {

  pinMode (3,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (6,OUTPUT);
}

void loop() {
  digitalWrite (BlueLED,HIGH);
  digitalWrite (RedLED,LOW);
  digitalWrite (GreenLED,LOW);
  delay (500);
  digitalWrite (BlueLED,LOW);
  digitalWrite (RedLED,HIGH);
  digitalWrite (GreenLED,LOW);
  delay (500);
  digitalWrite (BlueLED,LOW);
  digitalWrite (RedLED,LOW);
  digitalWrite (GreenLED,HIGH);
  delay (500);
  digitalWrite (BlueLED,LOW);
  digitalWrite (RedLED,LOW);
  digitalWrite (GreenLED,LOW);
  delay (500);


}
