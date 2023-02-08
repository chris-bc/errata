DigiKeyboard.println("Welcome to your DigiSpark!");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("To program it in Windows you'll need to install a driver - https://github.com/digistump/DigistumpArduino/releases");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("To get yourself up and running, once you've installed the driver:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Download arduino IDE from arduino.cc");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- File->preferences->additional board manager URLs");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Add http://digistump.com/package_digistump_index.json (this can be a comma-separated list if you get excited and buy different boards down the track)");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Tools->Boards->Board Manager");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Install Digistump AVR Boards");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Let it do its thing while it downloads & compiles the tools it needs");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Select the board in Arduino, either:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Tools->board->DigiStump->DigiSpark (Default, 16.5MHz)");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - or via the drop-down board selection list that's displayed in the IDE");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Select the programmer (weirdly, with a choice of one, it isn't automatically selected)");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Tools->programmer->micronucleus");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("Note that at this stage DigiSpark IS NOT PLUGGED IN. This flashing method is unique to DigiSpark - Any other board will be plugged in before you select it");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Write your code");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - I've linked some repositories below, but when you installed support for the board that came with a lot of example code");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Browse through the contents of File->Examples");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - You should see generic Arduino examples followed by DigiSpark-specific examples");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - If you don't see the DigiSpark examples in the menu it probably just means you don't have a DigiSpark board selected in the open sketch (project).");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - File->Examples->DigisparkKeyboard->Keyboard is a good place to start");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Select Sketch->Upload. The DigiSpark is still not plugged in.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Watch the console output in Arduino IDE. Your very first compile could take a few minutes");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - When the console says 'Plug in device now...' do what it says");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - When the console says \"Micronucleus done. Thank you!\" you can unplug the device");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("General info on your DigiSpark - http://digistump.com/wiki/digispark/tutorials/connecting");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("There are a bunch of tutorials on getting started, like this one - https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("Good Rubber Ducky resources:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Online DuckyScript to DigiSpark (or Arduino) convertor - https://duckify.huhn.me/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - I haven't compared them, but I suspect this will be the best of the bunch - The author is a very clever person.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- Duck2Spark - Same thing in Python https://github.com/mame82/duck2spark");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- DuckySpark is the same again, but the repo includes links to a bunch of places to download payloads/DuckyScripts");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - https://github.com/toxydose/Duckyspark");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("DuckyScript payloads you can feed through one of those convertors:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- https://github.com/hak5/usbrubberducky-payloads");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- https://ducktoolkit.com/userscripts");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("DigiSpark and Arduino payloads (no conversion needed, just open in Arduino and upload):");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- https://github.com/topics/badusb");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- https://github.com/JodyWeijers/BadUSB-DigiSpark");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("Where to next?");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("If the electronics side of this interests you it's relatively easy to buy a 'naked' chip and build a circuit allowing it to be flashed with Arduino IDE");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - That's easiest to do if you own an Arduino and can 'borrow' its FTDI programmer to do the flashing");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - But you feel like a real whiz if you buy a USB FTDI programmer and do the entire thing from scratch :)");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - There are a few really good tutorials at instructables.com");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("If it's the hacking/security side that interests you, you're probably more interested in devices that can communicate:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Flipper Zero is obviously a jack of all trades, but they're expensive and I feel it's a bit 'script-kiddie'-like to just learn how to push buttons on the latest gadget, without first learning how everything works.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - Software Defined Radio - RTL-SDR");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - A $10 USB dongle can tune your computer in to all the radio communication that happens around us");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - Not *just* radio (although it can do radio, TV, and UHF/CB radio), RTL-SDR has a range from about 20MHz to about 1GHz, some things it can interact with are:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - Remote controls - garage doors, toys, drones, doorbells, car keys, baby monitors, home weather stations, etc.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - GSM, GPS, and ADS-B (flight information)");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - Audio and, occasionally, images from the International Space Station");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - https://www.rtl-sdr.com/about-rtl-sdr/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - ESP8266 is a basic 2.4GHz WiFi chip. It's insanely popular because it's so capable & cheap, so is well-supported on Arduino and has loads of tutorials & code examples easily-found online.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - The manufacturer also provide their own C++-based firmware development kit.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - deauther.com is an example application");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - There are loads of different ESP8266 boards - Wemos D1/D1 Mini/D1 Pro/D2, NodeMCU, Lua, ...");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - Having too many options can be confusing. Some of them have different pin arrangements but fundamentally they're all the same device.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - ESP32 is effectively version 2 of ESP8266, adding bluetooth, some API changes and a significant boost to processing power.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - The most popular InfoSec application of ESP32 is the \"WiFi Marauder\"");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - https://www.tindie.com/products/justcallmekoko/esp32-marauder/");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - https://github.com/justcallmekoko/ESP32Marauder");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("         - Free and easy to build if you leave the screen out and use web or serial interfaces instead");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - Because of the additional processing power some boards add interesting features - camera, external antenna amplifier, etc.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - nRF24L01 rounds out the 2.4GHz spectrum, operating on the same frequency range (ish) as WiFi and Bluetooth");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - There are loads of 'proprietary' protocols that operate in this frequency band, this is the chip that most of them use.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - Often used by drones, wireless keyboards and mice, and industrial/medical applications.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - Apparently they can also implement BTLE (but not Bluetooth).");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("      - I only got mine the same day the DigiSparks arrived so haven't had much time with it yet.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - There's a common attack called \"Mousejacking\" - Using one of these to turn a vulnerable keyboard or mouse into a BadUSB (aka Rubber Ducky).");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - nRF52840 ... Holy hell I want one of these NOW! I thought it only added ZigBee support to nRF24, but boy was I wrong:");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - \"Bluetooth 5, Bluetooth mesh, Thread, ZigBee, 802.15.4, ANT and 2.4 GHz proprietary protocols.\"");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("    - And the manufacturer has provided software to support testing https://www.nordicsemi.com/Products/Development-tools/nrf-connect-for-desktop");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("  - LoRa ... I don't know much about, although it appears critical to many IoT applications.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("Where to buy stuff");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- In Aus 'Maker Zone', 'Little Bird', 'Core Electronics' and 'Element 14' seem to be the best places to find hacker/maker/pentester hardware");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- DigiKey have an Australian site - digikey.com.au - that's new to me. If they still fulfil orders from the US you'll need patience, but their prices are so low that for a large order it always used to be more than worthwhile to pay exhorbitant shipping fees from the US.");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("- lab401.com and hak5.com are probably the highest-quality pentest-specific shops I know of");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.println("Have fun!!!");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
