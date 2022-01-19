/* Strandtest_behaviour - converting arduino sample code into behavour table template
 *  This code will take the example/adrafruit neopixel/strandtest code and convert it into
 *  a creative coding template. this code is an exercise to learn how the template works 
 *  before adding creative code.
 */
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//What PWM pin do you want to use? Here we don't need the ";" at the end because of #define
#define PIN [where did you plug the neopixel on the arduino?]

//type how many leds you have on you neopixel ring part here
int ringTotal = [count of LEDs on ring];

//this is the varable that will control what behaviour happens when. In this code, it is just going
//to cycle through them, so where on the table do you want to start?
int action = [case number between 0 and 10];

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

//What do you want to call your neo pixel ring, put your word before the equal sign
//call it ring?
//Also in the blank spot put the number of LEDs are on your ring
Adafruit_NeoPixel  = Adafruit_NeoPixel( [ring name?], PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...turn unplug the arduino.

void setup() {
  Serial.begin(9600);
  //Note that this code defines our ring and not a strip, need to add your word for your neopixel
  //ring before the dot on these two words
  [place your ring name here].begin();
  [place your ring name here].show(); // Initialize all pixels to 'off'
}

void loop() {
  actionTable();
  //delay(50);

  action++;
  if (action > [put here last case number]) {
    action = 0;
  }
}  


