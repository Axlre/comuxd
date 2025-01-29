#include <SoftwareSerial.h>
String m1 = "";
String m2 = "";
char d = ",";
int motor1, motor2;
 
void setup(){
  
}

void loop(){

}

void readOpenMV(){

  if (Serial3.available()){
    d = char(Serial3.read());
    while (d != ','){

      if (Serial3.read()){
        m1 = m1 + d;
        d = char(Serial3.read());
      }
    }
    d = char(Serial3.read());
    while (d != '\n'){
      if (Serial3.available()){
        d = char(Serial3.read());
      }
    }
    motor1 = m1.toInt();
    motor2 = m2.toInt();
  }
}