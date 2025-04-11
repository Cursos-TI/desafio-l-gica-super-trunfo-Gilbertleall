#include <stdio.h>

int main() {
    // variáveis para a primeira cidade
    char estado[20], codigocarta[5], nomedacidade[20];
    float area, pib, densidadepopulacional, pibpercapita, superpoder;
    int pontosturisticos;
    unsigned long int populacao;
    // variáveis para a segunda cidade
    char estado2[20], codigocarta2[5], nomedacidade2[20];
    float area2, pib2, densidadepopulacional2, pibpercapita2,superpoder2;
    int pontosturisticos2; 
    unsigned long int populacao2;
    // Entrada de dados para a primeira cidade

    int opcao, opcao2; //menu de comparação


    printf("\nDADOS DA 1 CARTA:\n");
    printf("Digite uma letra de A a H para representar o estado:\n");
    scanf(" %[^\n]", estado);
    
    printf("Digite a letra da carta + um numero de 01 a 04:\n");
    scanf("%s", codigocarta);
    
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", nomedacidade);
    
    printf("População da cidade:\n");
    scanf("%lu", &populacao);
    
    printf("Área em Km² da cidade:\n");
    scanf("%f", &area);
    
    printf("PIB da cidade:\n ");
    scanf(" %f", &pib);
    
    printf("Quantos Pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosturisticos);
    
    // Entrada de dados para a segunda cidade
  
    printf("\nDADOS DA 2 CARTA:\n");
    printf("Digite uma letra de A a H para representar o estado:\n");
    scanf(" %[^\n]", estado2);
    
    printf("Digite a letra da carta + um numero de 01 a 04:\n");
    scanf("%s", codigocarta2);
    
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", nomedacidade2);
    
    printf("População da cidade:\n");
    scanf("%lu", &populacao2);
    
    printf("Área em Km² da cidade:\n");
    scanf("%f", &area2);
    
    printf("PIB da cidade:\n");
    scanf(" %f", &pib2);
    
    printf("Quantos Pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosturisticos2);
    
    // Cálculos para a primeira cidade
    densidadepopulacional = populacao / area;
    pibpercapita = (pib * 1e9) / populacao;
    superpoder = populacao + area + pib + pontosturisticos + (1/densidadepopulacional);
    
    // Cálculos para a segunda cidade
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1/densidadepopulacional2);
   
    // Saída de dados para a primeira cidade
    printf("\n-------- CARTA 1 --------\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %lu\n", populacao);
    printf("Área em Km²: %f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);
    printf("Super Poder: %.2f", superpoder);
    
    // Saída de dados para a segunda cidade
    printf("\n-------- CARTA 2 --------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em Km²: %f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    
    //--------Comparação entre as cartas-------\\
    
    
        printf("----MENU DE COMPARAÇÃO----\n");
        printf("[1] nome da cidade\n");
        printf("[2] População \n");
        printf("[3] Área \n");
        printf("[4] Pib\n");
        printf("[5] Numero de pontos turisticos\n");
        printf("[6] densidade demografica\n");
        printf("-------------------\n");
        printf("|escolha uma opçao|\n");
        printf("-------------------\n");
        scanf ("%d", &opcao);
        


        printf("escolha um segundo atributo(diferente do primeiro)");
        scanf("%d", opcao2);


        switch (opcao)
        {
        case 1:
            printf("Carta 1: %s\n", &nomedacidade);
            printf("Carta 2: %s\n", &nomedacidade2);
            break;
        case 2:
            if (populacao > populacao2)
            {
                printf ("Carta 1 venceu !");
            } else if (populacao2 > populacao){
                printf("Carta 2 venceu !");
            } else
            {
                printf("Empate");
            }  
            break;
            case 3:
            if (area > area2)
            {
                printf ("Carta 1 venceu !");
            } else if (area2 > area){
                printf("Carta 2 venceu !");
            } else
            {
                printf("Empate");
            }  
            break;
            case 4:
            if (pib > pib2)
            {
                printf ("Carta 1 venceu !");
            } else if (pib2 > pib){
                printf("Carta 2 venceu !");
            } else
            {
                printf("Empate");
            }  
            break;
            case 5:
            if (pontosturisticos > pontosturisticos2)
            {
                printf ("Carta 1 venceu !");
            } else if (pontosturisticos2 > pontosturisticos){
                printf("Carta 2 venceu !");
            } else
            {
                printf("Empate");
            }  
            break;
            case 6:
            if (densidadepopulacional < densidadepopulacional2)
            {
                printf ("Carta 1 venceu !");
            } else if (densidadepopulacional2 < densidadepopulacional){
                printf("Carta 2 venceu !");
            } else
            {
                printf("Empate");
            }  
            break;
            
        default:
        printf("Opção invalida");
            break;
        }
    return 0;
}
