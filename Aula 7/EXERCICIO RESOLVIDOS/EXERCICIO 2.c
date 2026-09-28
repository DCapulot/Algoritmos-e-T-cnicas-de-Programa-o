#include <stdio.h>

float media_conceito(float p1, float p2, float t) {
    float media = (p1 + p2 + t) / 3;

    if (media >= 9.0)
        printf("Conceito: A\n");
    else if (media >= 7.5)
        printf("Conceito: B\n");
    else if (media >= 6.0)
        printf("Conceito: C\n");
    else
        printf("Conceito: D\n");

    return media;
}

int main() {
    float p1, p2, t, media;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da P2: ");
    scanf("%f", &p2);

    printf("Digite a nota do Trabalho: ");
    scanf("%f", &t);

    media = media_conceito(p1, p2, t);

    printf("Media: %.2f\n", media);

    return 0;
}

