#include<stdio.h>

int main(){

    // Apresentação do Programa de Tabuada 
    printf("<<----- Ola, Bem vindo! ------>> \n");
    printf("Para comecarmos, digite um valor para saber sua tabuada ! \n");

    // Nomeando as Variaveis
    int valor_digitado, i;

    // Colhendo os valores do Usúario
    printf("Digite o numero:  \n");
    /*O número digitado pelo usuário é armazenado na variável valor_digitado, 
    que, por sua vez, atribui um valor às variáveis criadas.*/ 
    scanf("%d", &valor_digitado); 

    // Realizando a multiplicação
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", valor_digitado, i, valor_digitado * i);
    }
        return 0;
}