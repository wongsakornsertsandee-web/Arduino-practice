#include <Arduino.h> // Include the Arduino library for serial communication

int sum = 0; // Initialize an integer variable to store the sum
int data_1 = 1; // Initialize an integer variable with the value 1
int data_2 = 2; // Initialize an integer variable with the value 2


void setup () {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  
  Serial.println("Setup complete. Starting loop...");

  Serial.print("Sum: "); Serial.println(sum); // Print the initial sum
  Serial.print("Data 1: "); Serial.println(data_1); // Print the value of data_1
  Serial.print("Data 2: "); Serial.println(data_2); // Print the value of data_2  


  sum = data_1 + data_2; // Calculate the sum of data_1 and data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum
  sum = data_1 - data_2; // Calculate the difference of data_1 and data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum
  sum = data_1 * data_2; // Calculate the product of data_1 and data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum
  sum = data_1 / data_2; // Calculate the quotient of data_1 and data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum
  sum = data_1 % data_2; // Calculate the remainder of data_1 divided by data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum
  sum = data_1 & data_2; // Calculate the bitwise AND of data_1 and data_2
  Serial.print("Total Sum: "); Serial.println(sum); // Print the new sum

}

void loop () {
  // Your main code here
}
