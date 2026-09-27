// Exercicio 6: Ler um numero inteiro e, de acordo com a opcao
// escolhida, informar se e par/impar (opcao 1) ou se e
// um ano bissexto (opcao 2).
#include <stdio.h>

int main() {
    int numero, opcao;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Escolha uma opcao:\n");
    printf("1 - Saber se o numero e par ou impar\n");
    printf("2 - Saber se o numero corresponde a um ano bissexto\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        if (numero % 2 == 0)
            printf("%d e par\n", numero);
        else
            printf("%d e impar\n", numero);
    }

    if (opcao == 2) {
        if ((numero % 400 == 0) || (numero % 4 == 0 && numero % 100 != 0))
            printf("%d e bissexto\n", numero);
        else
            printf("%d nao e bissexto\n", numero);
    }

    return 0;
}
