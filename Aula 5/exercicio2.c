//aça um programa que leia um vetor de 15 elementos
//inteiros. Após a leitura, o programa deve substituir
//todos os elementos de índice par pelo número 5 e
//imprimir o vetor modificado.*//

#include<stdio.h>

int main(){


 int vetor[15] ;
 int i;

    for (i=0;i<15;i++){
        printf("me diga 15 numeros interiros\n R:");
        scanf("%d",&vetor[i]);
    }

        printf("todos os numeros foram capturados\n");


        for(i = 0; i<15;i++){

            if( vetor[i] % 2 == 0){

            printf("%d;" ,vetor[i]);

                vetor[i] = 5;
         }
        }



    return 0;
}

