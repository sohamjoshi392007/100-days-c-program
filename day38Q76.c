//Q76: Check if a matrix is symmetric.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }


    if (r != c) {
        printf("False\n");
        return 0;
    }

    bool isSymmetric = true;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}