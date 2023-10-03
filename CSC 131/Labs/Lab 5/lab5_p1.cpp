#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 9/22/2023
Course: CSC-131-002
Purpose: This program asks the user to enter a sentence ended by a period and prints out the number
of times each character appears in the sentence, only for the characters that occur at least once.
Uppercase and lowercase versions of a letter should be counted toward the same letter.
*/

int main() {
    const int ALPHABET_SIZE = 26;
    int occurrences[ALPHABET_SIZE] = {0}; // Initialize an array to store character occurrences

    cout << "Enter a sentence (end by '.'): ";
    char input;

    // Read characters until a period ('.') is encountered
    while (cin.get(input) && input != '.') {
        char lowercaseChar = tolower(input); // Convert the input character to lowercase
        
        // Check if the character is a valid lowercase letter
        if (lowercaseChar >= 'a' && lowercaseChar <= 'z') {
            occurrences[lowercaseChar - 'a']++; // Increment the corresponding element in the occurrences array
        }
    }

    // Print the occurrences of each letter that appeared at least once
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (occurrences[i] > 0) {
            char letter = 'a' + i; // Get the corresponding letter
            cout << "Occurrences of '" << letter << "': " << occurrences[i] << endl;
        }
    }

    return 0;
}
