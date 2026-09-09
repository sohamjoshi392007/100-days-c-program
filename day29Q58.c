//Q58: Find the maximum and minimum element in an array.
#include <stdio.h>

int main() {
    int n;
    

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    long long max, min;
    long long current;

    scanf("%lld", &current);
    max = current;
    min = current;
    
  
    for (int i = 1; i < n; i++) {
        scanf("%lld", &current);
        if (current > max) {
            max = current;
        }
        if (current < min) {
            min = current;
        }
    }
    
 
    printf("Max=%lld, Min=%lld\n", max, min);
    
    return 0;
}