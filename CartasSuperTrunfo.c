#include <stdio.h>

int main() {
    // Variaveis
    char estado1[50], estado2[50];
    float populacao1, populacao2;
    float  Dens_populac1, Pib_Capita1, Dens_populac2, Pib_Capita2;
    double area1, area2, pib1, pib2;
    int pontoturisticos1, pontoturisticos2;

    // Solicitando ao usuario para digita os dados da carta !;

    printf("Digite os dados da Carta nº 1:\n"); // carta 1

    printf("Estado: ");
    scanf("%s", estado1);

    printf("População: ");
    scanf("%f", &populacao1);

    printf("Área: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturisticos1);

    // calculando a Densidade Populacional e PIB per Capita da carta 1

    Dens_populac1 = populacao1/(float)area1; 
    Pib_Capita1 = (float)pib1/populacao1;

    // // Solicitando ao usuario para digita os dados da carta 2;

    printf("\nDigite os dados da Carta nº 2:\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("População: ");
    scanf("%f", &populacao2);

    printf("Área: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontoturisticos2);

    // calculando a Densidade Populacional e PIB per Capita da carta 2

    Dens_populac2 = populacao2/(float)area2;
    Pib_Capita2 = (float)pib2/populacao2;


    // Exibindo os resultados da carta 1:


    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", pontoturisticos1);
    printf("Densidade Populacional:%.2f\n", Dens_populac1);
    printf("PIB per Capita: %.2f\n", Pib_Capita1);

   // Exibindo os resultados da carta 2:

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turismo: %d\n", pontoturisticos2);
    printf("Densidade Populacional:%.2f\n", Dens_populac2);
    printf("PIB per Capita: %.2f\n", Pib_Capita2);


    return 0;
}