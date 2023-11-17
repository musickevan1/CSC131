#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 10/6/2023
Course: CSC-131-002
Purpose: Calculate the area and volume of a rectangular prism
*/

// Function to calculate the surface area of the prism
int compute_area(int l, int w, int h) {
    int area = (2 * l * h) + (2 * l * w) + (2 * w * h);
    return area;
}

// Function to calculate the volume of the prism
int compute_volume(int l, int w, int h) {
    int volume = l * w * h;
    return volume;
}

int main() {
    int l, w, h;

    // Prompt the user to enter dimensions
    cout << "Enter the dimensions of the rectangular prism (l, w, h): ";
    cin >> l >> w >> h;

    // Input validation: Check if dimensions are positive integers
    while (l <= 0 || w <= 0 || h <= 0) {
        cout << "Dimensions must be positive integers greater than 0." << endl;
        cout << "Enter the dimensions of the rectangular prism (l, w, h): ";
        cin >> l >> w >> h;
    }

    // Calculate and display the area and volume of the prism
    cout << "The area of the prism is: " << compute_area(l, w, h) << endl;
    cout << "The volume of the prism is: " << compute_volume(l, w, h) << endl;

    return 0;
}
