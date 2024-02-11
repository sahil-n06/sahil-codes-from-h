#include <stdio.h>

int co_factors(int n, int num[n][n]) {
    int det = 0;
    int temp[n - 1][n - 1];
    int sign = 1;

    if (n == 1) {
        return num[0][0];
    }

    for (int f=0;f<n;f++) {
        for (int i=1;i<n;i++) {
            int col = 0;
            for (int j=0; j<n;j++) {
                if (j != f) {
                    temp[i - 1][col++] = num[i][j];
                }
            }
        }
        int subDet = 1;
        for (int i=0;i<n-1;i++) {
            subDet *= temp[i][i];
        }
        det += sign * num[0][f] * subDet;
        sign = -sign;
    }

    return det;
}

int main() {
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    int num[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    int cofactor[n][n];
    int temp[n - 1][n - 1];
    int sign;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int row = 0, col = 0;
            for (int x = 0; x < n; x++) {
                for (int y = 0; y < n; y++) {
                    if (x != i && y != j) {
                        temp[row][col++] = num[x][y];
                        if (col == n - 1) {
                            col = 0;
                            row++;
                        }
                    }
                }
            }
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            cofactor[i][j] = sign * co_factors(n - 1, temp);
        }
    }
    int transposed[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        transposed[j][i] = cofactor[i][j];
    }
}

    printf("\nTranspose of the matrix : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",transposed[i][j]);
        }
        printf("\n");
    }
    //determinant se divide krrke print krrwalo bass
    return 0;
}
