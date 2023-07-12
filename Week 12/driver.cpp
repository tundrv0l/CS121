// driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Headers Program 12
   Parker Clark, 4/10/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>
#include "squared.h"
#include "cubed.h"
#include "perimeter.h"
#include "area.h"

using namespace std;

int main()
{
// Initialize input variables
int a, b, length, width;
cout << "Enter number to square: "; // Prompt user for a to square
cin >> a; // read a


cout << "Enter number to cube: "; // Prompt user for b to cube
cin >> b; // read b

cout << "Enter length: "; // Prompt user for length
cin >> length; // read length
cout << "Enter width: "; // Prompt user for width
cin >> width; // read width

cout << squared(a) << endl; // squared function call
cout << cubed(b) << endl; // cubed function call
cout << perimeter(length, width) << endl; // perimeter function call
cout << area(length, width) << endl; // area function call

return 0;
}