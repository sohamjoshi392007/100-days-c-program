//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    

    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = 0;
    

    for(int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }
    

    printf("%d\n", sum);
    
    return 0;
}