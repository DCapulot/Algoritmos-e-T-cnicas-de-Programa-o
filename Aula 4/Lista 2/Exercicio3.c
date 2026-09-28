#include <stdio.h>

int main() {
    int totalAlunos, codigo;
    float nota1, nota2, media;

    printf("Digite o número de alunos: ");
    scanf("%d", &totalAlunos);

    for (int i = 1; i <= totalAlunos; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite o código do aluno: ");
        scanf("%d", &codigo);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("Aluno %d (Código: %d) - Média: %.2f\n", i, codigo, media);
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}

