#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 9/29/2023
Course: CSC-131-002
Purpose: This program prompts a user to enter the size of a square matrix of type integer. This matrix is populated
with random numbers within the range of [10,99] during the execution. Then it will iterate through the matrix and
detect all the prime numbers in the matrix and outut the results.
*/

// Function to check if a number is prime
bool is_Prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i*i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}
int main() {
    int size;

    // Prompt user to enter the size of a square matrix of type integer
    cout << "Enter the size of your square matrix: ";
    cin >> size;

    // Error handling to prevent user from intering anything but a positive integer
    if (size <= 0) {
        cout << "Invalid matrix size. Please enter a positive integer." << endl;
        return 1;
    }

    int matrix[size][size]; // Declaring 2D array with input size x size

    // Populate the matrix with random numbers in the range [10, 99]
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 90 + 10; // Generates a random number in [10, 99]
        }
    }

    cout << "\nThe randomly generated matrix is: " << endl;

    // Display the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\nFound prime numbers: ";

    int primeCount = 0;

    // Detect and output prime numbers in the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (is_Prime(matrix[i][j])) {
                cout << matrix[i][j] << ", ";
                primeCount++;
            }
        }
    }

    // Detecting if there are prime numbers from above and outputting result
    if (primeCount == 0) {
        cout << "No prime numbers detected.";
    } else {
        cout << "\nThere are " << primeCount << " prime numbers detected." << endl;
    }

    return 0;
}

