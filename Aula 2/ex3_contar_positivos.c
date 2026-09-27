// Exercicio 3: Ler 4 numeros inteiros e informar
// quantos deles sao positivos.
#include <stdio.h>

int main() {
    int n1, n2, n3, n4, positivos = 0;

    printf("Digite quatro numeros inteiros: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > 0)
        positivos++;
    if (n2 > 0)
        positivos++;
    if (n3 > 0)
        positivos++;
    if (n4 > 0)
        positivos++;

    printf("Quantidade de positivos: %d\n", positivos);

    return 0;
}
