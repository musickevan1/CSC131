#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 10/22/2023
Course: CSC-131-002
Purpose: This program implements four of the string library functions using pointers: strcpy (string copy), strcat
(string concatenate), strcmp (string compare), and strlen (string length). First, the program will ask the user to 
enter two strings with a maximum of 50 characters each. The program will then output the length of each string. 
Then, it will output which string comes first alphabetically. The program will then copy string 1 into string 2 and 
output the two strings. Finally, the program will add string 1 to string 2 and print the two strings again. 
*/

// Function to calculate length of string
int strlen(char *str) {
    char *s = str;
    while (*s)
        ++s;
    return s - str;
}

// Function to copy string
char* strcpy(char *destination, const char *source) {
    char *start = destination;
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';  // add '\0' at the end
    return start;
}

// Function to concatenate strings
char* strcat(char *destination, const char *source) {
    char *start = destination;
    while (*destination)
        destination++;
    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';  // add '\0' at the end
    return start;
}

// Function to compare strings
int strcmp(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0') {
        return -1;
    } else if (*str2 == '\0') {
        return 1;
    }
    return 0;
} 

int main() {
    const int maxStringLength = 50;
    char str1[maxStringLength], str2[maxStringLength], temp[maxStringLength];

    cout << "Please enter the first string: ";
    cin >> str1;

    cout << "Please enter the second string: ";
    cin >> str2;

    cout << "The length of string 1 is: " << strlen(str1) << "\n";
    cout << "The length of string 2 is: " << strlen(str2) << "\n";

    int res = strcmp(str1, str2);
    
    if (res == 0)
        cout << "The two strings are the same alphabetically.\n";
    else if (res < 0)
        cout << "String 1 comes before string 2 alphabetically.\n";
    else
        cout << "String 2 comes before string 1 alphabetically.\n";

    strcpy(temp, str2); // save original str2

    strcat(str2, str1);
    
    cout << "String 1 after concatenation: " << str1 << "\n";
    cout << "String 2 after concatenation: " << str2 << "\n";

    strcpy(str2, str1);

    cout << "String 1 after copying: " << str1 << "\n";
    cout << "String 2 after copying: " << str2 << "\n";

    return 0;
}