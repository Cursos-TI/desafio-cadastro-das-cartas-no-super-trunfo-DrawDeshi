#include <stdio.h>
#include <math.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Registrando Variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    
    // Cadastro das Cartas:
    // Fazendo prompt das características da Carta 1
    printf("Digite as características da Carta 1.\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%i", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%i", &pontos_turisticos1);

    printf("\n");

    // Fazendo prompt das características da Carta 2
    printf("Agora digite as características da Carta 2.\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%i", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%i", &pontos_turisticos2);

    //Calculando as variáveis de Densidade populacional e Pib per capita.
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpc1 = (pib1 * 1000000000) / populacao1;
    pibpc2 = (pib2 * 1000000000) / populacao2;
    
    // Printando os valores das cartas

    printf("\n"); // \n pra formatar o texto bonitinho
    printf("Carta 1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\n"); // \n pra formatar o texto bonitinho
    printf("Carta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("\n"); // \n pra formatar bonito denovo

    // Registrar Vitórias
    int vencedor = 0;

    printf("--------------------\n\n");
    printf("Comparação de Cartas\n");


    //População
    vencedor = populacao1 > populacao2;
    if(vencedor > 0) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    //Área
    vencedor = area1 > area2;
    if(vencedor > 0) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    //PIB
    vencedor = pib1 > pib2;
    if(vencedor > 0) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    //Pontos turísticos
    vencedor = pontos_turisticos1 > pontos_turisticos2;
    if(vencedor > 0) {
        printf("Pontos turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos turísticos: Carta 2 venceu (0)\n");
    }

    //Densidade
    vencedor = (1 / densidade1) < (1 / densidade2);
    if(vencedor > 0) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    //PIB per capita
    vencedor = pibpc1 > pibpc2;
    if(vencedor > 0) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    unsigned long int superpoderA, superpoderB;

    superpoderA = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade1) + pibpc1;
    superpoderB = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade2) + pibpc2;

    if(superpoderA > superpoderB) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    printf("\n");

    return 0;
}
