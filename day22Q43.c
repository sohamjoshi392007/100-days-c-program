//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    long long n;
    
 
    scanf("%lld", &n);
    

    if (n <= 0) {
        printf("Not strong number\n");
        return 0;
    }
    

    long long factorials[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    
    long long original = n;
    long long sum = 0;
    long long temp = n;
    

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorials[digit];
        temp /= 10;
    }
    
  
    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}