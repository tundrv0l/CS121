// bubblesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Bubble Sort Program 10
   Parker Clark, 3/25/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

void bubbleSort(int grades[], int size); // Prototype for our bubbleSort function
void printSteps(int grades[], int size); // Prototype for our printSteps function


int main()
{
    int array[10];
    cout << "Enter in 10 Grades:";
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i]; // Read in each grade to fill the array
    }

    bubbleSort(array, 10); // Call our bubbleSort function

    cout << "Sorted Grades: "; // Print out the FINAL sorted array
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


void printSteps(int grades[], int size) // Defines our printSteps function, pass in the new array after the bubblesort is done with a single pass
{
    for (int i = 0; i < size; i++)
    {
        cout << grades[i] << " "; // Print out each element of the nth sort step
    }
    cout << endl;
}

void bubbleSort(int grades[], int size)
{
    int temp;
    for (int i = 0; i < size; i++) // Body of our bubble sort
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (grades[j] > grades[j + 1]) // If the current element is greater than the next element, swap them
            {
                temp = grades[j];
                grades[j] = grades[j + 1]; // Swap the elements
                grades[j + 1] = temp; // Swap the elements
            }
            printSteps(grades, size); // Print out the array after each step of the bubble sort
        }
    }
}