// AverageArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Average Array Program 9
   Parker Clark, 3/25/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

void printGrades(int grades[], int size); // Protype for our printGrades function
const int NUM_GRADES = 5; // Constraint on our array size, will always be constant

int main()
{
    int grades[NUM_GRADES]; // Declare our array, same size as our constraint
    for (int i = 0; i < NUM_GRADES; i++)
    {
        cout << "Enter a grade " << i+1 << ":"; // Read in each grade to fill the array
        cin >> grades[i];
    }

    printGrades(grades, NUM_GRADES); // Call our printGrades function
    return 0;
}

void printGrades(int grades[], int size) // Defines our printGrades function
{
    cout << "Grades: ";
    for (int i = 0; i < size; i++) // Prints out each grade in the array
    {
        cout << grades[i] << " ";
    }
    cout << endl;
}