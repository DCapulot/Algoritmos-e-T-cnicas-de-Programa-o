// Exercicio 1: Ler a altura de uma pessoa e calcular
// o peso ideal usando peso_ideal = (72.7 * altura) - 58.
#include <stdio.h>

int main() {
    float altura, peso_ideal;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("Peso ideal: %.2f\n", peso_ideal);

    return 0;
}
