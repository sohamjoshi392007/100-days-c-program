//Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200];
    int j = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            continue; 
        }
        

        str[j] = str[i];
        j++;
    }


    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}