import RPi.GPIO as GPIO;
import time;

ledPin = 3;
btnPin = 5;

GPIO.setmode(GPIO.BOARD);
GPIO.setup(ledPin, GPIO.OUT);
GPIO.setup(btnPin, GPIO.IN);

try:
	while True:
		GPIO.output(ledPin, GPIO.HIGH);
		sleep(0.2);
		if (not GPIO.input(btnPin)):
			GPIO.output(ledPin, GPIO.LOW);
			sleep(0.2);
except KeyboardInterrupt:
	GPIO.cleanup();
	print "Goodbye\n";

