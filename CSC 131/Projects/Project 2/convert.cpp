#include <iostream>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/5/2023
Purpose: A program that reads an integer entered by the user and displays it in binary (base 2): 
*/

int main()
{
    // Initializing Variables
    int inputNum;
    int bit1, bit2, bit3, bit4, bit5;
    int hold1, hold2, hold3, hold4, hold5;
    int outputBinary;

    // Prompt User for Number Between 0-31
    cout << "Enter a number between 0 and 31: ";
    cin >> inputNum;

    // Calculate Number Inputted into Binary
    bit1 = inputNum % 2;
    hold1 = inputNum / 2;
    bit2 = hold1 % 2;
    hold2 = hold1 / 2;
    bit3 = hold2 % 2;
    hold3 = hold2 / 2;
    bit4 = hold3 % 2;
    hold4 = hold3 / 2;
    bit5 = hold4 % 2;


    // Output Result
    cout << "In binary, your number is: " << bit5 << bit4 << bit3 << bit2 << bit1 << endl;
}