//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n;
    
    // Read the value of n from input
    scanf("%d", &n);
    
    // Calculate the sum of first n natural numbers using the formula: n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    
    // Display the result in the exact requested format
    printf("Sum=%d\n", sum);
    
    return 0;
}