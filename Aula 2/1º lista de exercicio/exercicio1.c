#include<stdio.h>


int main(){

//Faça um programa em C para ler dois números,
//efetuar adição e escrever o resultado caso o valor
//somado seja maior que 10

    float pergunta1;
    float pergunta2;
    float adicao;

    printf("Escreva o Primeiro numero:\n");
    scanf("%f",&pergunta1);
    printf("Escreva o Segundo numero:\n");
    scanf("%f",&pergunta2);

    adicao = pergunta1 + pergunta2 ;

    if(adicao > 10){
        printf("O resulta é %f",adicao);
    } else{
        printf("O resultado não pode ser imprimido por ser menr que  10 \n");
    }
}

