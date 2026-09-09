//Q30: Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, rev = 0;
    

    scanf("%d", &n);
    
   
    while (n > 0) {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    
   
    printf("%d\n", rev);
    
    return 0;
}