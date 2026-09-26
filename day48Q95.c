//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    char temp[400];


    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);


    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }


    strcpy(temp, str1);
    strcat(temp, str1);


    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}