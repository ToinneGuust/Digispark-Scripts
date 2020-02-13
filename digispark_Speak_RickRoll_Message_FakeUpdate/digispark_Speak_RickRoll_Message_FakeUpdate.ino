#include "DigiKeyboard.h"
#include <avr/pgmspace.h>
#define GetPsz( x ) (strcpy_P(buffer, (char*)x))

const char line1[] PROGMEM = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
const char line2[] PROGMEM = "o                                                                                  o";
const char line3[] PROGMEM = "oVeuillez verrouiller votre ordinateur lorsque vous quittez votre poste de travail.o";
const char line4[] PROGMEM = "o            Utilisez la touche Windows et L pour le faire rapidement.             o";
const char line5[] PROGMEM = "o                          Merci pour votre cooperation.                           o";
const char line6[] PROGMEM = "o                              L'equipe informatique.                              o";
const char line7[] PROGMEM = "o        Gelieve uw computer te vergrendelen wanneer u uw werkplek verlaat.        o";
const char line8[] PROGMEM = "o                Gebruik de Windows toets en L om dit snel te doen.                o";
const char line9[] PROGMEM = "o                           Bedankt voor uw medewerking.                           o";
const char line10[] PROGMEM = "o                                   Het IT team.                                   o";
const char line11[] PROGMEM = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
const char line12[] PROGMEM = "https://updatefaker.com/windows10/index.html";
const char line13[] PROGMEM = "notepad.exe";
const char line14[] PROGMEM = "                     ";
const char line15[] PROGMEM = "https://en.wikipedia.org/wiki/Rickrolling";
const char line16[] PROGMEM = "powershell";
const char line17[] PROGMEM = "Add-Type -AssemblyName System.speech";
const char line18[] PROGMEM = "$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer";
const char line19[] PROGMEM = "$speak.Speak(\"This user forgot to lock this computer. Get ready to be Rick Rolled.\"); exit;";
//const char line17[] PROGMEM = "powershell -Command \"Add-Type -AssemblyName System.speech; $speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; $speak.Speak('Somebody forgot to lock his computer. Get ready to be Rick Rolled.'); exit;\"";

char buffer[220];
bool ledState = false;
byte ledPin = 1;
byte printBlockSize = 5;


void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  for (int i = 1; i < 20; i++)
  {
    DigiKeyboard.delay(100);
    invertLed();
  }



  DigiKeyboard.sendKeyStroke(0);
  //GO TO DESKTOP EVEN IF THE USER JUST PRESSED WINDOWS + D
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);


  //Launch browser while talking
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  printAndBlink(GetPsz(line15));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  //Start to talk
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  printlnAndBlink(GetPsz(line16));
  DigiKeyboard.delay(4000);
  printlnAndBlink(GetPsz(line17));
  DigiKeyboard.delay(1000);
  printlnAndBlink(GetPsz(line18));
  DigiKeyboard.delay(1000);
  printlnAndBlink(GetPsz(line19));
  DigiKeyboard.delay(4000);

  //Initiate Rick Roll
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  printAndBlink(GetPsz(line11));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  //Start leaving a message
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  printlnAndBlink(GetPsz(line13));
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_ALT_RIGHT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line1));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line2));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line3));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line4));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line5));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line6));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line2));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line1));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line2));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line7));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line8));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line9));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line10));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line2));
  printAndBlink(GetPsz(line14));
  printlnAndBlink(GetPsz(line1));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  //Launch web pages
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  printAndBlink(GetPsz(line12));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_UP_ARROW, MOD_GUI_LEFT);
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_F11);

  //FADE
  for (;;) {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
      analogWrite(ledPin, fadeValue);
      DigiKeyboard.delay(10);
    }
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
      analogWrite(ledPin, fadeValue);
      DigiKeyboard.delay(10);
    }
  }
}

void printlnAndBlink(char* input)
{
  printAndBlink(input);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  invertLed();
}

void printAndBlink(char* input)
{
  char temp[printBlockSize];
  for (int i = 0; i < strlen(input); i += printBlockSize)
  {

    for (int j = 0; j < printBlockSize; j++)
    {
      if ((i + j) < strlen(input)) {
        temp[j] = input[i + j];
      } else {
        temp[j] = '\0';
      }
    }
    temp[printBlockSize + 1] = '\0';
    invertLed();
    DigiKeyboard.print(temp);
  }

}

void invertLed()
{
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
}
