#include <stdio.h>

int main() {
    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    fgets(s1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(s2, 100, stdin);

    printf("Primeira string: %s", s1);
    printf("Segunda string: %s", s2);

    printf("Segunda letra da primeira string: %c\n", s1[1]);
    printf("Segunda letra da segunda string: %c\n", s2[1]);

    return 0;
}

