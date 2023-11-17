#include <iostream>
#include <cstdlib>
using namespace std;

/*
Name: Evan Musick
Date: 11/10/2023
Course: CSC-131-002
Purpose: This program reads an integer n and n numbers from the user, calculates the average of the numbers, and prints it. It uses dynamic memory allocation to store the numbers.
*/

int main() {
    int n;  // The number of numbers to read
    float sum = 0.0, avg;  // The sum of the numbers and their average
    int* array = (int*) malloc(n * sizeof(int));  // Dynamically allocated array to store the numbers

    cout << "Enter an integer: ";
    cin >> n;  // Read the number of numbers
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; ++i) {
        cin >> array[i];  // Read each number
        sum += array[i];  // Add the number to the sum
    }

    avg = sum / n;  // Calculate the average
    cout << "The average is: " << avg << endl;  // Print the average

    free(array);  // Deallocate the array
    return 0;
}
