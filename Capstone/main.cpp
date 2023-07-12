//  main.cpp : This file defines and holds the driver and body of the capstone program. 
//
/* Capstone Program
   Parker Clark, 4/16/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>
#include <fstream>
#include <string>
#include "average.h" // Include average.h

using namespace std;

// Function prototypes
enum Seasons { Spring, Summer, Fall, Winter };
void printClothingRecommendation(Seasons season, int avgTemp);
void bubbleSort(double* temps, int n);

int main()
{
    // Read in the number of temperatures to be entered
    int n;
    cout << "How many temperatures would you like to enter?: ";
    cin >> n;

    // Create an array to hold the temperatures
    double* temps = new double[n];
    int menuChoice;
    cout << "Enter the input type:\n1 - Read from file\n2 - Console Input\n"; // Generate menu
    cin >> menuChoice;

    // If Statement and logic to determine which input method to use
    if (menuChoice == 1) // Input file method
    {
        // Read in the file name
        string fileName;
        cout << "Enter the file name: ";
        cin >> fileName;

        // Open the file
        ifstream inFile;
        inFile.open(fileName);

        if (!inFile) // If statement to check if the file is open
        {
            cout << "Unable to open file. Exiting program."; // Exit program if file cannot be opened
            return 0;
        }
        else
        {
            cout << "File opened successfully." << endl; // Print success message if file is opened
            // Read in the temperatures
            for (int i = 0; i < n; i++)
            {
                inFile >> temps[i];
            }

            // Close the file
            inFile.close();
        }
    }
    else if (menuChoice == 2) // Console input method
    {
        // Read in the temperatures
        for (int i = 0; i < n; i++)
        {
            cout << "Enter temperature " << i + 1 << ": ";
            cin >> temps[i];
        }
    }
    else
    {
        cout << "Invalid input. Exiting program."; // Exit program if invalid input
        return 0;
    }

    // Sort the temperatures
    bubbleSort(temps, n);
    cout << "High temperature: " << temps[n - 1] << endl;
    cout << "Low temperature: " << temps[0] << endl;
    cout << "Average temperature: " << average(temps, n) << endl;

    // Determine the season
    int seasonChoice;
    cout << "Enter the season:\n1 - Spring\n2 - Summer\n3 - Fall\n4 - Winter\n"; // Generate season choice
    cin >> seasonChoice;
    Seasons season; // Create season variable as a switch case
    switch (seasonChoice) // Switch statement to determine which season is being used
    {
    case 1:
        season = Spring;
        break;
    case 2:
        season = Summer;
        break;
    case 3:
        season = Fall;
        break;
    case 4:
        season = Winter;
        break;
    default:
        cout << "Invalid input. Exiting program."; // Exit program if invalid input
        return 1;
    }

    printClothingRecommendation(season, average(temps, n));

    delete[] temps; // Delete the array
    
    return 0;
}

void printClothingRecommendation(Seasons season, int avgTemp) // Function to print clothing recommendations
{
    switch (season) // Switch statement to determine which season is being used
    {
    case Spring:
        if (avgTemp > 65)
        {
            cout << "Pack something breathable, with light layers." << endl;
        }
        else
        {
            cout << "Grab a heavy jacket, just in case." << endl;
        }
        break;
    case Summer:
        if (avgTemp > 80)
        {
            cout << "Pack bright colors, and wear little layers." << endl;
        }
        else
        {
            cout << "Might wanna grab something long-sleeved." << endl;
        }
        break;
    case Fall:
        if (avgTemp > 60)
        {
            cout << "Pack a lighter jacket/flannel!" << endl;
        }
        else
        {
            cout << "Pack heavy, with multiple layers!" << endl;
        }
        break;
    case Winter:
        if (avgTemp > 32)
        {
            cout << "Pack warm! Jacket is a must!" << endl;
        }
        else
        {
            cout << "Pack heavy winter gear, multiple layers are needed!" << endl;
        }
        break;
    default:
        cout << "Invalid input. Exiting program."; // Exit program if invalid input
        return;
    }
}

void bubbleSort(double* temps, int n) // Function to sort the array
{
    for (int i = 0; i < n - 1; i++) // Bubble sort algorithm
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (temps[j] > temps[j + 1])
            {
                double temp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp;
            }
        }
    }
}