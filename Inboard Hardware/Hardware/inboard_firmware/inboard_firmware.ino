//Inboard Pebble Turn Signal Firmware
//Written for HACKUCSC 2016 

//Libaries to Include
#include <SoftwareSerial.h>

//Firmware Parameters
#define time_interval 450    //blinking interval in milliseconds
#define max_brightness 255   //max brightness 0-255
#define idle_brightness 125  //idle brightness 0-255, set to 0 to disable running lights

//Hardware Definitions
#define right_signal_pin 13  //pins for respective turn signals
#define left_signal_pin 12
#define blueRX 8             //pins for software serial to bluetooth module
#define blueTX 9

//Global Variable Declaration
String signal_status;

void setup() {
  //Debug Computer Connection Setup
  Serial.begin(9600);
  Serial.println("Inboard Pebble Turn Signal Firmware");

  //Bluetooth Module Setup
  SoftwareSerial blueSerial(blueRX, blueTX);

  //Pin Modes
  pinMode(right_signal_pin, OUTPUT);
  pinMode(left_signal_pin, OUTPUT);
}

void loop() {

}

//Functions
void

if (signal_status == "left") {
   blink_led(left_signal_pin, time_interval);
   
  } else if (signal_status == "right") {
   blink_led(right_signal_pin, time_interval);
   
  } else if (signal_status == "brake") {
   analogWrite(left_signal_pin, max_brightness);
   analogWrite(right_signal_pin, max_brightness);
   
  } else {
   digitalWrite(left_signal_pin, idle_brightness);
   digitalWrite(right_signal_pin, idle_brightness);
  }

//Extra Supporting Functions
void blink_led(int led, int interval)
{
  //code goes here
}

