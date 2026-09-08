//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    

    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++) {
        int odd_num = 2 * i - 1; 
        sum += odd_num;
    }
    
  
    printf("%lld\n", sum);
    
    return 0;
}