#include <iostream>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/19/2023
Purpose: This program calculates a mathematical series based on user input. It uses a for loop to compute the series, where each term alternates in sign and is based on the square of the current integer.
*/

int main() {
    int n;
    int series = 0;
    int sign = 1;

    // Prompt the user to enter an integer number
    cout << "Enter an integer number: ";
    cin >> n;

    // Calculate the series using a for loop
    for (int i = 1; i <= n; i++) {
        // Calculate each term in the series with alternating sign
        int term = sign * i * i;
        series += term;
        // Change the sign for the next term
        sign *= -1;
    }

    // Output the result
    cout << "The value of the series is: " << series << endl;

    return 0;
}
