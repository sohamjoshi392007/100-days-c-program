//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main() {
   
    int counts[] = {1, 3, 5, 3, 1};
    int num_blocks = 5;
    

    for (int i = 0; i < num_blocks; i++) {
        
        for (int j = 0; j < counts[i]; j++) {
            printf("*\n");
        }
        
  
        if (i < num_blocks - 1) {
            printf("\n");
        }
    }
    
    return 0;
}
