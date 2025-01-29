#include <stdio.h>
#include <stdlib.h>

int main() {
    // Apresentação do programa 
    printf("<<< ----- Ola, Bem-vindo! ----- >>>\n");
    printf("<<<<----- Sistema de Notas ----->>>>>\n");

    float prova1, prova2, prova3;
    float media;

    printf("Digite a nota da Prova 1: \n");
    scanf("%f", &prova1);  
    printf("Digite a nota da Prova 2: \n");
    scanf("%f", &prova2);  
    printf("Digite a nota da Prova 3: \n");
    scanf("%f", &prova3);  

    // Cálculo da média
    media = (prova1 + prova2 + prova3) / 3;

    // Exibição do resultado
    printf("Sua nota final é: %.2f\n", media);  

    return 0;
}
