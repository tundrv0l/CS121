
// functions.cpp
// Parker Clark
// CS 121 SP 2023 Mr. Poole
//
//  Description: This program takes input from user and calls 4 functions to: Cube, Square, and give the perimeter and area of given inputs. 
//

#include <iostream>
using namespace std;

// Function Prototypes
int squared(int); // squared number function
int cubed(int); // cubed number function
int perimeter(int, int); // perimeter function
int area(int, int); // area function

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

// FUNCTIONS
int squared(int a) // takes integer a as argument
{
    int squared = a * a; // a squared
    
    return squared;
}

int cubed(int b) // takes integer b as argument
{
    int cubed = b * b * b; // b cubed
    
    return cubed;
}

int perimeter(int length, int width) // takes length and width as arguments
{
 int perimeter = 2 * (length + width); // perimeter of rectangle

 return perimeter;
}

int area(int length, int width) // takes the same length and width as the perimeter function
{
 int area = length * width; // area of rectangle

 return area;
}