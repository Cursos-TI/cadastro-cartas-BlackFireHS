#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[5];
    char estado2[5];
    char codigo[5];
    char codigo2[5];
    char cidade[50];
    char cidade2[50];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float PIB;
    float PIB2;
    int pontos_turisticos;
    int pontos_turisticos2;

    //CADASTRO DA CARTA NUMERO 1
    
    printf("\nVAMOS DIGITAR OS DADOS DA CARTA Nº1\n\n");

    printf("LETRA DO ESTADO: ");
    scanf("%s", &estado);

    printf("CÓDIGO DO ESTADO: ");
    scanf("%s", &codigo);
    
    printf("NOME DA CAPITAL: ");
    scanf("%s", &cidade);

    printf("POPULAÇÃO DA CAPITAL: ");
    scanf("%d", &populacao);

    printf("ÁREA DA CAPITAL (KM²): ");
    scanf("%f", &area);

    printf("PIB DA CATITAL: ");
    scanf("%f", &PIB);

    printf("NUMERO DE PONTOS TURISTICOS DA CAPITAL: ");
    scanf("%d", &pontos_turisticos);

    //CADASTRO DA CARTA NUMERO 2

    printf("\nAGORA VAMOS DIGITAR OS DADOS DA CARTA Nº2\n\n");

    printf("LETRA DO ESTADO: ");
    scanf("%s", &estado2);

    printf("CÓDIGO DO ESTADO: ");
    scanf("%s", &codigo2);
    
    printf("NOME DA CAPITAL: ");
    scanf("%s", &cidade2);

    printf("POPULAÇÃO DA CAPITAL: ");
    scanf("%d", &populacao2);

    printf("ÁREA DA CAPITAL (KM²): ");
    scanf("%f", &area2);

    printf("PIB DA CATITAL: ");
    scanf("%f", &PIB2);

    printf("NUMERO DE PONTOS TURISTICOS DA CAPITAL: ");
    scanf("%d", &pontos_turisticos2);

    //COMPARATIVA DAS CARTAS

    printf("\nAGORA VAMOS PARA OS COMPARATIVOS DAS CARTAS\n\n");

    //CARTA NUMERO 1

    printf("\nCARTA Nº1:\n\n");

    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("NOME DA CAPITAL: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f BILHÕES DE REAIS\n", PIB);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos);
    
    //CARTA NUMERO 2
    
    printf("\nCARTA Nº2:\n\n");

    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("NOME DA CAPITAL: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f BILHÕES DE REAIS\n", PIB2);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos2);

return 0;
} 
