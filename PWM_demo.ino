
/*====================================================
                      PWM-DEMO
======================================================
 Description:
  This is a Pulse Width Module to control the brightness 
  of LEDs.

Programmer:
  Hans Noe Baldomer

Date:
  Sept. 09, 2026

*/

//GPIOS
 //const uint8_t LED = 32;
const uint8_t SW1 = 32;
const uint8_t SW2 = 33;

bool SW1_state = 0;
bool SW2_state = 0;

//PWM parameters
const uint16_t FREQ = 5000;
const uint8_t RES  = 8;
int bright = 0;
int t_delay = 10;
int fade = 5;


void setup() {
  //ledcAttach(LED, FREQ, RES);
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
}

void loop() {
  SW1_state = digitalRead(SW1);
    // ledcWrite(LED,bright);
    // bright += fade;

    // if(bright >= 255 || bright <= 0){
    //   fade = -fade;
    // }

    // delay(t_delay);
  
  // ledcWrite(LED, 64);
  // delay(500);
  // ledcWrite(LED, 128);
  // delay(500);
  // ledcWrite(LED, 192);
  // delay(500);
  // ledcWrite(LED, 255);
}
