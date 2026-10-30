//Q129: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(infile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(infile)) != EOF) {
        fputc(toupper(ch), outfile);
    }

    fclose(infile);
    fclose(outfile);

    printf("Successfully converted text to uppercase in output.txt\n");
    return 0;
}