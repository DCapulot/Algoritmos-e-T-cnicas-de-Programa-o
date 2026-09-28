#include <stdio.h>

int main() {
    int A[4][6], B[4][6], C[4][6];
    int i, j;


    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("\nDigite os elementos da matriz B:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("\nMatriz C (A + B):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


