//Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    

    if (scanf("%999[^\n]", str) != 1) {
        return 0;
    }
    
    int vowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
  
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    
    return 0;
}