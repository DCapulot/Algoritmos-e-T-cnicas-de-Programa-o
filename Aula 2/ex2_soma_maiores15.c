// Exercicio 2: Ler 3 numeros inteiros e mostrar a soma
// apenas dos que forem maiores que 15.
#include <stdio.h>

int main() {
    int n1, n2, n3, soma = 0;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > 15)
        soma += n1;
    if (n2 > 15)
        soma += n2;
    if (n3 > 15)
        soma += n3;

    printf("Soma dos maiores que 15: %d\n", soma);

    return 0;
}
