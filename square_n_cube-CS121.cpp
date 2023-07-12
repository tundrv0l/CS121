// Square_And_Cube-CS121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Square and Cube Program 2
   Parker Clark, 1/28/23
   Spring 23 CS 121 Mr. Poole
*/
#include <iostream>

using namespace std;
int num, square, cube;

int main(){
    cout << "Give me a number!: "; // Take input from the user
    cin >> num;
    square = num * num; // Multiply the number by itself to get the square and cube respectively
    cube = num * num * num;
    cout << "The square of " << num << " is " << square << endl; // Print the results to the console
    cout << "The cube of " << num << " is " << cube << endl;

    return 0;
}