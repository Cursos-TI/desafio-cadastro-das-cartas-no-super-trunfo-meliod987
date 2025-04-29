#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha
        // Carta 1
        char estado1[50];
        char codigo1[10];
        char cidade1[50];
        int populacao1;
        float area1;
        float PIB1;
        int pontuacao1;
    
        // Carta 2
        char estado2[50];
        char codigo2[10];
        char cidade2[50];
        int populacao2;
        float area2;
        float PIB2;
        int pontuacao2;
    
        // Cadastro da primeira carta
        printf("Digite o Estado da primeira carta: \n");
        scanf("%s", estado1);
    
        printf("Digite o código da primeira carta: \n");
        scanf("%s", codigo1);
    
        printf("Digite o nome da cidade da primeira carta: \n");
        scanf("%s", cidade1);
    
        printf("Digite a média da população da primeira carta: \n");
        scanf("%d", &populacao1);
    
        printf("Digite a área de extensão da primeira carta: \n");
        scanf("%f", &area1);
    
        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &PIB1);
    
        printf("Digite a pontuação da primeira carta: \n");
        scanf("%d", &pontuacao1);
    
        // Cadastro da segunda carta
        printf("\nDigite o Estado da segunda carta: \n");
        scanf("%s", estado2);
    
        printf("Digite o código da segunda carta: \n");
        scanf("%s", codigo2);
    
        printf("Digite o nome da cidade da segunda carta: \n");
        scanf("%s", cidade2);
    
        printf("Digite a média da população da segunda carta: \n");
        scanf("%d", &populacao2);
    
        printf("Digite a área de extensão da segunda carta: \n");
        scanf("%f", &area2);
    
        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &PIB2);
    
        printf("Digite a pontuação da segunda carta: \n");
        scanf("%d", &pontuacao2);
    
        // Exibição das cartas
        printf("\n==== Carta 1 ====\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área em km²: %.2f\n", area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Pontuação: %d\n", pontuacao1);
    
        printf("\n==== Carta 2 ====\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área em km²: %.2f\n", area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Pontuação: %d\n", pontuacao2);
    
        return 0;
    
    
}
