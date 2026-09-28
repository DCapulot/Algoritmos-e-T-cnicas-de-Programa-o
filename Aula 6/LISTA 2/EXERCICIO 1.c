#include <stdio.h>


float calcular(float a, float b, char operador) {
    float resultado;

    switch (operador) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            if (b != 0)
                resultado = a / b;
            else
                resultado = 0; 
            break;
        default:
            resultado = 0; 
    }

    return resultado;
}

int main() {
    float x, y, res;
    char op;

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);

    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op); 

    res = calcular(x, y, op);

    printf("Resultado: %.2f\n", res);

    return 0;
}

