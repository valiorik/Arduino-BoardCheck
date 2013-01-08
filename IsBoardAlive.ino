// IsCardAlive

// Test app to check if device is alive.
// All that app does is blinking on board led and sending repeating text to COM port.
// Purpose of it is as simple as to test if card is not burned.

// Valerij Kozlov
// valiorik@gmail.com
// 2012

int OnBoardLed = 13; // It is on 13th pin

void setup() {
  
  // setting led
  pinMode(OnBoardLed, OUTPUT);   
  
  // setting serial
  Serial.begin(9600);
  Serial.println("Card test!");
}

void loop() {
  Serial.print("tick_!_");
  digitalWrite(OnBoardLed, HIGH);
  delay(1000);
  Serial.println("tock");
  digitalWrite(OnBoardLed, LOW);  
}
