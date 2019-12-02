#define Switch 2 // 스위치와 연결
#define GateLED 13 // FET - Gate와 연결시킵니다.

void setup() {
  pinMode(Switch, INPUT_PULLUP);  //pinMode 선언
  pinMode(GateLED, OUTPUT);
}

void loop() {
  if(digitalRead(Switch)==LOW){   //스위치를 누름(LOW) 상태면,
   digitalWrite(GateLED, HIGH);   // 13번 핀쪽 LED가 켜지고 Gate 에 전원이 인가됩니다.
   delay(30);                     // 30ms 동안 유지
   digitalWrite(GateLED, LOW);}   // 30ms 후 꺼짐
   
   while(digitalRead(Switch)==LOW){}  // 스위치가 계속 눌린 상태면 루프가 돌아가지 않습니다.
  }
