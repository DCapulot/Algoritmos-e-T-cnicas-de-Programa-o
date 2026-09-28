#include <stdio.h>

int main() {
    int VET1[7], VET2[7];
    int MAT1[7][2];
    int i;

    // Leitura do vetor VET1
    printf("Digite os elementos do VET1:\n");
    for (i = 0; i < 7; i++) {
        printf("VET1[%d]: ", i);
        scanf("%d", &VET1[i]);
    }

    // Leitura do vetor VET2
    printf("\nDigite os elementos do VET2:\n");
    for (i = 0; i < 7; i++) {
        printf("VET2[%d]: ", i);
        scanf("%d", &VET2[i]);
    }

    // Montagem da matriz MAT1
    for (i = 0; i < 7; i++) {
        MAT1[i][0] = VET1[i]; // primeira coluna
        MAT1[i][1] = VET2[i]; // segunda coluna
    }

    // Impressao da matriz MAT1
    printf("\nMatriz MAT1:\n");
    for (i = 0; i < 7; i++) {
        printf("%4d %4d\n", MAT1[i][0], MAT1[i][1]);
    }

    return 0;
}

