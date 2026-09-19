//Q82: Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[1000];
    

    if (scanf("%999[^\n]", str) != 1) {
        return 0;
    }
    

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}