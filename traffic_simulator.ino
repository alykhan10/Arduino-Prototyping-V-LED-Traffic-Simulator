/*********************************************************************************************************************
 * 
 * Author:    Aly Khan Nuruddin
 * Date:      May 11, 2021
 * Purpose:   This program permits the user to simulate a real-time traffic-light by intermittently toggling the start
 *            and end states of three LEDS as depicted in TinkerCAD, an open-source hardware prototyping initiative.
 *            
 *********************************************************************************************************************/

int ledGreen = 4;                                 // Define the Digital Pin connection for the output voltage of the Green LED.
int ledYellow = 3;                                // Define the Digital Pin connection for the output voltage of the Yellow LED.
int ledRed = 2;                                   // Define the Digital Pin connection for the output voltage of the Red LED.

int delayGreen = 20000;                           // Initialize the Delay Time for the Red LED to 20,000 milliseconds (ms).
int delayYellow = 5000;                           // Initialize the Delay Time for the Red LED to 5,000 milliseconds (ms).
int delayRed = 20000;                             // Initialize the Delay Time for the Red LED to 20,000 milliseconds (ms).

void setup()
{
  pinMode(ledGreen, OUTPUT);                      // Configure the Digital Pin for the Green LED to be recognized as an Output.
  pinMode(ledYellow, OUTPUT);                     // Configure the Digital Pin for the Yellow LED to be recognized as an Output.
  pinMode(ledRed, OUTPUT);                        // Configure the Digital Pin for the Red LED to be recognized as an Output.
}

void loop()
{
  trafficGreen();                                 // Call the function to toggle the brightness of the Green LED.
  delay(delayGreen);                              // Delay the execution of the program by 20,000 milliseconds.
  trafficYellow();                                // Call the function to toggle the brightness of the Yellow LED.
  delay(delayYellow);                             // Delay the execution of the program by 5,000 milliseconds.
  trafficRed();                                   // Call the function to toggle the brightness of the Red LED.
  delay(delayRed);                                // Delay the execution of the program by 20,000 milliseconds.
}

void trafficGreen()                               // Implement a function to toggle the brightness of the Red LED.
{
  digitalWrite(ledGreen, HIGH);                   // Set the ouput voltage at the Digital Pin for the Green LED to 5 V.
  digitalWrite(ledYellow, LOW);                   // Set the ouput voltage at the Digital Pin for the Yellow LED to 0 V.
  digitalWrite(ledRed, LOW);                      // Set the ouput voltage at the Digital Pin for the Red LED to 0 V.
}

void trafficYellow()                              // Implement a function to toggle the brightness of the Yellow LED.
{
  digitalWrite(ledGreen, LOW);                    // Set the ouput voltage at the Digital Pin for the Green LED to 0 V.
  digitalWrite(ledYellow, HIGH);                  // Set the ouput voltage at the Digital Pin for the Yellow LED to 5 V.
  digitalWrite(ledRed, LOW);                      // Set the ouput voltage at the Digital Pin for the Red LED to 0 V.
}

void trafficRed()                                 // Implement a function to toggle the brightness of the Red LED.
{
  digitalWrite(ledGreen, LOW);                    // Set the ouput voltage at the Digital Pin for the Green LED to 0 V.
  digitalWrite(ledYellow, LOW);                   // Set the ouput voltage at the Digital Pin for the Yellow LED to 0 V.
  digitalWrite(ledRed, HIGH);                     // Set the ouput voltage at the Digital Pin for the Red LED to 5 V.
}
