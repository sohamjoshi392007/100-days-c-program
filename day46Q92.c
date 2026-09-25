//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; 
    char result = '\0';

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            

            if (freq[index] > 0) {
                result = str[i];
                break; 
            }
            
          
            freq[index] = 1;
        }
    }

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating character\n");
    }

    return 0;
}