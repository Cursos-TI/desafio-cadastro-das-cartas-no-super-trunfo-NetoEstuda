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
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;
    
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
    scanf("%i", &populacao1);

    printf("Informe a area da cidade: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%i", &ponto_turistico1);

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
    scanf("%i", &populacao2);

    printf("Informe a area da cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: \n");
    scanf("%i", &ponto_turistico2);
    
    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s \nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2fKm²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %i\n\n",
         estado1, codigo_carta1, nome_cidade1, populacao1, area1, pib1, ponto_turistico1);

    printf("Carta 2: \nEstado: %c\nCódigo: %s \nNome da Cidade: %s\nPopulação: %i\nÁrea: %.2fKm²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %i\n\n",
         estado2, codigo_carta2, nome_cidade2, populacao2, area2, pib2, ponto_turistico2);
    return 0;
}
