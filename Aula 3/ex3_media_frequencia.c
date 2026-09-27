// Exercicio 3: Ler duas notas de Calculo, o numero de aulas
// ministradas e o numero de aulas assistidas. Calcular a media
// final e a frequencia, e informar se o aluno foi aprovado
// (media >= 6 e frequencia >= 75%) ou reprovado.
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int aulas_ministradas, aulas_assistidas;
    float frequencia;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o numero de aulas ministradas: ");
    scanf("%d", &aulas_ministradas);
    printf("Digite o numero de aulas assistidas: ");
    scanf("%d", &aulas_assistidas);

    media = (nota1 + nota2) / 2;
    frequencia = (aulas_assistidas / (float) aulas_ministradas) * 100;

    printf("Media final: %.2f\n", media);
    printf("Frequencia: %.2f%%\n", frequencia);

    if (media >= 6 && frequencia >= 75)
        printf("Aluno Aprovado\n");
    else
        printf("Aluno Reprovado\n");

    return 0;
}
