#include <stdio.h>

int main() {
    int A[4][4], T[4][4];
    int i, j;

    // Leitura da matriz A
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calculo da transposta
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Impressao da matriz transposta
    printf("\nMatriz Transposta:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}

