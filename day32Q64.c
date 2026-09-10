//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    

    if (scanf("%lld", &n) != 1) {
        return 0;
    }
    

    if (n < 0) {
        n = -n;
    }
    
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    int freq[10] = {0}; 
    
    
    long long temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }
    
    int max_freq = -1;
    int most_frequent_digit = 0;
    
    
    for (int i = 0; i <= 9; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }
    
    
    printf("%d\n", most_frequent_digit);
    
    return 0;
}