// Square_And_Cube-CS121.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* Make Change Program 5
   Parker Clark, 2/10/23
   Spring 23 CS 121 Mr. Poole
*/
#include <iostream>

using namespace std;
int num;
int remaining(int amount, int denom); // Function prototype

int main(){
    cout << "Give me an amount of change number!: "; // Take input from the user
    cin >> num;
    int current = remaining(num, 50); // Half dollar call
    current = remaining(current, 25); // Quarter call
    current = remaining(current, 10); // Dime call
    current = remaining(current, 5); // Nickel call
    current = remaining(current, 1); // Penny call
    return 0;
}

int remaining(int amount, int denom){
    int num = amount / denom;
    int rem = amount % denom;
    cout << num << " of " << denom << " cents denominations" << endl;
    return rem;
}