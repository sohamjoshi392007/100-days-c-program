//Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    

    scanf("%s", str);
    
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    int isPalindrome = 1; 
    
    while (start < end) {
     
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break; 
        }
        start++;
        end--;
    }
    
    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}