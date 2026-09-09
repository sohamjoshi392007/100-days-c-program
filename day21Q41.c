//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    long long n;
    
    
    scanf("%lld", &n);
    
  
    if (n >= 0 && n < 10) {
        printf("%lld\n", n);
        return 0;
    }
    
    long long temp = n;
    long long last = n % 10;
    long long divisor = 1;
    

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    
    long long first = temp; 
    long long middle = (n % divisor) / 10; 
    
  
    long long result = last * divisor + middle * 10 + first;
    
   
    printf("%lld\n", result);
    
    return 0;
}