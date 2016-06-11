/**
* Blink
* Turns on an LED on for one second,
* then off for one second, repeatedly.
*/
#include "Arduino.h"
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
  int duration = 100;  // 500 miliseconds

  void setup()
  {
    // initialize LED digital pin as an output.
    pinMode(LED_BUILTIN, OUTPUT);
  }

  void loop()
  {
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED_BUILTIN, HIGH);
    // wait for a second
    delay(50);
    // turn the LED off by making the voltage LOW
    digitalWrite(LED_BUILTIN, LOW);
    // wait for a second
    delay(100);
    for (int thisNote = 0; thisNote < 4; thisNote++) {
      // 在 pin8 上輸出聲音，每個音階響 0.5 秒
      tone(A0, melody[thisNote], duration);
      delay(10000);
      tone(11, melody[thisNote], duration);
      // 間隔一段時間後再播放下一個音階
      delay(10000);
    }

  }
