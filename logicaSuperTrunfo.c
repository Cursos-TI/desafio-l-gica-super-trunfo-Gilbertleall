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
    
    
    printf("------------------------------\n ");
    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n ");
    printf("------------------------------\n ");
    
    if (populacao > populacao2){
        printf("População: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("População: Carta 2: (%s) Venceu!\n", nomedacidade2 );
    }   
    
    if (area > area2){
        printf("Área: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Área: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    
    if (pib > pib2){
        printf("Pib: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Pib: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    
    if (pontosturisticos > pontosturisticos2){
        printf("Pontos turisticos: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Pontos turisticos: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    
    if (densidadepopulacional < densidadepopulacional2){
        printf("Densidade populacional: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Densidade populacional: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    
    if (pibpercapita > pibpercapita2){
        printf("Pib per capita: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Pib per capita: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    if (superpoder > superpoder2){
        printf("Super poder: Carta 1: (%s) Venceu!\n", nomedacidade);
    } else {
        printf("Super poder: Carta 2: (%s) Venceu!\n", nomedacidade2);
    }   
    

    return 0;
}
