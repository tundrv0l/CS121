// Perimeter_And_Area-CS121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Pereimeter and Area Program 1
   Parker Clark, 1/28/23
   Fall 22 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;
int length, width, perimeter, area; // Declaring all of the variables. Since there are only 4 variables, I have chosen to declare them all on the same line

int main(){
    cout << "Enter the length of the rectangle: "; // Take input from the user for length using cin
    cin >> length;
    cout << "Enter the width of the rectangle: "; // Take input from the user for width using cin
    cin >> width;
    perimeter = 2 * (length + width); // Calculate the perimeter, since a rectangle has 4 sides, we multiply 2 by the sum of the length and width
    area = length * width; // Calculate the area, length times width
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}
