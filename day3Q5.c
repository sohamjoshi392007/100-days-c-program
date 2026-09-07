//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    int celsius, fahrenheit;
    
    
    scanf("%d", &celsius);
    
    
    fahrenheit = (celsius * 9 / 5) + 32;
    
   
    printf("Fahrenheit=%d\n", fahrenheit);
    
    return 0;
}