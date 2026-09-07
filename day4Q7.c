//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;
    
    // Read two numbers from input
    scanf("%d %d", &a, &b);
    
    // Swap the numbers without using a third variable
    a = a + b; // a now becomes the sum of both numbers
    b = a - b; // b becomes the original value of a
    a = a - b; // a becomes the original value of b
    
    // Display the result in the exact requested format
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}