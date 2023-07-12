// Hello_World-CS121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Hello World Program 1
   Parker Clark, 1/21/23
   Fall 22 CS 121 Mr. Poole
*/

#include <iostream> // A preprocessor directive that tells the compiler to include the iostream file, which contains the code for the standard input/output stream objects

using namespace std; // A directive that tells the compiler to use the standard namespace, so we don't need to type "std::" infront of cout/cin

int main() { // The begging of the main function, which is the entry point of the program
    cout << "Hello World!" << endl; // we use cout here in order to print the "Hello World" string to the console; "Hello World" must be inside of the insertion operator (<<)
    cout << "My name is your name ." << endl; // endl is used to end the line and move to the next line, it can be used synonymously with '\n'
    return 0; // The return statement is used to return a value to the calling function, in this case, the main function
}