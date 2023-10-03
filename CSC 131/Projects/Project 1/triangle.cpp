#include <iostream>
#include <math.h>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 8/29/2023
Purpose: This program computes the area and perimeter of a right triangle.
*/

int main (void)
{
    // Declaring Variables
    int legA;
    int legB;
    int legC;
    int area;
    int perimeter;

    // Prompting User to Enter Leg Length Values
    cout << "Enter the value of leg a: ";
    cin >> legA;
    
    cout << "Enter the value of leg b: ";
    cin >> legB;

    // Calculating the Area of the Triangle
    area = 0.5 * legA * legB;
    cout << "The area of the triangle is " << area << endl;
    
    // Calculating legC to then Calculate Perimeter
    legC = sqrt((legA*legA)+ (legB*legB));
    perimeter = legA + legB + legC;
    cout << "The perimeter of the triangle is " << perimeter << endl;

    return 0;
}