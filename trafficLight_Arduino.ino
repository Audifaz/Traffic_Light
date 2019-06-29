// Project 3 - Traffic Lights
/*Adjustment of project 3 from the book "Beginning Arduino" from McRoberts, M (2013)
 * Emilio Águila
 * 28/06/2019
 */
 
int ledDelay = 10000; // delay in between changes
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
void setup() {
       pinMode(redPin, OUTPUT);
       pinMode(yellowPin, OUTPUT);
       pinMode(greenPin, OUTPUT);
}
void loop() {
       digitalWrite(greenPin, HIGH); // turn green on
       delay(ledDelay); 
       digitalWrite(greenPin, LOW); // turn green off
       
       for(int i=0; i<3; i++)
       {
       digitalWrite(yellowPin, HIGH); // turn on yellow
       delay(500); // wait 2 seconds
       digitalWrite(yellowPin, LOW);// turn off yellow
       delay(500);
       }

       digitalWrite(redPin, HIGH); // turn the red light on
       delay(ledDelay); 
       digitalWrite(redPin, LOW); // turn red off      

}
