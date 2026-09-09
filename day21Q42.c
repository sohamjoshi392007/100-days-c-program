//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    long long n;

    scanf("%lld", &n);
    

    if (n <= 1) {
        printf("Not perfect number\n");
        return 0;
    }
    
    long long sum = 1; 
    

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
  
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    
 
    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}