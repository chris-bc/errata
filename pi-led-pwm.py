import RPi.GPIO as GPIO;
import time;

ledPin = 12;

GPIO.setmode(GPIO.BOARD);
GPIO.setup(ledPin, GPIO.OUT);
pwm = GPIO.PWM(ledPin, 50);

pwm.start(0);

try:
	while True:
		for i in range(100):
			pwm.ChangeDutyCycle(i+1);
			time.sleep(0.02);
		for i in range(100, 0, -1):
			pwm.ChangeDutyCycle(i-0);
			time.sleep(0.02);
except KeyboardInterrupt:
	pwm.stop();
	GPIO.cleanup();
	print "\nGoodbye\n";

