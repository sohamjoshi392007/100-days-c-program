//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
   
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file sample.txt\n");
        return 1;
    }

    long long char_count = 0;
    long long word_count = 0;
    long long line_count = 0;
    int in_word = 0;
    int prev_char = 0;

    int c;
   
    while ((c = fgetc(file)) != EOF) {
        char_count++;

        if (c == '\n') {
            line_count++;
        }

        if (isspace(c)) {
            in_word = 0;
        } else {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        }
        prev_char = c;
    }


    if (char_count > 0 && prev_char != '\n') {
        line_count++;
    }

    
    fclose(file);

 
    printf("Characters: %lld\n", char_count);
    printf("Words: %lld\n", word_count);
    printf("Lines: %lld\n", line_count);

    return 0;
}