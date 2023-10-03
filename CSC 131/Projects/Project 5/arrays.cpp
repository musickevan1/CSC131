#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 10/3/2023
Course: CSC-131-002
Purpose: This program asks the user to enter an NxM dimensional array containing single digit values (only the digits 
between 0 and 9) and counts the number of times each one of the 10 digits appears in the array.
*/

// Constant number of digits
const int NUM_DIGITS = 10;

// Function to count digit occurrences in an NxM array
int main() {
    int rows, columns;

    // Prompt for array dimensions
    cout << "Enter the number of rows and columns (NxM): ";
    cin >> rows >> columns;

    // Initialize arrays
    int digitCounter[NUM_DIGITS] = {0};
    int userArray[rows][columns];

    // Input and count digits
    for (int r = 0; r < rows; r++) {
        cout << "Enter row " << r << ": ";
        for (int c = 0; c < columns; c++) {
            cin >> userArray[r][c];
            digitCounter[userArray[r][c]]++;
        }
    }

    // Display digit counts
    cout << "Total counts for each digit:" << endl;
    for (int digit = 0; digit < NUM_DIGITS; digit++) {
        cout << "Digit " << digit << " occurs " << digitCounter[digit] << " times" << endl;
    }

    // Display digit counts in a 1D array
    cout << "Digit counts directly from the 1D array:" << endl;
    for (int digit = 0; digit < NUM_DIGITS; digit++) {
        cout << digitCounter[digit] << " ";
    }
    cout << endl;

    // Display the original 2D array
    cout << "Original 2D array entered by the user:" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < columns; c++) {
            cout << userArray[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
