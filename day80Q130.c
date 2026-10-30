//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
 
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open text.txt\n");
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    char ch;


    while ((ch = fgetc(file)) != EOF) {
        char lower = tolower(ch);
        

        if (isalpha(lower)) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }


    fclose(file);


    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}