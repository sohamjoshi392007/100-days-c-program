//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    double radius;
    
    
    scanf("%lf", &radius);
    
    
    double pi = 3.14159;
    
    
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;
    
    
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}