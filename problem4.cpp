// problem7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Midterm Problem 7
   Parker Clark, 3/18/23
   Spring 23 CS 121 Mr. Poole
*/
# include <iostream>
using namespace std;

int main() {

    char op;
    float num1, num2, squarenum;

    cout << "Please make a selection: \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 to square a number \n Enter your choice: ";
    cin >> op;

    if (op =='5')
    {
        cout << "Enter a number: ";
        cin >> squarenum;
    }
    else
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    switch(op) {

    case '1':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '2':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '3':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '4':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    
    case '5':
        cout << squarenum << " squared is " << squarenum * squarenum;
        break;

    default:
        cout << "Error! unknown operator!";
        break;
    }

    return 0;
}
