#include <stdio.h>

int main() {
    // Variáveis
    char estado1[50], estado2[50];
    unsigned long int populacao1, populacao2, Super_poder1, Super_poder2;
    float Dens_populac1, Pib_Capita1, Dens_populac2, Pib_Capita2;
    double area1, area2, pib1, pib2;
    int pontoturisticos1, pontoturisticos2;

    // Solicitação dos dados da Carta 1
    printf("Digite os dados da Carta nº 1:\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("População: ");
    scanf("%lu", &populacao1); 

    printf("Área: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturisticos1);

    // Cálculos da Carta 1
    Dens_populac1 = populacao1 / (float) area1;
    Pib_Capita1 = (float) pib1 / populacao1;
    Super_poder1 = (populacao1 + (unsigned long int) area1 + (unsigned long int) pib1 +
                    pontoturisticos1 + (unsigned long int) Pib_Capita1 + (unsigned long int)(1 / Dens_populac1)); 

    // Solicitação dos dados da Carta 2
    printf("\nDigite os dados da Carta nº 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("População: ");
    scanf("%lu", &populacao2); 

    printf("Área: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // Cálculos da Carta 2
    Dens_populac2 = populacao2 / (float) area2;
    Pib_Capita2 = (float) pib2 / populacao2;
    Super_poder2 = (populacao2 + (unsigned long int) area2 + (unsigned long int) pib2 +
                    pontoturisticos2 + (unsigned long int) Pib_Capita2 + (unsigned long int)(1 / Dens_populac2));

    // Exibindo resultados da Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("População: %lu\n", populacao1); 
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", pontoturisticos1);
    printf("Densidade Populacional: %.2f\n", Dens_populac1);
    printf("PIB per Capita: %.2f\n", Pib_Capita1);
    printf("Super Poder Carta 1: %lu\n", Super_poder1); 

    // Exibindo resultados da Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("População: %lu\n", populacao2); 
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turismo: %d\n", pontoturisticos2);
    printf("Densidade Populacional: %.2f\n", Dens_populac2);
    printf("PIB per Capita: %.2f\n", Pib_Capita2);
    printf("Super Poder Carta 2: %lu\n\n", Super_poder2); 

    //Comparação dos atributos

    if (populacao1 >= populacao2) {
        printf("Carta 1 - População:%lu\n", populacao1);
    } else {
        printf("Carta 2 - População: %lu\n", populacao2);
    }            // Area
    if (area1 >= area2){
        printf("Carta 1 - Area:%.2f\n", area1);
    }
    else {
        printf("Carta 2 - Area:%.2f\n", area2);
    }           // PIB
    if (pib1 >= pib2){
        printf("Carta 1 - PIB:%.2f\n", pib1);
    }
    else {
        printf("Carta 2 - PIB:%.2f\n", pib2);
    }          // Pontos Turisticos
    if (pontoturisticos1 >= pontoturisticos2){
        printf("Carta 1 - Turismo:%d\n", pontoturisticos1);
    }
    else {
        printf("Carta 2 - Turismo:%d\n", pontoturisticos2);
    }          // Densidade Demografica
    if (Dens_populac1 >= Dens_populac2){
        printf("Carta 1 - Densidade Populacional:%.2f\n", Dens_populac1);
    }     
    else {
        printf("Carta 2 - Densidade Populacional%.2f\n", Dens_populac2);
    }         // PIB PER CAPITA
    if (Pib_Capita1 >= Pib_Capita2){
        printf("Carta 1 - PIB PER CAPITA:%.2f\n", Pib_Capita1);
    }
    else {
        printf("Carta 2 - PIB PER CAPITA:%.2f\n", Pib_Capita2);
    }        
    if (Super_poder1 >= Super_poder2){
        printf("Carta 1 - SUPER PODER:%lu\n\n", Super_poder1);
    }          
    else {  
        printf("Carta 2 - SUPER PODER:%lu\n\n", Super_poder2);
    }

    //  Verificando o vencedor

    if (Super_poder1 > Super_poder2) {
        printf("CARTA 1 VENCEU! %lu\n", Super_poder1);
    } else if (Super_poder2 > Super_poder1) {
        printf("CARTA 2 VENCEU! %lu\n", Super_poder2);
    } else {
        printf("EMPATE! Super Poder é o mesmo para as duas cartas: %lu\n", Super_poder1);
    }

    return 0;
}