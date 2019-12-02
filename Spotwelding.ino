#define samplePin 2
#define ledPin 13

void setup() {
  pinMode(samplePin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if(digitalRead(samplePin)==LOW){
   digitalWrite(ledPin, HIGH);
   delay(30);
   digitalWrite(ledPin, LOW);}
   
   while(digitalRead(samplePin)==LOW){}
  }
