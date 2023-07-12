//  finalprogram1 : This file contains all body code for program 1 of the final project. 
//
/* Final Program 1
   Parker Clark, 4/22/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

// Function prototypes/ Variable declarations
enum Seasons { Spring, Summer, Fall, Winter };
void printAsterisks();

int main()
{
    
    bool isRainy;
    cout << "Is it raining?:\n0 - No\n1 - Yes\n"; // Generate raining conditional
    cin >> isRainy;

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

    printAsterisks(); // Print asterisks

    if (isRainy) // If isRainy = 1 (True), generate the corresponding output
    {
        switch (season)
        {
        case Spring:
            cout << "Wear a raincoat and loafers.";
            break;
        case Summer:
            cout << "Wear a raincoat and sandals.";
            break;
        case Fall:
            cout << "Wear a raincoat and some light layers!.";
            break;
        case Winter:
            cout << "Wear a raincoat and lots of layers!.";
            break;
        default:
            cout << "Invalid input. Exiting program."; // Exit program if invalid input
            return 1;
        }
    }
    else // ELSE, if isRainy = 0 (False), generate the corresponding output
    {
        switch (season)
        {
        case Spring:
            cout << "Wear a t-shirt and slacks!.";
            break;
        case Summer:
            cout << "Wear a t-shirt and shorts.";
            break;
        case Fall:
            cout << "Wear a flannel and jeans!.";
            break;
        case Winter:
            cout << "Wear a winter coat and layers!.";
            break;
        default:
            cout << "Invalid input. Exiting program."; // Exit program if invalid input
            return 1;
        }
    }

    printAsterisks();
    return 0;
}

void printAsterisks() // Function to print asterisks
{
    cout << "\n***************\n";
}