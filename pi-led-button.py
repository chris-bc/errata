import RPi.GPIO as GPIO;
import time;

ledPin = 5;
btnPin = 3;

GPIO.setmode(GPIO.BOARD);
GPIO.setup(ledPin, GPIO.OUT);
GPIO.setup(btnPin, GPIO.IN, GPIO.PUD_UP);

try:
	while True:
		GPIO.output(ledPin, GPIO.HIGH);
		time.sleep(0.2);
		if (GPIO.input(btnPin)):
			GPIO.output(ledPin, GPIO.LOW);
			time.sleep(0.2);
except KeyboardInterrupt:
	GPIO.cleanup();
	print "\nGoodbye\n";

