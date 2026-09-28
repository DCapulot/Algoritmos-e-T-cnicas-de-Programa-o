#include <stdio.h>

float operacao(float a, float b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') {
        if (b != 0) return a / b;
        else return 0;
    }
    return 0;
}

int main() {
    float v1, v2;
    char operador;

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    printf("Digite o operador (+ - * /): ");
    scanf(" %c", &operador);

    printf("Resultado: %.2f\n", operacao(v1, v2, operador));

    return 0;
}

