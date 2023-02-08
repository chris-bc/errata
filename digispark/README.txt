Welcome to your DigiSpark!

Windows driver: https://github.com/digistump/DigistumpArduino/releases

Once installed:
- Download arduino IDE from arduino.cc
- File->preferences->additional board manager URLs
  - Add http://digistump.com/package_digistump_index.json
- Tools->Boards->Board Manager
  - Install Digistump AVR Boards
- Select the board in Arduino, either:
  - Tools->board->DigiStump->DigiSpark (Default, 16.5MHz)
  - or via the drop-down board selection list that's displayed in the IDE
- Select the programmer
  - Tools->programmer->micronucleus
- Write your code
  - Start with File->Examples->DigisparkKeyboard->Keyboard
- Sketch->Upload. DigiSpark IS NOT PLUGGED IN YET.
  - When the console says 'Plug in device now...' you can plug it in
  - When the console says "Micronucleus done. Thank you!" you can unplug

Resources:
- Online DuckyScript to DigiSpark (or Arduino) convertor - https://duckify.huhn.me/

DuckyScript payloads you can feed through the above convertor:
- https://github.com/hak5/usbrubberducky-payloads
- https://ducktoolkit.com/userscripts

DigiSpark/Arduino payloads (just open in Arduino and upload):
- https://github.com/topics/badusb
- https://github.com/JodyWeijers/BadUSB-DigiSpark

Where to next?
  - Software Defined Radio - RTL-SDR
    - A $10 USB dongle can open your computer up to all the radio communication around us. Well, a large chunk of it anyway.
    - https://www.rtl-sdr.com/about-rtl-sdr/

  - ESP8266 is a basic 2.4GHz WiFi chip. Well-supported by tutorials & code examples online.
    - deauther.com is an example application

  - ESP32 is effectively version 2 of ESP8266, adding bluetooth & more powerful processor
    - The most popular InfoSec application is "WiFi Marauder"
      - https://github.com/justcallmekoko/ESP32Marauder
    - Some boards also have a built-in camera

Have fun!!!
