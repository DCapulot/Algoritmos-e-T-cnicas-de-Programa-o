// Exercicio 1: Ler dois numeros, somar e escrever o resultado
// somente se a soma for maior que 10.
#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    soma = a + b;

    if (soma > 10)
        printf("Soma = %d\n", soma);

    return 0;
}
