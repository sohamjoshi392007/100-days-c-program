//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b;
    

    scanf("%d %d", &a, &b);
    
    int num1 = a, num2 = b;
    
   
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    
   
    printf("%d\n", num1);
    
    return 0;
}