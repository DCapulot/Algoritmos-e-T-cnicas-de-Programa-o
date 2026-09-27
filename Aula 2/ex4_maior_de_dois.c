// Exercicio 4: Ler dois numeros inteiros (N1, N2) e
// retornar o maior deles, usando if-else.
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
        printf("Maior: %d\n", n1);
    else
        printf("Maior: %d\n", n2);

    return 0;
}
