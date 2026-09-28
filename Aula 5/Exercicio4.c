//Faça um programa que leia um valor inteiro k e um
//vetor A de N elementos inteiros, onde N é fornecido
//pelo usuário (O vetor pode ter no máximo 50
//elementos). Verificar se o elemento k está presente no
//vetor. Se estiver, imprimir a posição (ou posições)
//onde ele foi encontrado.

#include<stdio.h>

int main(){

 int k ;
 int vetor_A[50];
 int v;
 int n;
 int i;
short int contador =0;

   printf("Digite qual é o valor de K:\n");
   scanf("%d",&k);

   printf("Digite qual será o tamanho do vetor A (o maximo suportado é 50)?\n") ;
   scanf("%d", &n);

   if(n<= 50){

   } else{

     printf("não pode se adicionado um valor maior que 50");

     return 0;
   }

    for ( i = 0; i < n; i++)
    {
        printf("digite os valores que estaram dentro do vetor:");
        scanf("%d",&v);

        vetor_A[i]=v;

    }
    
    for ( i = 0; i < n; i++)
    {
      if (vetor_A[i]==k){ 
        printf("A posição do valor é %d",i);
        contador ++;
        
      } 
      
    }

    if(contador == 0){
      printf("a letra k não foi encontrada");

    }
    return 0;
}