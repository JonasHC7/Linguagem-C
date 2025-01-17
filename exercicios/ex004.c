#include<stdio.h>

int main(){
    // Apresentação do Programa "VERIFICADOR DE NUMEROS PARES E IMPARES" 
    printf("<<----- Ola, Bem vindo! ------>> \n");
    printf("Verificador de numeros pares e impares \n");

    //declarando variaveis 
    int valor_digitado;

    // Obtendo os numeros do usuário.
    printf("digite um numero: \n");
    scanf("%d", &valor_digitado);

    // Verificando se é Par ou Ímpar
    if (valor_digitado % 2 == 0) {
         printf("O %d e: Par\n", valor_digitado);
    } else {
        printf("O %d e: Ímpar\n", valor_digitado);
    }

}