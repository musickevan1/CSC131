#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 10/20/2023
Course: CSC-131-002
Purpose: This program uses a function called rotate_left, which switches the values stored in three integer variables as follows:
the value stored in the first variable will move into the third, the value stored in the second variable will move into the first,
and the value stored in the third variable will move into the second. 
*/

void rotate_left(int* a, int* b, int* c) {
    int temp = *a; // Temp variable to store pointer a
    *a = *b; // Swapping pointer a and pointer b
    *b = *c; // Swapping pointer b and pointer c
    *c = temp; // Swapping pointer c with temp (old pointer a)
}

int main() {
    int i = 1, j = 2, k = 3; // Declare and initialize starting variables
    cout << "Before the rotation: i = " << i << ", " << "j = " << j << ", " << "k = " << k << endl; // Output variables before rotation

    rotate_left(&i, &j, &k); // Call function

    cout << "After the rotation: i = " << i << ", " << "j = " << j << ", " << "k = " << k << endl; // Output variables after rotation
}