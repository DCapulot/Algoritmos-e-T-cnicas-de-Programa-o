// Exercicio 5: Ler a resposta de 3 questoes de multipla
// escolha (a,b,c,d), comparar com o gabarito
// (q1=d, q2=c, q3=a) e indicar quantas estao certas.
#include <stdio.h>

int main() {
    char q1, q2, q3;
    int acertos = 0;

    printf("Digite a resposta da questao 1 (a,b,c,d): ");
    scanf(" %c", &q1);
    printf("Digite a resposta da questao 2 (a,b,c,d): ");
    scanf(" %c", &q2);
    printf("Digite a resposta da questao 3 (a,b,c,d): ");
    scanf(" %c", &q3);

    if (q1 == 'd')
        acertos++;
    if (q2 == 'c')
        acertos++;
    if (q3 == 'a')
        acertos++;

    printf("Voce acertou %d questao(oes)\n", acertos);

    return 0;
}
