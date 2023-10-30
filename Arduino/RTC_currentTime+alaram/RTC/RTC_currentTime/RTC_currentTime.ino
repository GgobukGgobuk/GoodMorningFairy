#include <ThreeWire.h>  
#include <RtcDS1302.h>
//#include <LiquidCrystal.h> 
#include <LiquidCrystal_I2C.h> 
#define debounceTime 75 // <<- Set debounce Time (unit ms)

#define NOTE_B0 31

const int buttonPin_2 = 2;  // Alarm on button
const int buttonPin_3 = 3;  // Alarm off button
const int green_led = 7;    // if Alarm on, green led on else green led off
int piezoPin = 8; //buzzer Pin
const int ledPin = 13; // 13pin LED

int interruptPin1 = 3; // 2 or 3
volatile int state = LOW;

char *dayArray[] = {
  "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
};

ThreeWire myWire(10,11,9); // IO, SCLK, CE
RtcDS1302<ThreeWire> Rtc(myWire);
//LiquidCrystal lcd(8, 9, 10, 11, 12, 13); //RS, EN, data(4,5,6,7)
LiquidCrystal_I2C lcd(0x27, 16,2); //RS, EN, data(4,5,6,7)

int tempo = 200;
//int notes[12] = {NOTE_B4, NOTE_B4, NOTE_D5, NOTE_D5 ,NOTE_F5,NOTE_F5, NOTE_F5, NOTE_F5 , NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5 };

int buttonState_2 = 0;
int buttonState_3 = 0;


void setup () 
{
  pinMode(ledPin, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(buttonPin_2, INPUT);
  pinMode(buttonPin_3, INPUT);

  delay(1000);


  Serial.begin(9600);
  Serial.print("Compiled: ");
  Serial.print(__DATE__);
  Serial.print("\t");
  Serial.println(__TIME__);

    //lcd.begin(16, 2);
    //lcd.clear();
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("Hellow, world");
    lcd.setCursor(3,1);
    lcd.print("How are you?");

    pinMode(interruptPin1, INPUT_PULLUP); // pulled down using a 10K resistor
    //attachInterrupt(digitalPinToInterrupt(interruptPin1), buttonPushed, FALLING);
    
    Rtc.Begin();

    RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);

    if (!Rtc.IsDateTimeValid()) 
    {
        // Common Causes:
        //    1) first time you ran and the device wasn't running yet
        //    2) the battery on the device is low or even missing

        Serial.println("RTC lost confidence in the DateTime!");
        Rtc.SetDateTime(compiled);
    }
    if (Rtc.GetIsWriteProtected())
    {
        Serial.println("RTC was write protected, enabling writing now");
        Rtc.SetIsWriteProtected(false);
    }
    if (!Rtc.GetIsRunning())
    {
        Serial.println("RTC was not actively running, starting now");
        Rtc.SetIsRunning(true);
    }

    RtcDateTime now = Rtc.GetDateTime();

    if (now < compiled) 
    {
        Serial.println("RTC is older than compile time!  (Updating DateTime)");
        Rtc.SetDateTime(compiled);
    }
    else if (now > compiled) 
    {
        Serial.println("RTC is newer than compile time. (this is expected)");
    }
    else if (now == compiled) 
    {
        Serial.println("RTC is the same as compile time! (not expected but all is fine)");
    }
}
char timestring[16];
int * addrT = 0;

char test[16] = "14:39:30";
void loop () 
{
  buttonState_2 = digitalRead(buttonPin_2);
  //sprintf(timestring, "%02u:%02u:%02u", dt.Hour(), dt.Minute(), dt.Second());
  sprintf(test, "%02u:%02u:%02u", 14, 52, 30);
  //sprintf(timestring, "%02u", 1);
  //sprintf(test, "%02u", 1);
  //if(buttonState_2 == HIGH)
  Serial.println(timestring);
  Serial.print("test is ");
  Serial.println(test);
  //if(buttonState_2 == HIGH)
  //if(1)
  if(buttonState_2 == HIGH)
  {
    Serial.println("Alaram on");
    alarm_on();
  }

    RtcDateTime now = Rtc.GetDateTime();
    printDateTime(now);

    if (!now.IsValid())
    {
        // Common Causes:
        //    1) the battery on the device is low or even missing and the power line was disconnected
        //Serial.println("RTC lost confidence in the DateTime!?!");
    }

    delay(1000); // one seconds
}

void printDateTime(const RtcDateTime& dt)
{
    char daystring[16];
    
    String flag = "AM";
    String stateStr = "24-hr system";
    short DOW = dt.DayOfWeek();
    
    sprintf(daystring, "%4u-%02u-%02u %s", dt.Year(), dt.Month(), dt.Day(), dayArray[DOW]);

    short Hour = dt.Hour();

    sprintf(timestring, "    %02u:%02u:%02u", dt.Hour(), dt.Minute(), dt.Second());
  /*
    if ( state ) { // 24-hr system
      //lcd.clear();
      
    } else {  // 12-hr system with AM/PM designation
       if (dt.Hour() > 12) {
         Hour = dt.Hour() - 12;
         flag = "PM";
       }     
       stateStr = "12-hr system with AM/PM designation";
       sprintf(timestring, "  %2d:%02u:%02u <%s>", Hour, dt.Minute(), dt.Second(), flag.c_str());
    }
    */
    Serial.print("State ");
    Serial.print(state);
    Serial.print(": "); 
    Serial.println(timestring);
    lcd.setCursor(0, 0);
    lcd.print(timestring);
    lcd.setCursor(0, 1);
    lcd.print(daystring);
}

void buttonPushed() {
    static unsigned long lastTime = 0;
    unsigned long Now = millis();
    if((Now - lastTime) > debounceTime)
    {
        state=!state;
        Serial.print("Button pressed: state changed to ");
        Serial.println(state);
        RtcDateTime now = Rtc.GetDateTime();
        printDateTime(now);
    }
    lastTime = Now;
}

void alarm_on()
{
  digitalWrite(green_led, HIGH);
  digitalWrite(ledPin, HIGH);
  for(int i = 0; i< 12; i++)
  {
    buttonState_3 = digitalRead(buttonPin_3);
    if(buttonState_3 == LOW) 
    {
      Serial.println("Alaram off");
      digitalWrite(green_led, LOW);
      digitalWrite(ledPin, LOW);
      //tone(piezoPin, notes[i], tempo);
      tone(piezoPin, NOTE_B0, tempo);
      delay(500);
    }
  } 
}

