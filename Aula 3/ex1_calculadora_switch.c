// Exercicio 1: Simular uma calculadora com as quatro operacoes
// (soma, subtracao, multiplicacao, divisao), usando switch.
// O usuario fornece dois numeros reais e escolhe a operacao.
#include <stdio.h>

int main() {
    float n1, n2, resultado;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (n2 == 0)
                printf("Erro: divisao por zero\n");
            else {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida\n");
    }

    return 0;
}
