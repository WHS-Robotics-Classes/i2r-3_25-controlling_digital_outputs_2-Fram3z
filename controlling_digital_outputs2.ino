int WHITE = 3;
int RED = 10;

void setup() {
    pinMode(3, OUTPUT);
    pinMode(10, OUTPUT);
    
    digitalWrite(RED, HIGH);
    delay(500);
    digitalWrite(RED, LOW);
    delay(500);
    digitalWrite(RED, HIGH);
    delay(500);
    digitalWrite(RED, LOW);
    delay(1000);
    
    int x = 1;
    for (int i = 0; i <= 2; i = i + x){
    digitalWrite(WHITE, HIGH);
    delay(250);
    digitalWrite(WHITE, LOW);
    delay(1000);
  }
  delay(2000);
}

void loop() {
    digitalWrite(RED, HIGH);
    digitalWrite(WHITE, HIGH);
    delay(500);
    digitalWrite(RED, LOW);
    digitalWrite(WHITE, LOW);
    delay(200);
}
