#include <stdio.h>

int main() {
    char q1, q2, q3;  // respostas do usuário
    int acertos = 0;  // contador de respostas certas

    // Gabarito: 1 - d | 2 - c | 3 - a

    printf("Digite a resposta da questão 1 (a, b, c ou d): ");
    scanf(" %c", &q1);  // o espaço antes de %c é importante para ignorar quebras de linha

    printf("Digite a resposta da questão 2 (a, b, c ou d): ");
    scanf(" %c", &q2);

    printf("Digite a resposta da questão 3 (a, b, c ou d): ");
    scanf(" %c", &q3);

    if (q1 == 'd' || q1 == 'D') {
        acertos++;
    }
    if (q2 == 'c' || q2 == 'C') {
        acertos++;
    }
    if (q3 == 'a' || q3 == 'A') {
        acertos++;
    }

    printf("\nVocê acertou %d questão(ões).\n", acertos);

    return 0;
}
