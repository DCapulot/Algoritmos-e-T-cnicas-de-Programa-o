#include <stdio.h>

int main() {
    float total_vendido, salario_base = 1200, comissao, salario_bruto;

    printf("Digite o total vendido: ");
    scanf("%f", &total_vendido);

    comissao = total_vendido * 0.10;
    salario_bruto = salario_base + comissao;

    printf("Comissao: %.2f\n", comissao);
    printf("Salario bruto: %.2f\n", salario_bruto);

    return 0;
}
