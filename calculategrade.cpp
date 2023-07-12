// CalculateGrade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* CalculateGrade Program 8
   Parker Clark, 3/2/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

int GetScore();
int printGrade(int score);

int main()
{
    int score = GetScore(); // Get the score from the user
    printGrade(score); //Print the grade
    return 0;
}

int GetScore() {
    int score;
    cout << "Enter the score: ";
    cin >> score;
    // Check if the grade is valid
    if (score < 0 || score > 100) {
        cout << "Invalid grade" << endl;
        return 1;
    }

    return score;
}

int printGrade(int score) {
    // Calculate the letter grade
    if (score >= 90) {
        cout << "Letter grade: A" << endl;
    }
    else if (score >= 80) {
        cout << "Letter grade: B" << endl;
    }
    else if (score >= 70) {
        cout << "Letter grade: C" << endl;
    }
    else if (score >= 60) {
        cout << "Letter grade: D" << endl;
    }
    else if (score >= 0) {
        cout << "Letter grade: F" << endl;
    }
    return 0;
}