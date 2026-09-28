#include<stdio.h>

int main(){
    //exercicio 3
    float valor;
    float salario_base = 1200;
    float comissão;
    float salario_final;


        printf("Qual é o valor Total vendido pelo funcionario?\n");
        scanf("%.2f",&valor);

        comissão = valor*10/100;

        salario_final = salario_base + comissão;



        printf("Sua comissão é %.2f  e seu pagamento é  %.2f",comissão,salario_final);
    //-----------------------------------------------------------------------------------------------------------------------------
}
