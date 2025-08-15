#include <stdio.h>
 // Desafio Super Trunfo - Países
int main() {

    printf("Desafio Super trunfo\n"); 

    // O jogo iniciará com duas cartas;

    printf("---- Carta 1--- | --- Carta 2 ---- \n");

   // Atribuiu variáveis a cada carta;

    char estado1[10], estado2[10];
    char codigodacarta1 [20], codigodacarta2 [20], Nomecidade1 [30], Nomecidade2[30];
    int populacao1, populacao2, numpontotur1, numpontotur2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    printf("DIGITE OS DADOS DA CARTAS (1)-(2):\n");

    // printf solicitação para atribuir os valores a cartas
    // scanf para o usúario digita o que se perde
    printf("Digite as íniciais do ESTADO:\n");
    scanf("%c", &estado1);

    printf("ESTADO:\n%c", estado1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
