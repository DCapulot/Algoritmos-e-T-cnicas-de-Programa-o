
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char continuar;

    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("A média do aluno é: %.2f\n", media);

        printf("\nDeseja calcular a média de outro aluno? (s/n): ");
        scanf(" %c", &continuar); // espaço antes de %c para ignorar o ENTER anterior

    } while (continuar == 's' || continuar == 'S');

    printf("\nPrograma encerrado.\n");

    return 0;
}
