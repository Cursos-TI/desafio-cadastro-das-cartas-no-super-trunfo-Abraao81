#include <stdio.h>
 // Desafio Super Trunfo - Países
int main() {

    printf("Desafio Super trunfo\n"); 

    // O jogo iniciará com duas cartas;

    printf("---- Carta 1--- | --- Carta 2 ---- \n");

   // Atribuiu variáveis a cada carta;

    char estado1, estado2;
    char codigodacarta1 [30], codigodacarta2 [30], Nomecidade1 [30], Nomecidade2[30];
    unsigned long int populacao1, populacao2;
    int numpontotur1, numpontotur2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    printf("DIGITE OS DADOS DA CARTAS (1)-(2):\n");

    // printf imprimindo a mensagen que solicita ao usuario; a informação da carta 1.
    // scanf para o usúario digita o que se perde
    printf("Inicial do ESTADO:\n");
    scanf(" %c", &estado1);

    printf("CODIGO da carta 1:\n"); // Digita o Código da carta 1.
    scanf(" %3s", codigodacarta1);  // o usúario digita

    printf("Nome da CIDADE da carta 1:\n"); // Digita o nome da cidade carta 1.
    scanf(" %29[^\n]", Nomecidade1); // o usúario digita

    printf("POPULAÇÃO da carta 1:\n"); // Digitao a população da carta 1.
    scanf(" %lu", &populacao1); // o usúario digita.

    printf("AREA em Km² da carta 1:\n"); // Digita a Área em KM² da carta 1.
    scanf(" %f", &area1);// o usúario digita

    printf("PIB da carta 1:\n"); // Digita o PIB da carta 1.
    scanf(" %f", &pib1);  // o usúario digita

    printf("Digite o numero de Pontos turisticos do estado da carta 1:\n"); // Digita o números de pontos turisticos da carta 1.
    scanf(" %d", &numpontotur1);  // o usúario digita.

    // printf imprimindo a mensagen que solicita ao usuario; a informação da carta 2.
    // scanf para o usúario digita o que se perde

    printf("Inicial do ESTADO:\n");
    scanf(" %c", &estado2);

    printf("CODIGO da carta 2:\n"); // Digita o Código da carta 2.
    scanf(" %3s", codigodacarta2);  // o usúario digita

    printf("Nome da CIDADE da carta 2:\n"); // Digita o nome da cidade carta 2.
    scanf(" %29[^\n]", Nomecidade2); // o usúario digita 

    printf("POPULAÇÃO da carta 2:\n"); // Digitao a população da carta 2.
    scanf(" %lu", &populacao2); // o usúario digita.

    printf("AREA em Km² da carta 2:\n"); // Digita a Área em KM² da carta 2.
    scanf(" %f", &area2);// o usúario digita

    printf("PIB da carta 2:\n"); // Digita o PIB da carta 2.
    scanf(" %f", &pib2);  // o usúario digita.

    printf("Pontos turisticos do estado da carta 2:\n"); // Digita o números de pontos turisticos da carta 2.
    scanf(" %d", &numpontotur2);  // o usúario digita

    // Exibição dos Dados das Cartas:

    printf("ESTADO: %c", estado1);
    printf("CODIGO: %3s", codigodacarta1);
    printf("CIDADE: %s\n", Nomecidade1);
    printf("POPULAÇÂO: %lu", populacao1);
    printf("AREA:%2.f", area1);
    printf("PIB:%2.f", pib1);
    printf("PONTO TURISTICOS:%d\n", numpontotur1);

     printf("ESTADO: %c", estado2);
    printf("CODIGO: %3s", codigodacarta2);
    printf("CIDADE: %s\n", Nomecidade2);
    printf("POPULAÇÂO: %lu", populacao2);
    printf("AREA:%2.f", area2);
    printf("PIB:%2.f", pib2);
    printf("PONTO TURISTICOS:%d\n", numpontotur2);


    

    return 0;
}
