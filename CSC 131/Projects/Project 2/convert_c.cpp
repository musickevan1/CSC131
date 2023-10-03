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
    int base;
    int outputBinary;

    // Prompt User for Number Between 0-31
    cout << "Enter a number between 0 and 31: ";
    cin >> inputNum;

    // Verifies Input is Between 0-31
    while (inputNum > 31 || inputNum < 0)
    {
        cout << "Invalid Number Entry." << endl;
        cout << "Enter a number between 0 and 31: ";
        cin >> inputNum;
    }

    // Prompt User for a Base Number Between 2-9
    cout << "Enter a base between 2 and 9: ";
    cin >> base;

    // Verifies Base is Between 2-9
    while (base > 9 || base < 2)
    {
        cout << "Invalid Base Entry." << endl;
        cout << "Enter a base between 2 and 9: ";
        cin >> base;
    }

    // Calculate Number Inputted into Binary
    bit1 = inputNum % base;
    hold1 = inputNum / base;
    bit2 = hold1 % base;
    hold2 = hold1 / base;
    bit3 = hold2 % base;
    hold3 = hold2 / base;
    bit4 = hold3 % base;
    hold4 = hold3 / base;
    bit5 = hold4 % base;


    // Output Result
    cout << "In binary, your number is: " << bit5 << bit4 << bit3 << bit2 << bit1 << endl;
}