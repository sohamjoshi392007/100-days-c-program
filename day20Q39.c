//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    long long n;
    long long product = 1;
    
  
    scanf("%lld", &n);
    
  
    if (n < 0) {
        n = -n;
    }
    
 
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) { 
            product *= digit;
        }
        n /= 10;
    }
    

    printf("%lld\n", product);
    
    return 0;
}