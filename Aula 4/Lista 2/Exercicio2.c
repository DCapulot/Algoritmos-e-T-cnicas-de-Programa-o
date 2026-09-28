#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, media;

    printf("=== Cálculo de média dos alunos ===\n");
    printf("(Digite o código 234 para encerrar)\n\n");

    while (1) { // laço infinito até encontrarmos o código 234
        printf("Digite o código do aluno: ");
        scanf("%d", &codigo);

        if (codigo == 234) {
            printf("\nPrograma encerrado.\n");
            break; // interrompe o laço
        }

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("Aluno %d - Média: %.2f\n\n", codigo, media);
    }

    return 0;
}
