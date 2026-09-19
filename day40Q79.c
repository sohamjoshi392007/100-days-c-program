//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    

    if (scanf("%d %d", &rows, &cols) != 2) return 0;
    
    int matrix[rows][cols];
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    

    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {

            int r = (d < rows) ? d : rows - 1;
            int c = d - r;
            
            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            
            int c = (d < cols) ? d : cols - 1;
            int r = d - c;
            
            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
    
    return 0;
}