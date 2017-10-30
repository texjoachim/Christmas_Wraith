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
	pinMode(A1, INPUT); // these are used to set the number of candles
	pinMode(A2, INPUT); // use a cable between GND and A1-A4
	pinMode(A3, INPUT);
	pinMode(A4, INPUT);
	digitalWrite(A1, INPUT_PULLUP);
	digitalWrite(A2, INPUT_PULLUP);
	digitalWrite(A3, INPUT_PULLUP);
	digitalWrite(A4, INPUT_PULLUP);
}

void loop() {

	unsigned int maxCandles = 0;

	Serial.println(digitalRead(A1));
	if (digitalRead(A1) == LOW) {
		maxCandles = 1;
	} else if (digitalRead(A2) == LOW) {
		maxCandles = 2;
	} else if (digitalRead(A3) == LOW) {
		maxCandles = 3;
	} else if (digitalRead(A4) == LOW) {
		maxCandles = 4;
	}

	for(unsigned int i = 0; i < maxCandles; i++) {
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

