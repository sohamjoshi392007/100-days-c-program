//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int a, b, c;
 
    scanf("%d %d %d", &a, &b, &c);
    
   
    if (a == b && b == c) {
        printf("Equilateral\n");
    } 
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }
    
    return 0;
}