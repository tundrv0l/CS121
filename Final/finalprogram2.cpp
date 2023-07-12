//  finalprogram2 : This file contains all body code for program 2 of the final project. 
//
/* Final Program 2
   Parker Clark, 4/22/23
   Spring 23 CS 121 Mr. Poole
*/

#include <iostream>

using namespace std;

enum IceCreamFlavor { // Create enum for ice cream flavors
    CHOCOLATE,
    VANILLA,
    STRAWBERRY,
    BUTTER_PECAN
};

int main() {
    IceCreamFlavor favoriteFlavor; // Create variable for favorite flavor

    // Prompt the user for their favorite ice cream flavor
    cout << "What is your favorite ice cream flavor?" << endl;
    cout << "1. Chocolate" << endl;
    cout << "2. Vanilla" << endl;
    cout << "3. Strawberry" << endl;
    cout << "4. Butter Pecan" << endl;
    int flavorChoice;
    cin >> flavorChoice;

    // Set the user's favorite flavor based on their choice
    switch (flavorChoice) {
        case 1:
            favoriteFlavor = CHOCOLATE;
            break;
        case 2:
            favoriteFlavor = VANILLA;
            break;
        case 3:
            favoriteFlavor = STRAWBERRY;
            break;
        case 4:
            favoriteFlavor = BUTTER_PECAN;
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    // Prompt the user for their mood
    cout << "Are you having a good or bad day?" << endl;
    string mood;
    cin >> mood;

    // Output a message based on the user's mood and favorite flavor
    cout << endl;
    cout << "*****" << endl;
    if (mood == "bad") {
        cout << "I hope your day improves. Have a scoop of ";
        switch (favoriteFlavor) {
            case CHOCOLATE:
                cout << "chocolate";
                break;
            case VANILLA:
                cout << "vanilla";
                break;
            case STRAWBERRY:
                cout << "strawberry";
                break;
            case BUTTER_PECAN:
                cout << "butter pecan";
                break;
        }
    } else if (mood == "good") {
        cout << "Here are some other flavors you might like:" << endl; // Output a list of other flavors
        switch (favoriteFlavor) {
            case CHOCOLATE:
                cout << "- Chocolate with fudge sauce" << endl;
                cout << "- Chocolate chip cookie dough" << endl;
                cout << "- Chocolate peanut butter" << endl;
                cout << "- Chocolate almond" << endl;
                break;
            case VANILLA:
                cout << "- Vanilla with caramel sauce" << endl;
                cout << "- French vanilla" << endl;
                cout << "- Vanilla bean" << endl;
                cout << "- Vanilla chocolate chip" << endl;
                break;
            case STRAWBERRY:
                cout << "- Strawberry with whipped cream" << endl;
                cout << "- Raspberry sorbet" << endl;
                cout << "- Strawberry cheesecake" << endl;
                cout << "- Strawberry shortcake" << endl;
                break;
            case BUTTER_PECAN:
                cout << "- Butter pecan in a waffle cone" << endl;
                cout << "- Pralines and cream" << endl;
                cout << "- Butter pecan with chocolate sauce" << endl;
                cout << "- Butter pecan with caramel sauce" << endl;
                break;
        }
    } else {
        cout << "Invalid mood." << endl;
        return 1;
    }
    cout << "\n*****" << endl;

    return 0;
}
