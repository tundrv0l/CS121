// GradeAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* GradeAverage Program 6
   Parker Clark, 2/18/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function that prints a row of asterisks to the top and bottom of the output
void printBorder();
double average(int sum, int count);
const int COUNT = 5;

int main() {
  // Open the input file
  ifstream inputFile("grades.txt");

  // Check if the file opened successfully
  if (!inputFile) {
    cerr << "Unable to open input file" << endl;
    return 1;
  }
  else {
      cout << "File opened successfully" << endl;
  }
  // Read the student's first and last name from the file
  string firstName, lastName;
  inputFile >> firstName >> lastName;

  // Read the 5 grades from the file
  double grades[5];
  for (int i = 0; i < COUNT; i++) {
    inputFile >> grades[i];
  }

  // Close the input file
  inputFile.close();

  // Calculate the average
  double sum = 0;
  for (int i = 0; i < COUNT; i++) { 
    sum += grades[i];;
  }

  // Print the output
  printBorder();
  cout << "Student name: " << firstName << " " << lastName << endl;
    for (int i = 0; i < 5; i++) { // A For loop to get each grade
        cout << "Grade " << i + 1 << ": " << grades[i] << endl;
    }
  cout << "Average grade: " << average(sum, COUNT) << endl;
  printBorder();

  // Open the output file
  ofstream outputFile("output.txt");

  // Check if the file opened successfully
  if (!outputFile) {
    cerr << "Unable to open output file" << endl;
    return 1;
  }

  // Write the output to the output file
  outputFile << "******************************" << endl;
  outputFile << "Student name: " << firstName << " " << lastName << endl;
    for (int i = 0; i < 5; i++) { // A For loop to get each grade
        outputFile << "Grade " << i + 1 << ": " << grades[i] << endl;
    }
  outputFile << "Average grade: " << average(sum, COUNT) << endl;
  outputFile << "******************************" << endl;

  // Close the output file
  outputFile.close();

  return 0;
}

// printBorder function definition
void printBorder() { 
  cout << "******************************" << endl;
}

// average function definition
double average(int sum, int count) {
    return sum / count;
}