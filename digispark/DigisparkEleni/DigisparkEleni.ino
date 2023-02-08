#include "DigiKeyboard.h"

void printMessage();

void setup() {
  // Enable LED control
  pinMode(1, OUTPUT);
  // Is 3 seconds long enough for Windows to register a new keyboard?
  DigiKeyboard.delay(3000);
}


void loop() {
  // USB poll in case the 3s delay didn't poll
  DigiKeyboard.update();
  // Avoid ghost keys
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.update();

  // Blink LED five times to indicate start
  for (int i = 0; i < 5; ++i) {
    digitalWrite(1, HIGH);
    DigiKeyboard.delay(100);
    digitalWrite(1, LOW);
    DigiKeyboard.delay(100);
    DigiKeyboard.update();
  }

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);  // left Windows key + R
  DigiKeyboard.delay(200);
  DigiKeyboard.println(F("notepad"));
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  printMessage();

  // Turn on LED to indicate we're done
  digitalWrite(1, HIGH);

  while (1) {
    DigiKeyboard.delay(5000);
    DigiKeyboard.update();  // Maintain the USB connection (although DigiKeyboard.delay probably manages it)
  }
}

void printMessage() {
  DigiKeyboard.println(F("Welcome to your DigiSpark!"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("Windows driver: https://github.com/digistump/DigistumpArduino/releases"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("Once installed:"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Download arduino IDE from arduino.cc"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- File->preferences->additional board manager URLs"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Add http://digistump.com/package_digistump_index.json"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Tools->Boards->Board Manager"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Install Digistump AVR Boards"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Select the board in Arduino, either:"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Tools->board->DigiStump->DigiSpark (Default, 16.5MHz)"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - or via the drop-down board selection list that's displayed in the IDE"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Select the programmer"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Tools->programmer->micronucleus"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Write your code"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Start with File->Examples->DigisparkKeyboard->Keyboard"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Sketch->Upload. DigiSpark IS NOT PLUGGED IN YET."));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - When the console says 'Plug in device now...' you can plug it in"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - When the console says \"Micronucleus done. Thank you!\" you can unplug"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("Resources:"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- Online DuckyScript to DigiSpark (or Arduino) convertor - https://duckify.huhn.me/"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("DuckyScript payloads you can feed through the above convertor:"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- https://github.com/hak5/usbrubberducky-payloads"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- https://ducktoolkit.com/userscripts"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("DigiSpark/Arduino payloads (just open in Arduino and upload):"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- https://github.com/topics/badusb"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("- https://github.com/JodyWeijers/BadUSB-DigiSpark"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("Where to next?"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - Software Defined Radio - RTL-SDR"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("    - A $10 USB dongle can open your computer up to all the radio communication around us. Well, a large chunk of it anyway."));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("    - https://www.rtl-sdr.com/about-rtl-sdr/"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - ESP8266 is a basic 2.4GHz WiFi chip. Well-supported by tutorials & code examples online."));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("    - deauther.com is an example application"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("  - ESP32 is effectively version 2 of ESP8266, adding bluetooth & more powerful processor"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("    - The most popular InfoSec application is \"WiFi Marauder\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("      - https://github.com/justcallmekoko/ESP32Marauder"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("    - Some boards also have a built-in camera"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println(F("Have fun!!!"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
