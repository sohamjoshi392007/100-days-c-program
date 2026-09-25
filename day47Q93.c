//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    int freq[26] = {0};
    int isAnagram = 1;


    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count character frequencies
    for (int i = 0; i < len1; i++) {
        freq[str1[i] - 'a']++; 
        freq[str2[i] - 'a']--; 
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}