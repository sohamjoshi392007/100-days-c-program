//Q57: Find the sum of array elements.
#include <stdio.h>

int main() {
    int n;
    
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    long long sum = 0;
    long long current;
    
   
    for (int i = 0; i < n; i++) {
        scanf("%lld", &current);
        sum += current;
    }
    
  
    printf("%lld\n", sum);
    
    return 0;
}