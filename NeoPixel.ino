// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      2

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 5000; // delay for half a second
long randNum;
int top =10;

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  pixels.setPixelColor(0, pixels.Color(0,top,0)); // Moderately bright green color.
  pixels.show(); // This sends the updated pixel color to the hardware.
}

void loop() {

  
  
    randNum =  random(0,top);
  
  
    if(randNum>top/2){
      pixels.setPixelColor(1, pixels.Color(randNum,top-randNum,0)); //      
      
    }else{
      pixels.setPixelColor(1, pixels.Color(0,top-randNum,randNum)); //     
      
    }
  
  

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval); // Delay for a period of time (in milliseconds).

}
