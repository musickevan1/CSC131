#include <stdio.h>
#include <stdlib.h>

/*
Name: Evan Musick
Date: 11/17/2023
Course: CSC-131-002
Purpose: This program that will concatenate the contents of two text files and produce its output in a third file.
The names of the three files are specified on the command line.
*/

int main(int argc, char** argv) {
    FILE *source_fp1, *source_fp2, *concat_fp;
    int ch;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <1st_filename> <2nd_filename> <dest_filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((source_fp1 = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((source_fp2 = fopen(argv[2], "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    if ((concat_fp = fopen(argv[3], "wb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[3]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source_fp1)) != EOF)
        putc(ch, concat_fp);

    while ((ch = getc(source_fp2)) != EOF)
        putc(ch, concat_fp);
        
    fclose(source_fp1);
    fclose(source_fp2);
    fclose(concat_fp);

    return 0;
}