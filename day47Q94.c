//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[300];
    char currentWord[100];
    char longestWord[100];
    
    int i = 0, j = 0;
    int maxLength = 0;


    scanf("%[^\n]", str);

    while (1) {
   
        if (str[i] == ' ' || str[i] == '\0') {
            currentWord[j] = '\0'; 

            int currentLength = strlen(currentWord);

            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }

            j = 0; 


            if (str[i] == '\0') {
                break;
            }
        } else {
           
            currentWord[j] = str[i];
            j++;
        }
        i++;
    }

    printf("%s\n", longestWord);

    return 0;
}