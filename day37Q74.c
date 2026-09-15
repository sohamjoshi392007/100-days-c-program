//Q74: Find the transpose of a matrix.
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
    


    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            printf("%d", mat[i][j]);
            if(i < r - 1) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }
    
    return 0;
}