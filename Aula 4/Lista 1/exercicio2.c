#include <stdio.h>

int main() {
    int i, numero;
    int soma = 0;
    long long produto = 1; // tipo long long para evitar overflow

    printf("Digite 15 números inteiros:\n");

    for (i = 1; i <= 15; i++) {
        printf("Número %d: ", i);
        scanf("%d", &numero);

        if (i <= 12) {
            soma += numero; // soma os 12 primeiros
        }
        if (i > 7) {
            produto *= numero; // multiplica os 8 últimos (do 8 ao 15)
        }
    }

    printf("\nSoma dos 12 primeiros números: %d", soma);
    printf("\nProduto dos 8 últimos números: %lld\n", produto);

    return 0;
}
