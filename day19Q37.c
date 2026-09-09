//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    long long a, b;

    scanf("%lld %lld", &a, &b);
    
    long long num1 = a, num2 = b;
    

    while (num2 != 0) {
        long long temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
    long long gcd = num1;
    

    long long lcm = (a * b) / gcd;
    
  
    printf("%lld\n", lcm);
    
    return 0;
}