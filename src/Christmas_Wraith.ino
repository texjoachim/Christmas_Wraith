//Christmas_Wraith.ino

#include <SoftPWM.h>
#include <rgbLED.h> // used to control the common cathode rgb LEDs

char r = 'r';
char g = 'g';
char b = 'b';

rgbLED ersteLED(2, 3, 4); // the first rgbLED

void setup() {
	
	SoftPWMBegin(); //necessary because it is used in rgbLED.h
	randomSeed(analogRead(0)); // some randomness to get candle flickers later

}

void loop() {

	// ersteLED.on(r, 100);
	// delay(1000);
	// ersteLED.off(r);
	// ersteLED.on(g, 100);
	// delay(1000);
	// ersteLED.off(g);
	// ersteLED.on(b, 100);
	// delay(1000);
	// ersteLED.off(b);

	// for(unsigned int i = 0; i <= 100; i++) {
	// 	for(unsigned int j = 0; j <= 100; j++) {
	// 		for(unsigned int k = 0; k <= 100; k++){
	// 			ersteLED.on(r, i);
	// 			ersteLED.on(g, j);
	// 			ersteLED.on(b, k);
	// 			delay(100);
	// 		}
	// 	}
	// }

ersteLED.on(r, random(50)+30);
ersteLED.on(g, random(25));
ersteLED.on(b, random(10));
delay(100);

}


