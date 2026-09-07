//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    
    // Read two integers from input
    scanf("%d %d", &a, &b);
    
    // Calculate the operations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b; // Integer division
    
    // Display the results in the exact requested format
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    
    return 0;
}