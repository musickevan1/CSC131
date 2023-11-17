#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 11/10/2023
Course: CSC-131-002
Purpose: This program removes the filename from a given URL.
*/

// Function to remove the filename from a URL
void remove_filename(char* url) {
    char* p = url;
    // Start from the end of the string
    while (*p != '\0') {
        *p++;
    }
    // Move backwards until we find the first '/'
    while (*p != '/' && p != url) {
        p--;
    }
    // If we found a '/', replace it with a null character
    if (*p == '/') {
        *p = '\0';
    }
}

int main() {
    char url[] = "http://www.google.com/index.html";  // Initialize the URL
    cout << "Before: " << url << endl;  // Print the URL before modification
    
    remove_filename(url);  // Call the function to remove the filename

    cout << "After: " << url << endl;  // Print the URL after modification
    return 0;  // End the program
}
