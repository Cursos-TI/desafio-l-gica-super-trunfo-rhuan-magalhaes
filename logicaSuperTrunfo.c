#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;  // Densidade populacional = população / área
    float pibPerCapita1;           // PIB per capita = (PIB em reais) / população
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;  // Alterado para unsigned long int
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;  // Densidade populacional da segunda cidade
    float pibPerCapita2;           // PIB per capita da segunda cidade
    float superPoder2;
    
    int resultado;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicos1);

    // Cálculos carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) +
                  numPontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numPontosTuristicos2);

    // Cálculos carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) +
                  numPontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");

    resultado = (populacao1 > populacao2);
    printf("População: Carta 1 venceu (%d)\n", resultado);

    resultado = (area1 > area2);
    printf("Área: Carta 1 venceu (%d)\n", resultado);

    // ===== IF / ELSE para o PIB =====
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu com PIB de %.2f bilhões contra %.2f bilhões.\n", pib1, pib2);
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu com PIB de %.2f bilhões contra %.2f bilhões.\n", pib2, pib1);
    } else {
        printf("Empate! Ambas têm PIB de %.2f bilhões.\n", pib1);
    }

    // ===== resto das comparações =====
    resultado = (numPontosTuristicos1 > numPontosTuristicos2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado);

    resultado = (densidadePopulacional1 < densidadePopulacional2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado);

    resultado = (pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado);

    resultado = (superPoder1 > superPoder2);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado);

    return 0;
}
