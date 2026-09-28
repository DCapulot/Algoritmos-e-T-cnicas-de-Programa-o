//Faça um programa que leia dois vetores (A e B) de 6
//elementos inteiros e calcule a soma de cada elemento,
//armazenando em um terceiro vetor C.
#include<stdio.h>

int main(){

int vetorA[6],vetorB[6],vetorC[6],i;


    for(i = 0;i < 6 ; i++){
        printf("Escreva os Numeros do VetoreA:\n");
        scanf("%d",&vetorA[i]);


    }

    getchar();

    for(i = 0;i < 6 ; i++){
        printf("Escreva os Numeros do VetoreB:\n");
        scanf("%d",&vetorB[i]);

    }

    printf("Os elementos do vetor C é :");

    for(i = 0;i < 6 ; i++){
       vetorC[i] = vetorA[i] + vetorB[5-i];
        printf("%d;",vetorC[i]);
    }

}
