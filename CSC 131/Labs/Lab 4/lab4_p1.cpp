#include <iostream>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/15/2023
Purpose: This program performs a survey tally on beverages. The program prompts for the next person until
a sentinel value of -1 is entered to terminate the program. Each person participating in the survey should 
choose their favorite beverage from the following list:
[1. Coffee 2. Tea 3. Coke 4. Orange Juice]
*/

#include <iostream>
using namespace std;

int main() {
    // Display a welcome message and menu
    cout << "Welcome to the Beverage Ordering System!" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "\t \tMENU:" << endl;
    cout << "1. Coffee 2. Tea 3. Coke 4. Orange Juice" << endl;
    cout << "-----------------------------------------" << endl;

    // Define constants for beverage options
    const int COFFEE = 1;
    const int TEA = 2;
    const int COKE = 3;
    const int ORANGE_JUICE = 4;

    int beverage;
    int numSurveyed = 0; // Counter for the number of people surveyed
    int coffeeCount = 0, teaCount = 0, cokeCount = 0, orangejuiceCount = 0;

    while (true) {
        // Prompt for user input and explain the choices
        cout << "Please input the favorite beverage of person #" << numSurveyed + 1 << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program: ";
        cin >> beverage;

        // Check if the user wants to exit
        if (beverage == -1) {
            break;
        }

        // Use a switch statement to tally the survey results based on user input
        switch (beverage) {
            case COFFEE:
                coffeeCount++;
                break;

            case TEA:
                teaCount++;
                break;

            case COKE:
                cokeCount++;
                break;

            case ORANGE_JUICE:
                orangejuiceCount++;
                break;

            default:
                cout << "Invalid option." << endl;
                continue; // Continue to the next iteration if the input is invalid
        }

        // Increment the number of people surveyed
        numSurveyed++;
    }

    // Display the survey results
    cout << "The total number of people surveyed is " << numSurveyed << ". The results are as follows:" << endl;
    cout << "Beverage         Number of Votes" << endl;
    cout << "*************************************" << endl;
    cout << "Coffee:           " << coffeeCount << endl;
    cout << "Tea:              " << teaCount << endl;
    cout << "Coke:             " << cokeCount << endl;
    cout << "Orange Juice:     " << orangejuiceCount << endl;

    return 0;
}