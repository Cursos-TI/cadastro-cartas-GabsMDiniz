#include <stdio.h>

int main()
{
    // dados carta 1
    char estado_carta1;

    char Codigo_carta1[4];

    char Nome_Cidade_carta1[50];

    int populacao_carta1;

    float area_carta1;

    float PIB_carta1;

    int numero_ponto_turistico_carta1;

    // dados carta 2

    char estado_carta2;

    char Codigo_carta2[4];

    char Nome_Cidade_carta2[50];

    int populacao_carta2;

    float area_carta2;

    float PIB_carta2;

    int numero_ponto_turistico_carta2;

    printf("Insira os dados da carta 1 \n estado ");
    scanf("%c", &estado_carta1);
    printf("digite o codigo da carta\n  ");
    scanf("%s", &Codigo_carta1);
    printf("digite o nome da Cidade \n");
    scanf("%s", &Nome_Cidade_carta1);
    printf("digite o numero populacional da cidade\n ");
    scanf("%d", &populacao_carta1);
    printf("digite a area da cidade \n");
    scanf("%f", &area_carta1);
    printf("digite o PIB da cidade\n ");
    scanf("%f", &PIB_carta1);
    printf("digite o numero de pontos turisticos da cidade\n ");
    scanf("%d", &numero_ponto_turistico_carta1);

    printf("Insira os dados da carta 2 \n estado ");
    scanf("%c", &estado_carta2);
    printf("digite o codigo da carta\n  ");
    scanf("%s", &Codigo_carta2);
    printf("digite o nome da Cidade \n");
    scanf("%s", &Nome_Cidade_carta2);
    printf("digite o numero populacional da cidade\n ");
    scanf("%d", &populacao_carta2);
    printf("digite a area da cidade \n");
    scanf("%f", &area_carta2);
    printf("digite o PIB da cidade\n ");
    scanf("%f", &PIB_carta2);
    printf("digite o numero de pontos turisticos da cidade\n ");
    scanf("%d", &numero_ponto_turistico_carta2);

    printf("carta 1 \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %f  quilometros quadrados \n PIB: %f bilhoes de reais \n Numeros de pontos turisticos %d \n \n\n  ", estado_carta1, Codigo_carta1, Nome_Cidade_carta1, populacao_carta1, area_carta1, PIB_carta1, numero_ponto_turistico_carta1);
    printf("carta 2 \n Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %f  quilometros quadrados \n PIB: %f bilhoes de reais \n Numeros de pontos turisticos %d  ", estado_carta2, Codigo_carta2, Nome_Cidade_carta2, populacao_carta2, area_carta2, PIB_carta2, numero_ponto_turistico_carta2);
}