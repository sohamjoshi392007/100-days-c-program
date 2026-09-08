//Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    
   
    scanf("%d", &n);
    

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
       
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}