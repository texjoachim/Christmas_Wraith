//Christmas_Wraith.ino

#include <SoftPWM.h>
#include <rgbLED.h> // used to control the common cathode rgb LEDs

char r = 'r';
char g = 'g';
char b = 'b';

rgbLED ersteLED(2, 3, 4); // the first rgbLED

void setup() {
	
	SoftPWMBegin(); //necessary because it is used in rgbLED.h

}

void loop() {

	ersteLED.on(r, 100);
	delay(1000);
	ersteLED.off(r);
	ersteLED.on(g, 100);
	delay(1000);
	ersteLED.off(g);
	ersteLED.on(b, 100);
	delay(1000);
	ersteLED.off(b);

}


