//Christmas_Wraith.ino

#include <SoftPWM.h>
#include <rgbLED.h> // used to control the common cathode rgb LEDs

char r = 'r'; // far easier to type without using
char g = 'g'; // quotation marks all the time
char b = 'b';

// an array of rgb LEDs
rgbLED candle[4]={rgbLED(2, 3, 4), rgbLED(5, 6, 7), rgbLED(8, 9, 10), rgbLED(11, 12, 13)};

void setup() {
	
	SoftPWMBegin(); //necessary because it is used in rgbLED.h
	randomSeed(analogRead(0)); // some randomness to get candle flickers later
}

void loop() {

	for(unsigned int i = 0; i < 4; i++) {
		candle[i].on(r, random(10, 50)+30);
		candle[i].on(g, random(10, 25));
		candle[i].on(b, random(10));

	// for testing purposes (aka are all cables correct?)
	// candle[i].singleon(r);
	// delay(500);
	// candle[i].singleoff(r);
	// delay(500);

	// candle[i].singleon(g);
	// delay(500);
	// candle[i].singleoff(g);
	// delay(500);

	// candle[i].singleon(b);
	// delay(500);
	// candle[i].singleoff(b);
	// delay(500);
		}
	delay(350);
}

