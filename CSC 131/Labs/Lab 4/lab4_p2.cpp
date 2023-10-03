#include <iostream>
using namespace std;

/*
Author: Evan Musick
Course: CSC 131-002
Date: 9/15/2023
Purpose: This program asks the user to enter a sentence ended by a period, a question mark, or an
exclamation mark and prints out the number of space characters (spaces, new lines, tabs) in that sentence.
*/

int main() {
    char c;
    int spaceCount = 0;   // Counter for space characters
    int newLineCount = 0; // Counter for new line characters
    int tabCount = 0;     // Counter for tab characters

    cout << "Enter a sentence (end by '.' or '?' or '!'): " << endl;

    while (cin.get(c) && c!='.'&& c!='?' && c!= '!') {
        switch (c) {
            case ' ':
                spaceCount++;   // Increment space counter when a space character is encountered
                break;
            case '\n':
                newLineCount++; // Increment new line counter when a new line character is encountered
                break;
            case '\t':
                tabCount++;     // Increment tab counter when a tab character is encountered
                break;
        }
    }

    // Print the counts of different types of characters
    cout << "Number of space characters: " << spaceCount << endl;
    cout << "Number of new line characters: " << newLineCount << endl;
    cout << "Number of tabs: " << tabCount << endl;

    return 0;
}
