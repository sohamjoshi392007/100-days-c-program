//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
#include <stdbool.h>

int main() {
    long long n;
    

    scanf("%lld", &n);
    
    int first = 1; 
    
    
    for (long long i = 2; i <= n; i++) {
        bool is_prime = true;
        

        for (long long j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        
     
        if (is_prime) {
            if (!first) {
                printf(" ");
            }
            printf("%lld", i);
            first = 0;
        }
    }
    

    printf("\n");
    
    return 0;
}