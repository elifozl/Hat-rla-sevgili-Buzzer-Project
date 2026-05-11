const int buzzerPin = 6;

// Notaların frekans tanımları
#define NOTE_C4  262 // Do
#define NOTE_D4  294 // Re
#define NOTE_E4  330 // Mi
#define NOTE_F4  349 // Fa
#define NOTE_G4  392 // Sol
#define NOTE_A4  440 // La
#define NOTE_AS4 466 // La# (Si bemol)
#define NOTE_B4  494 // Si

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // --- Hatırla sevgili (La - Do - Mi - Re) ---
  cal(NOTE_A4, 500);
  cal(NOTE_C4, 500);
  cal(NOTE_E4, 500);
  cal(NOTE_D4, 1000);
  delay(250);

  // --- O mesut geceyi (Mi - Re - Do - Si - La) ---
  cal(NOTE_E4, 400);
  cal(NOTE_D4, 400);
  cal(NOTE_C4, 400);
  cal(NOTE_B4, 400);
  cal(NOTE_A4, 1000);
  
  delay(2000); // Şarkı bitince 2 saniye bekle ve başa dön
}

// Nota çalmak için yardımcı fonksiyon
void cal(int notaFrekansi, int duration) {
  tone(buzzerPin, notaFrekansi, duration);
  delay(duration * 1.2); // Notalar birbirine karışmasın diye biraz bekleme
  noTone(buzzerPin);
}
