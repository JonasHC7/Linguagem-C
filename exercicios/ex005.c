#include<stdio.h>

int main(){

    // Apresentação do Programa de Tabuada 
    printf("<<----- Ola, Bem vindo! ------>> \n");
    printf("Para comecarmos, digite um valor para saber sua tabuada ! \n");

    // Nomeando as Variaveis
    int valor_digitado, i;

    // Inserindo e recebendo o valor digitado
    printf("Digite o numero:  \n"); 
    scanf("%d", &valor_digitado); 

    // Realizando a multiplicação
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", valor_digitado, i, valor_digitado * i);
    }
        return 0;
}