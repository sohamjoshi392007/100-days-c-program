//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;
    

    scanf("%d %d", &a, &b);
    

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b; 

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);
    
    return 0;
}
