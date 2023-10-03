#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 9/22/2023
Course: CSC-131-002
Purpose: This program will ask the user to input an age from 1-100,
and then will tally how many people are in each age group.
*/

int main() {
    const int ageRange = 100; // Define the maximum age range
    int ageCounts[ageRange] = {0}; // Initialize an array to store age counts

    int age;
    while (true) {
        cout << "Please input an age from one to 100, put -99 to stop: " << endl;
        cin >> age;

        if (age == -99) {
            break; // Exit the loop when -99 is entered
        }

        if (age >= 1 && age <= ageRange) {
            ageCounts[age - 1]++; // Increment the count for the entered age
        } else {
            cout << "Invalid age! Please enter an age between 1 and 100." << endl;
        }
    }

    // Display the age counts
    for (int i = 0; i < ageRange; ++i) {
        if (ageCounts[i] > 0) {
            cout << "The number of people " << (i + 1) << " years old is " << ageCounts[i] << endl;
        }
    }

    return 0;
}
