// Exercicio 2: Ler a idade de um nadador e classifica-lo em
// Infantil A (5-7), Infantil B (8-10), Juvenil A (11-13),
// Juvenil B (14-17) ou Senior (18+).
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        printf("Categoria: Infantil A\n");
    else if (idade >= 8 && idade <= 10)
        printf("Categoria: Infantil B\n");
    else if (idade >= 11 && idade <= 13)
        printf("Categoria: Juvenil A\n");
    else if (idade >= 14 && idade <= 17)
        printf("Categoria: Juvenil B\n");
    else if (idade >= 18)
        printf("Categoria: Senior\n");
    else
        printf("Idade fora das categorias (menor que 5 anos)\n");

    return 0;
}
