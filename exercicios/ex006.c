#include <stdio.h>
#include <stdlib.h>

int main() {
    // Apresentação do programa 
    printf("<<< ----- Ola, Bem-vindo! ----- >>>\n");
    printf("<<<<----- Sistema de Notas ----->>>>>\n");

    float prova1, prova2, prova3;
    float media;

    printf("Digite a nota da Prova 1: \n");
    scanf("%f", &prova1);  // Corrigido para %f para valores float
    printf("Digite a nota da Prova 2: \n");
    scanf("%f", &prova2);  // Corrigido para %f para valores float
    printf("Digite a nota da Prova 3: \n");
    scanf("%f", &prova3);  // Corrigido para %f para valores float

    // Cálculo da média
    media = (prova1 + prova2 + prova3) / 3;

    // Exibição do resultado
    printf("Sua nota final é: %.2f\n", media);  // Mostra a média com 2 casas decimais

    return 0;
}
