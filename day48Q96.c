//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

// Helper function: sub-string/word ko reverse karne ke liye
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[300];
    int start = 0;

    // Read full sentence including spaces
    scanf("%[^\n]", str);

    int len = strlen(str);

    for (int i = 0; i <= len; i++) {
        // Space ya Null-character par word end hota hai
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1; // Agle word ka start index set karein
        }
    }

    printf("%s\n", str);

    return 0;
}