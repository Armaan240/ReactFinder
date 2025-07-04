
const int ledPins[4] = {26, 27, 28, 29};  
const int buttonPins[4] = {1, 0, 7, 6};   
const int startButtonPin = 5;             

const int maxLevel = 10;
int sequence[maxLevel];         
int currentLevel = 1;            
int inputIndex = 0;
bool gameStarted = false;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);  // Buttons active LOW
  }

  pinMode(startButtonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);

  randomSeed(analogRead(A0));  // For randomness
}

// === Main Loop ===
void loop() {
  if (!gameStarted) {
    if (digitalRead(startButtonPin) == LOW) {
      delay(200);  // Debounce
      startGame();
    }
  } else {
    for (int i = 0; i < 4; i++) {
      if (digitalRead(buttonPins[i]) == LOW) {
        delay(150);  // Debounce
        giveFeedback(i);   // LED + buzzer feedback
        checkInput(i);
        break;
      }
    }
  }
}

// === Start New Game ===
void startGame() {
  currentLevel = 1;
  inputIndex = 0;
  gameStarted = true;
  generateSequence();
  playSequence(currentLevel);
}

// === Generate Full Random Sequence ===
void generateSequence() {
  for (int i = 0; i < maxLevel; i++) {
    sequence[i] = random(0, 4);
  }
}

// === Play Current Level's Sequence ===
void playSequence(int level) {
  delay(500); // small delay before start
  for (int i = 0; i < level; i++) {
    int led = sequence[i];
    digitalWrite(ledPins[led], HIGH);
    tone(buzzerPin, 1000);
    delay(300);
    digitalWrite(ledPins[led], LOW);
    noTone(buzzerPin);
    delay(200);
  }
}

// === Check Player's Button Press ===
void checkInput(int btnIndex) {
  if (btnIndex == sequence[inputIndex]) {
    inputIndex++;

    if (inputIndex == currentLevel) {
      winTone();
      delay(600);
      inputIndex = 0;
      currentLevel++;

      if (currentLevel > maxLevel) {
        currentLevel = 1; // Loop back or end game
      }

      playSequence(currentLevel);
    }
  } else {
    loseTone();
    gameStarted = false;
  }
}

// === Flash LED + Play Feedback Tone on Press ===
void giveFeedback(int index) {
  digitalWrite(ledPins[index], HIGH);
  tone(buzzerPin, 800, 100);
  delay(150);
  digitalWrite(ledPins[index], LOW);
  noTone(buzzerPin);
}

// === Win Sound ===
void winTone() {
  tone(buzzerPin, 1200, 150); delay(200);
  tone(buzzerPin, 1600, 150); delay(200);
  tone(buzzerPin, 2000, 200); delay(250);
  noTone(buzzerPin);
}

// === Fail Sound ===
void loseTone() {
  for (int i = 0; i < 3; i++) {
    tone(buzzerPin, 300, 200);
    delay(250);
  }
  noTone(buzzerPin);
}
