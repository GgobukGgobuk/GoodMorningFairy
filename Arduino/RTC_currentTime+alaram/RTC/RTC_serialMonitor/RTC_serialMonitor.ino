//https://blog.naver.com/PostView.nhn?blogId=boilmint7&logNo=221911079454

#include <DS1302.h>                             // DS1302 라이브러리 헥사 선언
#include <SoftwareSerial.h>
const int CLK = 5;                                   // Clock 을  5번핀 설정

const int DAT = 6;                                   // Data를  6번핀 설정

const int RST = 7;                                   // Reset을  7번핀 설정

DS1302 myrtc(RST, DAT, CLK);              // DS1302  객체 설정

void setup() 

{
    myrtc.halt(false);                                   // 동작 모드로 설정

    myrtc.writeProtect(false);                      // 시간 변경을 가능하게 설정


    Serial.begin(9600);                                // 시리얼 통신 설정

    Serial.println("DS1302RTC Test");        // 시리얼 모니터에 ("   ") 내용을 출력

    Serial.println("---------------");                  // 시리얼 모니터에 ("   ") 내용을 출력



    myrtc.setDOW(MONDAY);                    // 요일 설정

    myrtc.setTime(14, 30, 20);                    // 시간 설정 ( 시간 , 분 , 초 )

    myrtc.setDate(13, 4, 2020);                  // 날짜 설정 ( 일 , 월 , 년도 )

}


void loop() 

{

    Serial.print(myrtc.getDOWStr());           // 시리얼 모니터에 요일 출력

    Serial.print(" ");



    Serial.print(myrtc.getDateStr());             // 시리얼 모니터에 날짜 출력

    Serial.print(" -- ");



    Serial.println(myrtc.getTimeStr());           // 시리얼 모니터에 시간 출력



    delay(1000);                                            // 1초의 딜레이

}