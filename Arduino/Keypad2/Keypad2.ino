#include <Keypad.h> // keypad 라이브러리 포함


const byte ROWS = 4; // 행의 갯수
const byte COLS = 4; // 열의 갯수


// 배열로 각 버튼을 숫자나 문자로 대응
char myKeys[ROWS][COLS] = {
 {'0','1','2','3'},
 {'4','5','6','7'},
 {'8','9','A','B'},
 {'C','D','E','F'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; // 행(Raw)가 연결된 아두이노 핀 번호
byte colPins[COLS] = {8, 9, 10, 11}; // 열(column)가 연결된 아두이노 핀 번호


// keypad 객체 인스턴스화 Keypad(makeKeymap(userKeymap), row[], col[], rows, cols)
Keypad customKeypad = Keypad( makeKeymap(myKeys), rowPins, colPins, ROWS, COLS);


void setup()
{
 Serial.begin(9600); // 통신속도 9600으로 시리얼 통신 시작
}
 void loop()
{
 // getKey()는 키패드에서 입력된 값이 있을경우 반환합니다.
 char customKey = customKeypad.getKey();
  if (customKey)  // 입력된 값이 있으면, 출력
 {
   Serial.println(customKey);
 }
}
