//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, remainder;
    long long sum = 0;
    int digits = 0;
    

    scanf("%d", &n);
    original = n;
    

    int temp = n;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }
    
 
    temp = n;
    while (temp > 0) {
        remainder = temp % 10;
        
        
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        
        temp /= 10;
    }
    

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}