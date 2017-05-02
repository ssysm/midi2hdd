//Import Lib
import processing.serial.*;
import promidi.*;
Serial myPort;
MidiIO midiIO;                                     
int message = 0;
void setup() {                                          
  println(Serial.list());
  myPort = new Serial(this, "YOUR COM PORT", 9600);
  midiIO = MidiIO.getInstance(this);
  //Line that prints I/O devices in console
  midiIO.printDevices();
  //Receive input from Virtual MIDI Ports
  midiIO.openInput(0,3);
}
void draw(){} 
void noteOn(Note note, int deviceNum, int midiChan){
  int vel = note.getVelocity();
  int pitch = note.getPitch();
  if (vel > 0){
    message = pitch;
    println(message);
  }
  else{
    message = 0;
  }
  //Send message to Arduino
  myPort.write(message);
}

