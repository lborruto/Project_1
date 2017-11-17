import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.serial.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class sketch extends PApplet {

//From Arduino to Processing to Txt or cvs etc.
//import

//declare
PrintWriter output;
Serial udSerial;
public void setup() {
 udSerial = new Serial(this, Serial.list()[0], 9600);
 output = createWriter ("Battements.csv");
}
 public void draw() {
 if (udSerial.available() > 0) {
 String SenVal = udSerial.readString();
 if (SenVal != null) {
 output.println(SenVal);
 }
 }
 }
 public void keyPressed(){
 output.flush();
 output.close();
 exit();
 }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "sketch" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
