#include <stdio.h>
// desafio 

int main() {
    char cartas[3];
    char estado[3];
    char codigo[10];
    char cidade[40];
    int populacao;
    float area;
    float pib;  
    int pontos_turisticos;

    // Área para entrada de dados
    printf("Digite o numero da carta: \n");
    scanf("%s", cartas);

    printf("Digite seu estado: \n");
    scanf("%s", estado);

    printf("Digite seu codigo: \n");
    scanf("%s", codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);

    printf("Digite o numero de população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    // Área para Saida de dados 

    printf("Digite os pontos_turisticos: \n");
    scanf("%d",  &pontos_turisticos);

    printf("Carta: %s - Estado: %s - Codigo: %s - Cidade: %s\n" , cartas, estado, codigo, cidade);
    printf("população: %d - area: %.2f - pib: %.2f - pontos_turísticos: %d\n", &populacao, &area, &pib, &pontos_turisticos);


    return 0;
    
}