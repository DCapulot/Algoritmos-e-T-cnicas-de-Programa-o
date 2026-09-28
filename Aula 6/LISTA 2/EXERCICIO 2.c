#include <stdio.h>

char conceito(float p1, float p2, float t) {
    float media;

    media = (p1 + p2 + t) / 3;

    if (media >= 9.0)
        return 'A';
    else if (media >= 7.5)
        return 'B';
    else if (media >= 6.0)
        return 'C';
    else
        return 'D';
}

int main() {
    float p1, p2, t;
    char resultado;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da P2: ");
    scanf("%f", &p2);

    printf("Digite a nota do trabalho: ");
    scanf("%f", &t);

    resultado = conceito(p1, p2, t);

    printf("Conceito final: %c\n", resultado);

    return 0;
}

