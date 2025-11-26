// Pin definitions
//this code belongs to @rudrajadaun
//please mention me in use of this code
const int whiteLEDs[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
const int redLED = 16;
const int buttonPin = 20;
const int redPin = 17;
const int greenPin = 18;
const int bluePin = 19;

// Variables
int currentLED = 0;
bool gameRunning = false;

void setup() {
  // Initialize pins
  pinMode(redLED, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  for (int i = 0; i < 14; i++) {
    pinMode(whiteLEDs[i], OUTPUT);
  }

  // Start game
  Serial.begin(9600);
  startGame();
}

void loop() {
  if (gameRunning) {
    // Chase LEDs
    chaseLEDs();

    // Check button press
    if (digitalRead(buttonPin) == LOW) {
      gameRunning = false;
      stopLEDs();
      // Turn on the stopped LED
      if (currentLED == 13) { // Red LED
        digitalWrite(redLED, HIGH);
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, LOW);
      } else { // White LED
        digitalWrite(whiteLEDs[currentLED], HIGH);
        digitalWrite(redPin, HIGH);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, LOW);
      }
      delay(500); // Delay for button debounce
    }
  } else {
    // Check button press to restart game
    if (digitalRead(buttonPin) == LOW) {
      startGame();
      delay(500); // Delay for button debounce
    }
  }
}

void startGame() {
  gameRunning = true;
  currentLED = 0;
}

void chaseLEDs() {
  stopLEDs(); // Turn off all LEDs
  if (currentLED == 13) {
    digitalWrite(redLED, HIGH); // Turn on red LED
  }
  digitalWrite(whiteLEDs[currentLED], HIGH); // Turn on current white LED
  currentLED = (currentLED + 1) % 14; // Move to the next LED
  delay(100); // Adjust delay for speed
}

void stopLEDs() {
  for (int i = 0; i < 14; i++) {
    digitalWrite(whiteLEDs[i], LOW); // Turn off all white LEDs
  }
  digitalWrite(redLED, LOW); // Turn off red LED
}

void gameWon() {
  // Turn on all LEDs for 1 second
  for (int i = 0; i < 14; i++) {
    digitalWrite(whiteLEDs[i], HIGH);
  }
  digitalWrite(redLED, HIGH);
  delay(1000);
  stopLEDs(); // Turn off all LEDs
}

void gameLost() {
  // Blink red LED and turn RGB LED green
  for (int i = 0; i < 2; i++) {
    digitalWrite(redLED, HIGH);
    delay(500);
    digitalWrite(redLED, LOW);
    delay(500);
  }
  // Turn RGB LED green
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
}
