//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;


    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    int mat1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }


    if (scanf("%d %d", &r2, &c2) != 2) return 0;
    int mat2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

  
    if (r1 == r2 && c1 == c2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("%d%c", mat1[i][j] + mat2[i][j], (j == c1 - 1) ? '\n' : ' ');
            }
        }
    }

    return 0;
}