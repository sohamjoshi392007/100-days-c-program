//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    long long current;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    // Read each element on the fly and categorize it
    for (int i = 0; i < n; i++) {
        scanf("%lld", &current);
        
        if (current > 0) {
            positive_count++;
        } else if (current < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    
    // Print the final counts in the required format
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count);
    
    return 0;
}