//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original, rev = 0;
 
    scanf("%d", &n);


    while (n > 0) {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    

    if (original == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}