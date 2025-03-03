#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int ponturc1, ponturc2;
    unsigned long int popc1, popc2;
    float areac1, areac2, PIBc1, PIBc2, PIBpcaptac1, PIBpcaptac2, denspopc1, denspopc2, superpoderc1, superpoderc2;
    float resultpop, resultArea, resultPIB, resultPontur, resultDenspop, resultPIBcapta, resultSuper;
    char estadoc1[3], estadoc2[3], cidadec1[100], cidadec2[100]; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
    printf("*** SuperTrunfo em C!!! *** \n");
    printf("Cadastro das duas primeiras cartas: \n");
        
    printf("Carta número 01 \n");

        printf("Digite a sigla do Estado: \n");
        scanf(" %s", estadoc1);

        printf("Digite o nome da cidade: \n");
        getchar();
        fgets(cidadec1, 100, stdin);

        printf("Digite a população da cidade: \n");
        scanf(" %ld", &popc1); //modificação para unsigned long int

        printf("Digite a área da cidade em km²: \n");
        scanf(" %f", &areac1);

        printf("Digite o PIB da cidade (em bilhões de R$): \n");
        scanf(" %f", &PIBc1);

        printf("Digite o número de Pontos Turísticos da cidade: \n");
        scanf(" %d", &ponturc1);

        printf("Agora vamos para a carta número 2: \n");

        printf("Digite a sigla do Estado: \n");
        scanf(" %s", estadoc2);

        printf("Digite o nome da cidade: \n");
        getchar();
        fgets(cidadec2, 100, stdin);

        printf("Digite a população da cidade: \n"); 
        scanf(" %ld", &popc2); //modificação para unsigned long int

        printf("Digite a área da cidade em km²: \n");
        scanf(" %f", &areac2);

        printf("Digite o PIB da cidade (em bilhões de R$): \n");
        scanf (" %f", &PIBc2);

        printf("Digite o número de Pontos Turísticos da cidade: \n");
        scanf(" %d", &ponturc2);
        
            denspopc1 = (float) (popc1 / areac1);
            denspopc2 = (float) (popc2 / areac2);

            PIBpcaptac1 = (float) (PIBc1*(1000000000) / popc1);
            PIBpcaptac2 = (float) (PIBc2*(1000000000) / popc2);

                resultpop = popc1 > popc2;
                resultArea = areac1 > areac2;
                resultPIB = PIBc1 > PIBc2;
                resultPontur = ponturc1 > ponturc2;
                resultDenspop = (1 / denspopc1) > (1 / denspopc2);
                resultPIBcapta = PIBpcaptac1 > PIBpcaptac2;

                superpoderc1 = popc1 + areac1 + PIBc1 + ponturc1 + denspopc1 + PIBpcaptac1;
                superpoderc2 = popc2 + areac2 + PIBc2 + ponturc2 + denspopc2 + PIBpcaptac2;
                
                resultSuper = superpoderc1 > superpoderc2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        
        printf("Aqui estão as duas cartas cadastradas: \n");
        
        printf("Carta 01: \n");

            printf("Área da cidade: %.2f km² \n", areac1);  //%.2f determina o n° de casa decimais.
            printf("PIB da cidade: %.2f bilhões de reais \n", PIBc1);
            printf("N° de pontos turísticos: %d \n", ponturc1);
            printf("Densidade Populacional: %.2f hab/km² \n", denspopc1);
            printf("PIB per Capta: %.2f reais \n", PIBpcaptac1);

        printf("Carta 02: \n");

            printf("Área da cidade: %.2f km² \n", areac2);
            printf("PIB da cidade: %.2f bilhões de reais \n", PIBc2);
            printf("N° de pontos turísticos: %d \n", ponturc2);
            printf("Densidade Populacional: %.2f hab/km² \n", denspopc2);
            printf("PIB per Capta: %.2f reais \n", PIBpcaptac2);            

        printf("*** Comparação das Cartas *** \n");
        printf("*** Valor (1) para Verdadeiro -- Valor (0) para Falso *** \n");

            printf("População: Carta 01 venceu (%.0f) \n", resultpop);
            printf("Área: Carta 01 venceu (%.0f) \n", resultArea);
            printf("PIB : Carta 01 venceu (%.0f) \n", resultArea);
            printf("Pontos Turísticos: Carta 01 venceu (%.0f) \n", resultPontur);
            printf("Densidade Populacional: Carta 01 venceu (%.0f) \n", resultDenspop);
            printf("PIB per Capta: Carta 01 venceu (%.0f) \n", resultPIBcapta);
            printf("SuperPoder: Carta 01 venceu (%.0f)\n", resultSuper);

                printf("*** Comparação das Cartas *** \n");
                printf("Atributo: POPULAÇAO \n");
                printf("Carta 01 - %s(%s): %ld \n",cidadec1, estadoc1, popc1);
                printf("Carta 02 - %s(%s): %ld \n", cidadec2, estadoc2, popc2);
                    if (popc1 > popc2){
                        printf("Carta 01 (%s) venceu!", cidadec1);
                    } else {
                        printf("Carta 01 (%s) perdeu!", cidadec1);
                    }



/* A lógica e funcionalidades das estruturas de decisão estão OK, porém na compilação não obtive sucesso em
formatar e adequar a forma com que as informações são mostradas. Estado, número da carta e nome da cidade aparecem
em linhas diferentes. */



    return 0;
}
