#include <stdio.h>
#include <string.h> //Recomendação da IA para melhoria de código.
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[87], nome_cidade2[87]; // O mais longo nome de cidade possui 85 letras.
    unsigned long int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2; 
    int ponto_turistico1, ponto_turistico2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int resultado_população;
    int resultado_area;
    int resultado_pib;
    int resultado_ponto_turistico;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;

    // Cadastro das Cartas:
    printf("Vamos cadastrar a primeira carta.\n");

    printf("Informe o estado de A - H: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta: \n");
    scanf("%s", codigo_carta1);

    getchar(); //getchar foi necessário para limpar o buffer. Caso contrário não conseguiria trabalhar com fgets
    printf("Informe o nome da cidade: (sem acentos)\n");
    fgets(nome_cidade1, 87, stdin); //Utilizei fgets pelo fato de não conseguir trabalhar com espaços em scanf
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Trata o fgets removendo o \n na hora de imprimir os resultados
    
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a area da cidade: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (completo): \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%i", &ponto_turistico1);

    densidade_pop1 = (float) populacao1 / area1; 
    pib_per_capita1 = (float) pib1 / populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1.0/densidade_pop1);

// A PARTIR DAQUI SERÁ O CADASTRO DA SEGUNDA CARTA


    printf("Agora vamos cadastrar a segunda carta. \n");

    printf("Informe o estado de A - H: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta: \n");
    scanf("%s", codigo_carta2);

    getchar();
    printf("Informe o nome da cidade: (sem acentos)\n");
    fgets(nome_cidade2, 87, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a area da cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (completo): \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%i", &ponto_turistico2);

    densidade_pop2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0/densidade_pop2);

    //-------------------------------------------------------------------------------------------------------------------------------------------------
    //Comparativos. Criei uma variável para cada comparação

    resultado_população = populacao1>populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;
    resultado_densidade = densidade_pop1 < densidade_pop2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;

    
    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s \nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fKm²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
         estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, ponto_turistico1, densidade_pop1, pib_per_capita1, super_poder1);

    printf("Carta 2: \nEstado: %c\nCódigo: %s \nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fKm²\nPIB: R$%.2f\nNúmero de Pontos Turísticos: %i\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n\n",
         estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, ponto_turistico2, densidade_pop2, pib_per_capita2, super_poder2);

    printf("LEGENDA:\n1 = Vitória da Carta 1\n0 = Vitória da Carta 2\n\n"); //Adicionei uma legenda para facilitar o entendimento

    // Aqui é apresentado o resultado de cada comparativo
    printf("Comparação das cartas: \nPopulação: %d\nÁrea: %d\nPIB: %d\nPonto Turístico: %d\nDensidade: %d\nPIB per Capita: %d\nSuper Poder: %d\n", 
        resultado_população, resultado_area, resultado_pib, resultado_ponto_turistico, resultado_densidade, resultado_pib_per_capita, resultado_super_poder);
    
    return 0;
}
