#include<stdio.h>
int main(){
    // declarando variáveis 
    int valor1;
    int valor2;
    int soma_dos_valores;

    //Apresentação
    printf("Ola, Bem Vindo! \n");
    printf("Sera necessario que digite dois numeros, para caulcularmos \n");
    
    // Pedindo ao Usuário digitar os valores.
    printf("Digite o Primeiro Numero: \n");
    scanf("%d", &valor1); // Armazenado o valor digitado a variavel "Valor1"
    printf("Digite o Segundo Numero: \n");
    scanf("%d", &valor2); // Armazenado o valor digitado a variavel "Valor2"

    // Realizando o calculo dos valores digitados.
    soma_dos_valores = valor1 + valor2;
   printf("A soma de %d e %d e: %d\n", valor1, valor2, soma_dos_valores);

    return 0;

}