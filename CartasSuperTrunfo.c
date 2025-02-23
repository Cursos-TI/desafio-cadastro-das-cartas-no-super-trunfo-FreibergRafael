#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int popc1, popc2;
    float areac1, areac2;
    float PIBc1, PIBc2;
    int ponturc1, ponturc2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
    printf("SuperTrunfo em C!!! Cadastro das duas primeiras cartas: \n");
        
    printf("Carta número 01 \n");

        printf("Digite a população da cidade: \n");
        scanf(" %d", &popc1);

        printf("Digite a área da cidade em km²: \n");
        scanf(" %f", &areac1);

        printf("Digite o PIB da cidade (em bilhões de R$): \n");
        scanf(" %f", &PIBc1);

        printf("Digite o número de Pontos Turísticos da cidade: \n");
        scanf(" %d", &ponturc1);

        printf("Agora vamos para a carta número 2: \n");

        printf("Digite a população da cidade: \n");
        scanf(" %d", &popc2);

        printf("Digite a área da cidade em km²: \n");
        scanf(" %f", &areac2);

        printf("Digite o PIB da cidade (em bilhões de R$): \n");
        scanf (" %f", &PIBc2);

        printf("Digite o número de Pontos Turísticos da cidade: \n");
        scanf(" %d", &ponturc2);
        


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        
        printf("Aqui estão as duas cartas cadastradas: \n");
        
        printf("Carta 01: \n");
        printf("Área da cidade: %.2f km² \n", areac1);  //%.2f determina o n° de casa decimais.
        printf("PIB da cidade: %.2f bilhões de reais \n", PIBc1);
        printf("N° de pontos turísticos: %d \n", ponturc1);

        printf("Carta 02: \n");
        printf("Área da cidade: %.2f km² \n", areac2);
        printf("PIB da cidade: %.2f bilhões de reais \n", PIBc2);
        printf("N° de pontos turísticos: %d \n", ponturc2);




    return 0;
}
