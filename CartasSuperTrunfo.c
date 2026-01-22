#include <stdio.h>

int main(){
    char estado[5], estado2[5];
    char codigo[5], codigo2[5];
    char cidade[50], cidade2[50];
    int populacao, populacao2, opcao, pontos_turisticos, pontos_turisticos2;
    float area, area2, PIB, PIB2, Densidade_populacional, Densidade_populacional2, PIBperCapita, PIBperCapita2;
 
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

    Densidade_populacional = (float) populacao / area;
    
    printf("PIB DA CATITAL: ");
    scanf("%f", &PIB);

    PIBperCapita = (PIB*1000000000) / populacao;

    printf("NUMERO DE PONTOS TURISTICOS DA CAPITAL: ");
    scanf("%d", &pontos_turisticos);

    //CADASTRO DA CARTA NUMERO 

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

    Densidade_populacional2 = (float) populacao2 / area2;
    
    printf("PIB DA CAPITAL: ");
    scanf("%f", &PIB2);

    PIBperCapita2 = (PIB2*1000000000) / populacao2;

    printf("NUMERO DE PONTOS TURISTICOS DA CAPITAL: ");
    scanf("%d", &pontos_turisticos2);

    //COMPARATIVO DAS CARTAS

    printf("\n**COMPARATIVOS DAS CARTAS***\n");

    //CARTA NUMERO 1

    printf("\nCARTA Nº1:\n\n");

    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("NOME DA CAPITAL: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.1f BILHÕES DE REAIS\n", PIB);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita);
    
    //CARTA NUMERO 2
    
    printf("\nCARTA Nº2:\n\n");

    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("NOME DA CAPITAL: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.1f BILHÕES DE REAIS\n", PIB2);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n", pontos_turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    //CONVERTENDO PONTUAÇÕES

    float PIBResult = PIB * 40;
    float PIBResult_2 = PIB2 * 40;

    float areaResult = area / 3;
    float areaResult_2 = area2 / 3;

    int pontos_turisticosResult = pontos_turisticos * 300;
    int pontos_turisticosResult_2 = pontos_turisticos2 * 300;

    float Densidade_populacionalResult = 15000 - Densidade_populacional;
    float Densidade_populacionalResult_2 = 15000 - Densidade_populacional2;

    int populacaoResult = populacao / 500;
    int populacaoResult_2 = populacao2 / 500;

    int SuperPoder = PIB + area + pontos_turisticos + Densidade_populacionalResult + populacao + PIBperCapita;
    int SuperPoder_2 = PIB2 + area2 + pontos_turisticos2 + Densidade_populacionalResult_2 + populacao2 + PIBperCapita2;

    ///MOSTRANDO RESULTADOS TESTE

    printf("\n\nPontuação por densidade carta 1: %.2f\n", Densidade_populacionalResult);
    printf("Pontuação por densidade carta 2: %.2f\n", Densidade_populacionalResult_2);
    printf("Pontuação por PIB carta 1: %.2f\n", PIBResult);
    printf("Pontuação por PIB carta 2: %.2f\n", PIBResult_2);
    printf("Pontuação por Área carta 1: %.2f\n", areaResult);
    printf("Pontuação por Área carta 2: %.2f\n", areaResult_2);
    printf("Pontuação por Pontos Turisticos carta 1: %d\n", pontos_turisticosResult);
    printf("Pontuação por Pontos Turisticos carta 2: %d\n", pontos_turisticosResult_2);
    printf("Pontuação por PIB per Capita carta 1: %.2f\n", PIBperCapita);
    printf("Pontuação por PIB per Capita carta 2: %.2f\n", PIBperCapita2);
    printf("Pontuação por População carta 1: %d\n", populacaoResult);
    printf("Pontuação por População carta 2: %d\n", populacaoResult_2);
    printf("Overall carta 1: %d\n", SuperPoder);
    printf("Overall carta 1: %d\n", SuperPoder_2);

    ///COMPARAÇÃO DE CARTAS

    printf("\nCOMPARAÇÃO DE CARTAS\n\n");
    printf("POPULAÇÃO DA CARTA 1 É MAIOR QUE A CARTA 2?: %d\n", populacaoResult > populacaoResult_2);
    printf("A ÁREA DA CARTA 1 É MAIOR QUE A CARTA 2?: %d\n", areaResult > areaResult_2);
    printf("O PIB DA CARTA 1 É MAIOR QUE A CARTA 2?: %d\n", PIBResult >  PIBResult_2);
    printf("OS PONTOS TURISTICOS DA CARTA 1 SÃO MAIORES DO QUE A CARTA 2?: %d\n", pontos_turisticosResult > pontos_turisticosResult_2);
    printf("DENSIDADE POPULACIONAL DA CARTA 1 É MAIOR QUE A CARTA 2?: %d\n", Densidade_populacionalResult > Densidade_populacionalResult_2);
    printf("O PIB PER CAPITA DA CARTA 1 É MAIOR DO QUE O PIB PER CAPITA DA CARTA 2?: %d\n", PIBperCapita > PIBperCapita2);
    printf("O OVERALL DA CARTA 1 É MAIOR DO QUE DA CARTA 2?: %d\n", SuperPoder > SuperPoder_2);
   
    return 0;
}

 
