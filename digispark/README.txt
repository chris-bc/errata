Welcome to your DigiSpark!

To program it in Windows you'll need to install a driver - https://github.com/digistump/DigistumpArduino/releases

Once that's done:
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
  - Links below, but example code was also packaged with the board support
  - File->Examples should contain generic Arduino examples followed by DigiSpark-specific examples
    - If you don't see the DigiSpark examples in the menu it probably just means you don't have a DigiSpark board selected in the open sketch (project).
  - File->Examples->DigisparkKeyboard->Keyboard is a good place to start
- Select Sketch->Upload. DigiSpark IS NOT PLUGGED IN YET.
  - When the console says 'Plug in device now...' you can plug it in
  - When the console says "Micronucleus done. Thank you!" you can unplug it

Good Rubber Ducky resources:
- Online DuckyScript to DigiSpark (or Arduino) convertor - https://duckify.huhn.me/
- Plenty of others exist, but that developer is solid

DuckyScript payloads you can feed through the above convertor:
- https://github.com/hak5/usbrubberducky-payloads
- https://ducktoolkit.com/userscripts

DigiSpark and Arduino payloads (no conversion needed, just open in Arduino and upload):
- https://github.com/topics/badusb
- https://github.com/JodyWeijers/BadUSB-DigiSpark

Where to next?
If the electronics side of this interests you it's relatively easy to buy a 'naked' chip and build a circuit allowing it to be flashed with Arduino IDE
  - That's easiest to do if you own an Arduino and can 'borrow' its FTDI programmer to do the flashing
    - https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/
  - But you feel like a real whiz if you buy a USB FTDI programmer and do the entire thing from scratch :)
  - There are a few really good tutorials at instructables.com

If it's the hacking/security side that interests you, you're probably more interested in devices that can communicate:
  - Flipper Zero is obviously a jack of all trades, but they're expensive and I feel it's a bit 'script-kiddie'-like to just learn how to push buttons on the latest gadget, without first learning how everything works.

  - Software Defined Radio - RTL-SDR
    - A $10 USB dongle can open your computer up to all the radio communication around us
    - Not *just* radio (although it can do radio, both music & CB), RTL-SDR has a range from about 20MHz to about 1GHz, some things it can interact with are:
      - Remote controls - garage doors, toys, drones, doorbells, car keys, baby monitors
      - GSM, GPS, ADS-B (flight information)
      - Audio and, occasionally, images from the International Space Station
    - https://www.rtl-sdr.com/about-rtl-sdr/

  - ESP8266 is a basic 2.4GHz WiFi chip. It's insanely popular because it's so capable & cheap, so is well-supported on Arduino and has loads of tutorials & code examples easily-found online.
    - The manufacturer also provide their own C++-based firmware development kit.
    - deauther.com is an example application
    - There are loads of different ESP8266 boards - Having too many options can be confusing.
      - Some of them have different pin arrangements but fundamentally they're all the same device.

  - ESP32 is effectively version 2 of ESP8266, adding bluetooth & a significant boost to processing power.
    - The most popular InfoSec application of ESP32 is "WiFi Marauder"
      - https://www.tindie.com/products/justcallmekoko/esp32-marauder/
      - https://github.com/justcallmekoko/ESP32Marauder
         - Free & easy to build if you leave the screen out and use web or serial interfaces instead
    - Because of the additional processing power some boards add interesting features - camera, external antenna, etc.

  - nRF24L01 rounds out the 2.4GHz spectrum, operating on the same frequency range (ish) as WiFi and Bluetooth 
    - There are loads of 'proprietary' protocols that operate in this frequency band, this is the chip that most of them use.
    - Often used by drones, wireless keyboards and mice, and industrial/medical applications.
    - Apparently they can also implement BTLE (but not Bluetooth).
      - I only got mine the same day the DigiSparks arrived so haven't had much time with it yet.
    - There's a common attack called "Mousejacking" - Using one of these to turn a vulnerable keyboard or mouse into a BadUSB (aka Rubber Ducky).

  - nRF52840 ... Holy hell I want one of these NOW! I thought it only added ZigBee support to nRF24, but boy was I wrong:
    - "Bluetooth 5, Bluetooth mesh, Thread, ZigBee, 802.15.4, ANT and 2.4 GHz proprietary protocols."
    - And the manufacturer has provided software to support testing https://www.nordicsemi.com/Products/Development-tools/nrf-connect-for-desktop

  - LoRa ... I don't know much about, although it appears critical to many IoT applications.

Where to buy stuff
- In Aus 'Maker Zone', 'Little Bird', 'Core Electronics' and 'Element 14' seem to be the best places to find hacker/maker/pentester hardware
- DigiKey have an Australian site - digikey.com.au - that's new to me. If they still fulfil orders from the US you'll need patience, but their prices are so low that for a large order it always used to be more than worthwhile to pay exhorbitant shipping fees from the US.
- lab401.com and hak5.com are probably the highest-quality pentest-specific shops I know of

Have fun!!!
