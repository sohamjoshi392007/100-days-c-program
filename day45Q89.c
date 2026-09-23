//Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200];
    char target;
    int count = 0;


    scanf("%s", str);


    scanf(" %c", &target);


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}