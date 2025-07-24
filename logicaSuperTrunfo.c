#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turismo;
    double densidade;
    float PIBpercapita;
    float SUPER;

    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;
    double densidade2;
    float PIBpercapita2;
    float SUPER2;

    
    // Cadastro das Cartas:

    printf("Carta 1\n\n");
    
    printf("Estado: ");
    scanf("%c", &estado);
    
    printf("Código: ");
    scanf("%s", &codigo);
    
    printf("Cidade: ");
    scanf("%s", &cidade);
    
    printf("População: ");
    scanf(" %d", &populacao);
    
    printf("Área: ");
    scanf(" %f", &area);
    
    printf("PIB: ");
    scanf(" %f", &PIB);
    
    printf("Pontos Turísticos: ");
    scanf(" %d", &turismo);
    
    densidade = populacao/area;
    PIBpercapita = PIB/populacao;
    SUPER = populacao + area + PIB + turismo + PIBpercapita + (densidade * -1);
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita);
    printf("Super Poder: %.2f\n\n", &SUPER);
    
    
    printf("Carta 2\n\n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf(" %s", &codigo2);
    
    printf("Cidade: ");
    scanf(" %s", &cidade2);
    
    printf("População: ");
    scanf(" %d", &populacao2);
    
    printf("Área: ");
    scanf(" %f", &area2);
    
    printf("PIB: ");
    scanf(" %f", &PIB2);
    
    printf("Pontos Turísticos: ");
    scanf(" %d", &turismo2);
    
    densidade2 = populacao2/area2;
    PIBpercapita2 = PIB2/populacao2;
    SUPER2 = populacao2 + area2 + PIB2 + turismo2 + PIBpercapita2 + (densidade2 * -1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2f\n\n", &SUPER2);

    // Comparação de Cartas:

    int Atributo;

    printf("Escolha qual atributo vai ser comparado:\n");
    printf("1 para População\n");
    printf("2 para Área\n");
    printf("3 para PIB\n");
    printf("4 para Pontos Turisticos\n");
    printf("5 para Densidade Populacional\n");
    printf("6 para PIB per Capita\n");
    printf("7 para Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &Atributo);

    switch (Atributo)
    {
    case 1:
        printf("\nComparando População\n");
        if (populacao > populacao2) {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (populacao < populacao2){
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 2:
        printf("\nComparando Área\n");
        if (area > area2){
            printf("Carta 1 - %s: %.2f\n", cidade, area);
            printf("Carta 2 - %s: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (area < area2) {
            printf("Carta 1 - %s: %.2f\n", cidade, area);
            printf("Carta 2 - %s: %.2f\n", cidade2, area2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 3:
        printf("\nComparando PIB\n");
        if (PIB > PIB2){
            printf("Carta 1 - %s: %.2f\n", cidade, PIB);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIB2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (PIB < PIB2){
            printf("Carta 1 - %s: %.2f\n", cidade, PIB);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIB2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 4:
        printf("\nComparando Pontos Turisticos\n");
        if (turismo > turismo2) {
            printf("Carta 1 - %s: %d\n", cidade, turismo);
            printf("Carta 2 - %s: %d\n", cidade2, turismo2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (turismo < turismo2) {
            printf("Carta 1 - %s: %d\n", cidade, turismo);
            printf("Carta 2 - %s: %d\n", cidade2, turismo2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 5:
        printf("\nComparando Densidade Populacional\n");
        if (densidade < densidade2){
            printf("Carta 1 - %s: %.2f\n", cidade, densidade);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (densidade > densidade2){
            printf("Carta 1 - %s: %.2f\n", cidade, densidade);
            printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 6:
        printf("\nComparando PIB per Capita\n");
        if (PIBpercapita > PIBpercapita2){
            printf("Carta 1 - %s: %.2f\n", cidade, PIBpercapita);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIBpercapita2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (PIBpercapita < PIBpercapita2) {
            printf("Carta 1 - %s: %.2f\n", cidade, PIBpercapita);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIBpercapita2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    case 7:
        printf("\nComparando Super Poder\n");
        if (SUPER > SUPER2){
            printf("Carta 1 - %s: %.2f\n", cidade, SUPER);
            printf("Carta 2 - %s: %.2f\n", cidade2, SUPER2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (SUPER < SUPER2) {
            printf("Carta 1 - %s: %.2f\n", cidade, SUPER);
            printf("Carta 2 - %s: %.2f\n", cidade2, SUPER2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Carta 1 - %s: %d\n", cidade, populacao);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);
            printf("Resultado: Empate!");
        }
        break;
    
    default:
        printf("Invalido!");
        break;
    }

    return 0;
}
