//Q50: Write a program to print the following pattern:
/*
Output 1:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main() {
    int rows = 5;
    
   
    for (int i = 1; i <= rows; i++) {
     
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        
   
        for (int j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        
        
        printf("\n");
    }
    
    return 0;
}