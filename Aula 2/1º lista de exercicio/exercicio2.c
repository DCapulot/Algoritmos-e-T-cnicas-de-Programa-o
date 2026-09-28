
#include<stdio.h>


int main(){

//Faça um programa em C para ler 3 números
//inteiros, e que mostre como resultado a soma dos
//que forem maiores do que 15

    float pergunta1;
    float pergunta2;
    float pergunta3;
    float adicao;

    printf("Escreva o Primeiro numero");
    scanf("%f",&pergunta1);
    printf("Escreva o Segundo numero");
    scanf("%f",&pergunta2);
    printf("Escreva o terceiro numero");
    scanf("%f",&pergunta3);

    adicao = pergunta1 + pergunta2 + pergunta3;

    if(adicao > 15){
        printf("O resulta é %f",adicao);
    } else{
        printf("O resultado não pode ser imprimido por ser menor que  15 \n");
    }
}
