#include <iostream>
#include <cstdlib>
using namespace std;

/*
Name: Evan Musick
Date: 11/9/2023
Course: CSC-131-002
Purpose: This program takes two strings from the user and performs one of two operations on them based on a command line argument.
The "-i" argument intersperses the characters of the two strings, and the "-w" argument widens the strings by inserting a '*' character between each character.
*/

// Function to calculate the length of a string
int strlen(const char *str) {
    const char *s = str;
    while (*s)
        ++s;
    return s - str;
}

// Function to compare two strings
int strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1;
        } else if (*str1 > *str2) {
            return 1;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 != '\0') {
        return -1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return 1;
    }
    return 0;
}

// Function to intersperse two strings
char* intersperse(const char* str1, const char* str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 + len2;
    char* result = (char*)malloc(len+1);
    char* newstr = result;

    // Intersperse characters from str1 and str2
    while (*str1 != '\0' && *str2!= '\0') {
        *newstr++ = *str1++;
        *newstr++ = *str2++;
    }

    // Append remaining characters from str1 and str2
    while (*str1 != '\0') *newstr++ = *str1++;
    while (*str2 != '\0') *newstr++ = *str2++;

    *newstr = '\0';
    return result;
}

// Function to widen two strings with '*'
char* widen_stars(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 + len2;
    char* result = (char*)malloc((len)*2);
    char* newstr = result;

    // Insert '*' between characters in str1
    while (*str1 != '\0') {
        *newstr++ = *str1++;
        *newstr++ = '*';
    }
    // Insert '*' between characters in str2
    while (*str2 != '\0') {
        *newstr++ = *str2++;
        *newstr++ = '*';
    }

    *newstr--;
    *newstr = '\0';
    return result;
}

int main(int argc, char* argv[]){
    // Check command line arguments
    if (argc != 2 || (strcmp(argv[1], "-i") != 0 && strcmp(argv[1], "-w") != 0)) {
        cout << "Invalid command line arguments" << endl;
        return 1;
    }

    char str1[31], str2[31];
    cout << "Please enter a string of maximum 30 characters: ";
    cin.getline(str1, 31);
    cout << "Please enter a string of maximum 30 characters: ";
    cin.getline(str2, 31);

    char* ns;
    // Perform the operation specified by the command line argument
    if (strcmp(argv[1], "-i") == 0) {
        ns = intersperse(str1, str2);
    } else {
        ns = widen_stars(str1, str2);
    }
    cout << ns << endl;
    free(ns);

    return 0;
}
