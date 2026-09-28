//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int lastSpaceIndex = -1;


    scanf("%[^\n]", name);

    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }


    if (lastSpaceIndex == -1) {
        printf("%s\n", name);
        return 0;
    }


    if (name[0] != ' ') {
        printf("%c.", toupper(name[0]));
    }


    for (int i = 0; i < lastSpaceIndex; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", toupper(name[i + 1]));
        }
    }


    printf(" %s\n", &name[lastSpaceIndex + 1]);

    return 0;
}