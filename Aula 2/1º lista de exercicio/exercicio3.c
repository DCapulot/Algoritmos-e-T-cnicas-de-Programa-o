
#include<stdio.h>


int main(){

//Faça um programa em C para ler 4 números inteiros
//e informar quantos são positivos

    float pergunta1;
    float pergunta2;
    float pergunta3;
    float pergunta4;
    int contadorp = 0;
    int contadorn = 0;

    printf("Escreva o Primeiro numero:\n");
    scanf("%f",&pergunta1);
    printf("Escreva o Segundo numero:\n");
    scanf("%f",&pergunta2);
    printf("Escreva o terceiro numero:\n");
    scanf("%f",&pergunta3);
    printf("Escreva o quarto numero:\n");
    scanf("%f",&pergunta4);


    if(pergunta1 >= 0){
        contadorp += 1;
    } else{
        contadorn += 1;
    }
    if(pergunta2 >= 0){
        contadorp += 1;
    } else{
        contadorn += 1;
    }
    if(pergunta3 >= 0){
        contadorp += 1;
    } else{
        contadorn += 1;
    }
    if(pergunta4 >= 0){
        contadorp += 1;
    } else{
        contadorn += 1;
    }

    printf("os numeros positivos são %d\n",contadorp);
    printf("os numeros negativos são %d\n",contadorn);
}
