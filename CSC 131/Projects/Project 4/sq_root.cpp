#include <iostream>
#include <cmath>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/19/2023
Purpose: Calculate the square root of a positive number using an iterative method, displaying each guess and the final result.
*/

int main() {
    double n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Cannot calculate the square root of a negative number." << endl;
        return 1;
    }

    double guess = 1.0; // Initial guess
    double epsilon = 1e-5; // The acceptable difference (scientific notation)

    while (fabs(guess * guess - n) >= epsilon) {
        cout << fixed; // Set to fixed-point notation
        cout.precision(5); // Set precision to 5 decimal places
        cout << guess << endl;
        guess = (guess + (n / guess)) / 2.0; // Psuedocode provided
    }

    cout << "Estimated square root of " << n << ": " << guess << endl;

    return 0;
}
