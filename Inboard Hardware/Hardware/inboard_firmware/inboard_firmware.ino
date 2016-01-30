//Inboard Pebble Turn Signal Firmware

//Firmware Parameters
#define time_interval 450    //blinking interval in milliseconds
#define max_brightness 255   //max brightness 0-255
#define idle_brightness 125  //idle brightness 0-255, set to 0 to disable running lights

//Hardware Definitions
#define right_signal_pin 13  //pins for respective turn signals
#define left_signal_pin 12  

void setup() {
  pinMode(right_signal_pin, OUTPUT);
  pinMode(left_signal_pin, OUTPUT);
  
}

void loop() {

  if (signal_status == "left")
  {
   blink_led(left_signal_pin, time_interval);
  }
  else if (signal_status == "right")
  {
   blink_led(right_signal_pin, time_interval);
  }
  else if (signal_status == "brake")
  {
   analogWrite(left_signal_pin, max_brightness);
   analogWrite(right_signal_pin, max_brightness);
  }
  else ()
  {
   digitalWrite(left_signal_pin, idle_brightness);
   digitalWrite(right_signal_pin, idle_brightness);
  }

}

void blink_led(int led, int interval)
{
  //code goes here
}

