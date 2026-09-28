#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("\nDiagonal principal:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\n");

    return 0;
}

