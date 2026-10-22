//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[2048];

    if (!fgets(line, sizeof(line), stdin)) return 0;


    line[strcspn(line, "\r\n")] = '\0';


    char *start = strchr(line, '=');
    char *ptr = start ? start + 1 : line;


    while (*ptr == ' ' || *ptr == '\t') {
        ptr++;
    }

    int new_word = 1;
    for (int i = 0; ptr[i] != '\0'; i++) {
        char c = ptr[i];
        if (isspace((unsigned char)c)) {
            new_word = 1;
            putchar(c);
        } else {
            if (new_word && isalpha((unsigned char)c)) {
                putchar(toupper((unsigned char)c));
                new_word = 0;
            } else if (!new_word && isalpha((unsigned char)c)) {
                putchar(tolower((unsigned char)c));
            } else {
                putchar(c);
            }
        }
    }
    printf("\n");

    return 0;
}