#include <iostream>
using namespace std;

/*
 Author: Evan Musick
Course: CSC 131-002
Date: 8/29/2023
Purpose: This program will calculate and print out: the diameter of the circle, the 
circumference of the circle, the area of the circle, the perimeter of the square, the area of the 
square, and the difference between the area of the square and the area of the circle
*/

int main (void)
{
    // Declaring Variables
    const float PI = 3.14;
    int radius;
    double diameterCir;
    double circumferenceCir;
    double areaCir;
    double areaSqr;
    double perimeterSqr;
    double difference;

    // Prompting User for Radius
    cout << "Enter the value of the radius: ";
    cin >> radius;

    // Calculating the Diameter of the Circle
    diameterCir = radius * 2;
    cout << "The diameter of the circle is: " << diameterCir << endl ;

    // Calculating the Circumference of the Circle:
    circumferenceCir = 2 * PI * radius;
    cout << "The circumference of the circle is: " << circumferenceCir << endl ;

    // Calculating the Area of the Circle
    areaCir = PI * (radius * radius);
    cout << "The area of the circle is: " << areaCir << endl;

    // Calculating the Perimeter of the Square
    perimeterSqr = 4 * diameterCir;
    cout << "The perimeter of the square is: " << perimeterSqr << endl;

    // Calculating the Area of the Square
    areaSqr = diameterCir * diameterCir;
    cout << "The area of the square is: " << areaSqr << endl;

    // Calculating the Difference Between the Area of the Square and the Circle
    difference = areaSqr - areaCir;
    cout << "The difference between the area of the square and the circle is: " << difference << endl;
}