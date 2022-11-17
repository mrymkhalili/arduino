/*

.. arduino jingle bell song
.. intro to im assignment 10

.. written by maryam and ian
.. song sheet converted to code taken from project hub (https://create.arduino.cc/projecthub)

*/

#include "pitches.h"
#define melodyPin 9

// jingle bells notes and different tempo

int main_melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5
};

int main_tempo[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8,
  2,
  8, 8, 8, 8,
  8, 8, 8, 16, 16,
  8, 8, 8, 8,
  4, 4
};

int e5 = NOTE_E5;
int g5 = NOTE_G5;
int c5 = NOTE_C5;
int d5 = NOTE_D5;
int f5 = NOTE_F5;

int tempo = 8;


int switchOne = 0;
int switchTwo = 0;
int switchThree = 0;
int switchFour = 0;
int switchFive = 0;


void setup(void) {
  Serial.begin(9600);
  pinMode(9, OUTPUT); // buzzer
  pinMode(13, OUTPUT); // led indicator when singing a note
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop() {

  int knob = analogRead(A2);
  Serial.println(knob);

  // tempo = knob/60;
  tempo = map(knob, 0, 1024, 60, 255)/15;

  switchOne = digitalRead(2);
  switchTwo = digitalRead(3);
  switchThree = digitalRead(4);
  switchFour = digitalRead(5);
  switchFive= digitalRead(6);
  
  if (switchOne == HIGH) {
    sing(1);
  } else if (switchTwo == HIGH) {
    sing(2);
  } else if (switchThree == HIGH) {
    sing(3);
  } else if (switchFour == HIGH) {
    sing(4);
  } else if (switchFive == HIGH) {
    sing(5);
  }
}

int song = 0;
void sing(int s) {
  // iterate over the notes of the melody_1:
  song = s;

  if (song == 0){
    //empty
  }

  else if (song == 1) {
    Serial.println("c5, t4");

    int noteDuration = 1000 / tempo;
    tone(melodyPin, c5, noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(melodyPin);
    delay(pauseBetweenNotes);
    song = 0;
  } 
  
  else if (song == 2) {
      Serial.println("d5, t4");

      int noteDuration = 1000 / tempo;
      tone(melodyPin, d5, noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(melodyPin);
      delay(pauseBetweenNotes);
      song = 0;
  }

  else if (song == 3) {
      Serial.println("e5, t4");

      int noteDuration = 1000 / tempo;
      tone(melodyPin, e5, noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(melodyPin);
      delay(pauseBetweenNotes);
      song = 0;
  }

  else if (song == 4) {
      Serial.println("f5, t4");

      int noteDuration = 1000 / tempo;
      tone(melodyPin, f5, noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(melodyPin);
      delay(pauseBetweenNotes);
      song = 0;
  }

  else if (song == 5) {
      Serial.println("g5, t4");

      int noteDuration = 1000 / tempo;
      tone(melodyPin, g5, noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(melodyPin);
      delay(pauseBetweenNotes);
      song = 0;
  }
}

