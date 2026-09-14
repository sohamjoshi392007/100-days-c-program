//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);
    
    int mat[100][100];
    

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    // 3. Print the matrix in a grid format
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d", mat[i][j]);
            if(j < c - 1) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }
    
    return 0;
}