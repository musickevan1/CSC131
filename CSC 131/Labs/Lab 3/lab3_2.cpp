/*
 Author: Evan Musick
Course: CSC 131-002
Date: 9/8/2023
Purpose: This program asks a user to enter 4 integer numbers, w, x, y, z and then evaluates 3 conditions.
*/

#include <iostream>
using namespace std;

int main()
{
    int w, x, y, z;
    cout << "Enter 4 integers (w x y z) : ";
    cin >> w >> x >> y >> z;

    // Condition 1: Check if x is less than w, y, and z
    if (x < w && x < y && x < z)
    {
        cout << "Condition 1 is true." << endl;
    } else {
        cout << "Condition 1 is false." << endl;
    }

    // Condition 2: Check if the sum of w and x is less than or equal to the sum of y and z
    if (w + x <= y + z)
    {
        cout << "Condition 2 is true." << endl;
    } else {
        cout << "Condition 2 is false." << endl;
    }

    // Condition 3: Check if all four numbers (w, x, y, z) are even
    if (w % 2 == 0 && x % 2 == 0 && y % 2 == 0 && z % 2 == 0) {
        cout << "Condition 3 is true." << endl;
    } else {
        cout << "Condition 3 is false" << endl;
    }

}