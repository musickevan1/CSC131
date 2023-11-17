#include <stdio.h>
#include <stdlib.h>

/*
Name: Evan Musick
Date: 11/17/2023
Course: CSC-131-002
Purpose: This program calculates and displays the size (in bytes) of a text file specified as a command-line argument.
*/

int main(int argc, char** argv) {
    // Check if a file name is provided as a command-line argument
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Open the file in text mode
    FILE* file = fopen(argv[1], "r");
    
    // Check if the file was successfully opened
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Count the number of characters in the file
    int characterCount = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        characterCount++;
    }

    // Close the file
    fclose(file);

    // Print the size of the file
    printf("Size of %s: %d bytes\n", argv[1], characterCount);

    return EXIT_SUCCESS;
}
