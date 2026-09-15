//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c;
    

    scanf("%d %d", &r, &c);
    
    int mat[100][100]; 
    int rowSum[100] = {0}; 
    

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j]; 
        }
    }
    

    for(int i = 0; i < r; i++) {
        printf("%d", rowSum[i]);
        if(i < r - 1) {
            printf(" "); 
        }
    }
    printf("\n");
    
    return 0;
}