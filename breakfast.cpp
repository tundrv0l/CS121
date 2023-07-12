// breakfast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Breakfast Program 7
   Parker Clark, 2/26/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }; // Declare our switch statement 

int main()
{
    int day = 0;
    Weekday current = Monday; // set current to Monday
    cout << "Enter the day of the week (0-6): ";
    cin >> day; // get day from user
    switch (day) // Houses our switch statement
    {
    case Monday:
        cout << "Today is Monday, make some crossiants!";
        break;
    case Tuesday:
        cout << "Today is Tuesday, make some cinnamon rolls!";
        break;
    case Wednesday:
        cout << "Today is Wednesday, make some eggs! ";
        break;
    case Thursday:
        cout << "Today is Thursday, make some scones!";
        break;
    case Friday:
        cout << "Today is Friday, make some pancakes!";
        break;
    case Saturday:
        cout << "Today is Saturday, make some waffles!";
        break;
    case Sunday:
        cout << "Today is Sunday, make some bacon!";
        break;
    default:
        cout << "Error! Invalid Day!";
        break;
    }
    cout << endl;
    return 0;
}