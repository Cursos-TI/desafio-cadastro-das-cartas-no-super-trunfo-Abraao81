#include <stdio.h>
#include <stdlib.h>

       // variaveis
int main() {
    char estado1[50], estado2[50];
    unsigned long int populacao1, populacao2;
    float Dens_populac1, Dens_populac2;
    double area1, area2, pib1, pib2;
    int pontoturisticos1, pontoturisticos2;
    int carta1, carta2;

       // Menu
     printf("####### MENU SUPER TRUNFO ########\n");
    printf("1 - Estado\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
           // Escolha dos atributos da carta 1
    printf("Escolha uma opção para a Carta 1\n: ");
    scanf("%d", &carta1);

      // utilização do switch
     switch (carta1) {
        case 1:
            printf("Carta1: Estado\n");
            scanf("%s", estado1);
            printf("O Estado ==> %s\n", estado1);
            break;
        case 2:
            printf("Carta1: População\n");
            scanf("%lu", &populacao1);
            printf("A População ==> %lu\n", populacao1);
            break;
        case 3:
            printf("Carta1: Área\n");
            scanf("%lf", &area1);
            printf("A Área ==> %lf\n", area1);
            break;
        case 4:
            printf("Carta1: PIB\n");
            scanf("%lf", &pib1);
            printf("O PIB ==> %lf\n", pib1);
            break;
        case 5:
            printf("Carta1: Pontos Turísticos\n");
            scanf("%d", &pontoturisticos1);
            printf("Os Pontos Turísticos ==> %d\n", pontoturisticos1);
            break;
        case 6:
            printf("Carta1: Densidade Populacional\n");
            printf("Informe população e área:\n");
            scanf("%lu %lf", &populacao1, &area1);
            Dens_populac1 = populacao1 / (float) area1;
            printf("A Dens. Populacional ==> %.2f\n", Dens_populac1);
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }
              // Escolha dos atributos da carta 2
    printf("Escolha uma opção para a Carta 2\n: ");
    scanf("%d", &carta2);

    switch (carta2) {
        case 1:
            printf("Carta2: Estado\n");
            scanf("%s", estado2);
            printf("O Estado ==> %s\n", estado2);
            break;
        case 2:
            printf("Carta2: População\n");
            scanf("%lu", &populacao2);
            printf("A População ==> %lu\n", populacao2);
            break;
        case 3:
            printf("Carta2: Área\n");
            scanf("%lf", &area2);
            printf("A Área ==> %lf\n", area2);
            break;
        case 4:
            printf("Carta2: PIB\n");
            scanf("%lf", &pib2);
            printf("O PIB ==> %lf\n", pib2);
            break;
        case 5:
            printf("Carta2: Pontos Turísticos\n");
            scanf("%d", &pontoturisticos2);
            printf("Os Pontos Turísticos ==> %d\n", pontoturisticos2);
            break;
        case 6:
            printf("Carta2: Densidade Populacional\n");
            printf("Informe população e área:\n");
            scanf("%lu %lf", &populacao2, &area2);
            Dens_populac2 = populacao2 / (float) area2;
            printf("A Dens. Populacional ==> %.2f\n", Dens_populac2);
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }
               // Comparação entre os atributos
    if (populacao1 == populacao2) {
        printf("\nEmpate!\n");
    } else if ((populacao1 > populacao2 && area1 > area2) || 
               (pib1 > pib2 && pontoturisticos1 > pontoturisticos2) || 
               (Dens_populac1 < Dens_populac2)) {
        printf("\n###### CARTA 1 GANHOUUUU ######\n");
    } else {
        printf("\n###### CARTA 2 GANHOUUUU ######\n");
    }

    return 0;
}
