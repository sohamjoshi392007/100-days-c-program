//Q97: Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];

    scanf("%[^\n]", name);

    if (name[0] != '\0' && name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }


    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");

    return 0;
}