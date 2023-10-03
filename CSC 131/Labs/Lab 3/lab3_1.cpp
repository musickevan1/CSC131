/*
 Author: Evan Musick
Course: CSC 131-002
Date: 9/8/2023
Purpose: This program will read in four values and write them out in ascending order.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter 4 integers (a b c d): ";
    cin >> a >> b >> c >> d;

    if (a > b ) {
        int temp = a;
        a = b;
        b = temp;
    }  
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    } 
    if (a > d) {
        int temp = a;
        a = d;
        d = temp;
    }
    
    if (b > c ) {
        int temp = b;
        b = c;
        c = temp;
    } 
     if (b > d) {
        int temp = b;
        b = d;
        d = temp;
    }

    if (c > d) {
        int temp = c;
        c = d;
        d = temp;
    }


    cout << "The integers in order: " << a << " " << b << " " << c << " " << d << endl;
}
