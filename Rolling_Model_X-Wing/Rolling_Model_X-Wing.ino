int speakerPin = 12;         //the pin that buzzer is connected to
#include <Servo.h>          //include the servo library
Servo myServo;              //create a servo object

void setup()
{
  myServo.attach(9);
  pinMode(speakerPin, OUTPUT);    //set the output pin for the speaker
}

void loop()
{
 
  play('d', 1);
  myServo.write (90);
  play('d', 1);
  myServo.write (100);


  play('d', 1);
  myServo.write (110);


  play('g', 1);
  myServo.write (120);
  play('g', 1);
  myServo.write (110);
  play('g', 1);
  myServo.write (100);
  play('g', 1);
  myServo.write (90);
  play('g', 1);
  myServo.write (80);
  play('g', 1);
  myServo.write (70);
  play('g', 1);
  myServo.write (60);
  play('g', 1);
  myServo.write (70);
  

  play('a', 1);
  myServo.write (80);
  play('a', 1);
  myServo.write (90);
  play('a', 1);
  myServo.write (100);
  play('a', 1);
  myServo.write (110);
  play('a', 1);
  myServo.write (120);
  play('a', 1);
  myServo.write (110);


  play('q', 1);
  myServo.write (100);


  play('C', 1);
  myServo.write (90);
  

  play('q', 1);
  myServo.write (80);
  play('q', 1);
  myServo.write (70);
  play('q', 1);
  myServo.write (60);
  play('q', 1);
  myServo.write (70);
  play('q', 1);
  myServo.write (80);
  play('q', 1);
  myServo.write (90);
  play('q', 1);
  myServo.write (100);


  play('d', 1);
  myServo.write (110);
  play('d', 1);
  myServo.write (120);
  play('d', 1);
  myServo.write (110);
  play('d', 1);
  myServo.write (100);
  play('d', 1);
  myServo.write (90);
  play('d', 1);
  myServo.write (80);


  play('d', 1);
  myServo.write (70);
  play('d', 1);
  myServo.write (60);
  

  play('g', 1);
  myServo.write (70);
  play('g', 1);
  myServo.write (80);
  play('g', 1);
  myServo.write (90);
  play('g', 1);
  myServo.write (100);
  

  play('a', 1);
  myServo.write (110);
  play('a', 1);
  myServo.write (120);
  

  play('q', 1);
  myServo.write (110);
  play('q', 1);
  myServo.write (100);
  

  play('d', 1);
  myServo.write (90);


  play('q', 1);
  myServo.write (80);


  play('g', 1);
  myServo.write (70);


  play('D', 1);
  myServo.write (60);


  play('C', 1);
  myServo.write (70);
  play('C', 1);
  myServo.write (80);
  play('C', 1);
  myServo.write (90);
  play('C', 1);
  myServo.write (100);
  play('C', 1);
  myServo.write (110);
  play('C', 1);
  myServo.write (120);
  play('C', 1);
  myServo.write (110);
  play('C', 1);
  myServo.write (100);
  play('C', 1);
  myServo.write (90);


  
  play('d', 1);
  myServo.write (80);
  play('d', 1);
  myServo.write (70);
  play('d', 1);
  myServo.write (60);
  

  play('d', 1);
  myServo.write (70);
  

  play('g', 1);
  myServo.write (80);
  play('g', 1);
  myServo.write (90);
  
 
  play('a', 1);
  myServo.write (100);
  play('a', 1);
  myServo.write (110);
  

  play('q', 1);
  myServo.write (120);
  play('q', 1);
  myServo.write (110);
  

  play('d', 1);
  myServo.write (100);
  play('d', 1);
  myServo.write (90);
  

  play('D', 1);
  myServo.write (80);
  play('D', 1);
  myServo.write (70);
  

  play('g', 1);
  myServo.write (60);
  play('g', 1);
  myServo.write (70);
  

  play('G', 1);
  myServo.write (80);
  play('G', 1);
  myServo.write (90);
  play('G', 1);
  myServo.write (100);
  play('G', 1);
  myServo.write (110);
  play('G', 1);
  myServo.write (120);
  play('G', 1);
  myServo.write (110);
  

  play('g', 1);
  myServo.write (100);
  play('g', 1);
  myServo.write (90);
  
  
  play('q', 1);
  myServo.write (80);
  
  
  play('a', 1);
  myServo.write (70);
  
  
  play('g', 1);
  myServo.write (60);
  
  
  play('D', 1);
  myServo.write (70);
  play('D', 1);
  myServo.write (80);
  
  
  play('q', 1);
  myServo.write (90);


  play('g', 1);
  myServo.write (100);

  
  play('d', 1);
  myServo.write (110);
  play('d', 1);
  myServo.write (120);
  
  
  play('d', 1);
  myServo.write (110);

  play('d', 0.5);
  play('d', 0.5);
  myServo.write (100);

  
  play('g', 1);
  myServo.write (90);
  play('g', 1);
  myServo.write (80);
  play('g', 1);
  myServo.write (70);
  play('g', 1);
  myServo.write (60);
  play('g', 1);
  myServo.write (70);
  play('g', 1);
  myServo.write (80);
  play('g', 1);
  myServo.write (90);
  play('g', 1);

}



void play( char note, int beats)
{
  int numNotes = 15;  // number of notes in our note and frequency array (there are 15 values, but arrays start at 0)

  //this array is used to look up the notes
  char notes[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B', 'q'};//q=a#4
  //this array matches frequencies with each letter (e.g. the 4th note is 'f', the 4th frequency is 175)
  int frequencies[] = {262, 294, 330, 350, 392, 440, 494, 524, 588, 660, 698, 784, 880, 988, 466};

  int currentFrequency = 0;    //the frequency that we find when we look up a frequency in the arrays
  int beatLength = 130;   //the length of one beat (changing this will speed up or slow down the tempo of the song)

  //look up the frequency that corresponds to the note
  for (int i = 0; i < numNotes; i++)  // check each value in notes from 0 to 14
  {
    if (notes[i] == note)             // does the letter passed to the play function match the letter in the array?
    {
      currentFrequency = frequencies[i];   // Yes! Set the current frequency to match that note
    }
  }

  //play the frequency that matched our letter for the number of beats passed to the play function
  tone(speakerPin, currentFrequency, beats * beatLength);
  delay(beats * beatLength);  //wait for the length of the tone so that it has time to play

}
