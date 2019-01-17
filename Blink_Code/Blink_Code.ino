
/*This program sequentially turns on and off 3 LEDs */ 

int LED1 = 13; // Connected to port 13
int LED2 = 12; // Connected to port 12
int LED3 = 11; // Connected to port 11

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // turn on 1st LED
  delay(400);                  // wait for 400ms
  digitalWrite(LED2, HIGH);    // turn on 2nd LED
  delay(400);                  // wait for 400ms       
  digitalWrite(LED3, HIGH);    // turn on 3rd LED
  delay(400);                  // wait for 400ms
  digitalWrite(LED1, LOW);     // turn off 1st LED
  delay(400);                  // wait for 400ms
  digitalWrite(LED2, LOW);     // turn off 2nd LED
  delay(400);                  // wait for 400ms
  digitalWrite(LED3, LOW);     // turn off 3rd LED
  delay(400);                  // wait for 400ms before restarting program
}
