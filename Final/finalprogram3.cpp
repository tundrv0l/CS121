//  finalprogram3.cpp : This file contains all body code for program 3 of the final project. 
//
/* Final Program 3
   Parker Clark, 4/22/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);

int main() {
    int arr[5]; // Create array
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) { // Loop to input array elements
        cin >> arr[i];
    }
    bubbleSort(arr, 5); // Call bubbleSort function
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) { // Loop to output sorted array
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

void bubbleSort(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) { // Loop to iterate through array
        bool swapped = false; // Create swapped variable
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]); // Swap elements if they are out of order
                swapped = true;
            }
        }
        cout << "Step " << i+1 << ": "; // Output the current step
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        if (!swapped) {
            break;
        }
    }
}