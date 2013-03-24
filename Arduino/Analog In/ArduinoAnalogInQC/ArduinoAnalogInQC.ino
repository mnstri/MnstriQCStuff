////////////////////////////////////////////////
///  Arduino to Quartz Composer              ///
///  by Matti Niinimäki                      ///
///  mansteri.com                    ///
////////////////////////////////////////////////

int delayTime = 100;   //Delay in milliseconds Try with different delays to achieve the best result.

int a0=0;
int a1=0;
int a2=0;
int a3=0;
int a4=0;
int a5=0;

void setup(){
Serial.begin(9600);    //Set the Baud Rate. Recommended rates: 9600, 14400, 19200, 28800, 38400, 57600, or 115200.
}

void loop (){

// Read the analog values

a0=analogRead(0);
a1=analogRead(1);
a2=analogRead(2);
a3=analogRead(3);
a4=analogRead(4);
a5=analogRead(5);

// Print a packet of the values to the serial port

Serial.print("A");
Serial.print(a0);

Serial.print("B");
Serial.print(a1);

Serial.print("C");
Serial.print(a2);

Serial.print("D");
Serial.print(a3);

Serial.print("E");
Serial.print(a4);

Serial.print("F");
Serial.print(a5);

Serial.print("\n");

delay(delayTime);

}
