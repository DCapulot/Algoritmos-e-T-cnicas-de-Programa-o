#include <stdio.h>

int main() {
    int numeros[10];  // guarda os 10 números
    int i;
    int iguaisA5 = 0; // conta quantos são iguais a 5

    // pedir os 10 números
    for (i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);

        // se o número for 5, soma 1 no contador
        if (numeros[i] == 5) {
            iguaisA5 = iguaisA5 + 1;
        }
    }

    // mostra o resultado
    printf("Você digitou o número 5 %d vezes.\n", iguaisA5);

    return 0;
}

