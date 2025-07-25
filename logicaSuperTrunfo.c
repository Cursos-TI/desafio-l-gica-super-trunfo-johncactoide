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

    int Atributo1, Atributo2, Resultado1, Resultado2;
    float Soma1, Soma2;

    printf("Escolha quais atributo vão ser comparados:\n");
    printf("1 para População\n");
    printf("2 para Área\n");
    printf("3 para PIB\n");
    printf("4 para Pontos Turisticos\n");
    printf("5 para Densidade Populacional\n");
    printf("6 para PIB per Capita\n");
    printf("7 para Super Poder\n");
    printf("\n");
    
    printf("Escolha o primeiro Atributo: ");
    scanf("%d", &Atributo1);

    switch (Atributo1)
    {
    case 1:
        Resultado1 = populacao > populacao2 ? 1 : 0;
        Soma1 = populacao;
        Soma2 = populacao2;
        break;
    case 2:
        Resultado1 = area > area2 ? 1 : 0;
        Soma1 = area;
        Soma2 = area2;
        break;
    case 3:
        Resultado1 = PIB > PIB2 ? 1 : 0;
        Soma1 = PIB;
        Soma2 = PIB2;
        break;
    case 4:
        Resultado1 = turismo > turismo2 ? 1 : 0;
        Soma1 = turismo;
        Soma2 = turismo2;
        break;
    case 5:
        Resultado1 = densidade < densidade2 ? 1 : 0;
        Soma1 = densidade;
        Soma2 = densidade2;
        break;
    case 6:
        Resultado1 = PIBpercapita > PIBpercapita2 ? 1 : 0;
        Soma1 = PIBpercapita;
        Soma2 = PIBpercapita2;
        break;
    case 7:
        Resultado1 = SUPER > SUPER2 ? 1 : 0;
        Soma1 = SUPER;
        Soma2 = SUPER2;
        break;
    default:
        printf("Opção Invalida!");
        break;
    }
    
    printf("Escolha o segundo Atributo: ");
    scanf("%d", &Atributo2);
    
    if (Atributo1 == Atributo2){
        printf("Você escolheu o mesmo atributo!");
    } else {
        
    switch (Atributo2)
    {
    case 1:
    Resultado1 = populacao > populacao2 ? 1 : 0;
    Soma1 += populacao;
    Soma2 += populacao2;
    break;
    case 2:
    Resultado1 = area > area2 ? 1 : 0;
    Soma1 += area;
    Soma2 += area2;
    break;
    case 3:
    Resultado1 = PIB > PIB2 ? 1 : 0;
    Soma1 += PIB;
    Soma2 += PIB2;
    break;
    case 4:
    Resultado1 = turismo > turismo2 ? 1 : 0;
    Soma1 += turismo;
    Soma2 += turismo2;
    break;
    case 5:
    Resultado1 = densidade < densidade2 ? 1 : 0;
    Soma1 += densidade;
    Soma2 += densidade2;
    break;
    case 6:
    Resultado1 = PIBpercapita > PIBpercapita2 ? 1 : 0;
    Soma1 += PIBpercapita;
    Soma2 += PIBpercapita2;
    break;
    case 7:
    Resultado1 = SUPER > SUPER2 ? 1 : 0;
    Soma1 += SUPER;
    Soma2 += SUPER2;
    break;
    default:
    printf("Opção Invalida!");
    break;
}
}
// carta 1
    printf("\n");
    if (Atributo1 == 1) {
        printf("Carta 1\n");
        printf("População: %d\n", populacao);
    } else if (Atributo1 == 2){
        printf("Carta 1\n");
        printf("Área: %f\n", area);
    } else if (Atributo1 == 3){
        printf("Carta 1\n");
        printf("PIB: %f\n", PIB);
    } else if (Atributo1 == 4) {
        printf("Carta 1\n");
        printf("Pontos Turisticos: %d\n", turismo);
    } else if (Atributo1 == 5){
        printf("Carta 1\n");
        printf("Densidade Populacional: %f\n", densidade);
    } else if (Atributo1 == 6){
        printf("Carta 1\n");
        printf("PIB per Capita: %f\n", PIBpercapita);
    } else if (Atributo1 == 7){
        printf("Carta 1\n");
        printf("Super Poder: %f\n", SUPER);
    }

    if (Atributo2 == 1) {
        printf("População: %d\n", populacao);
    } else if (Atributo2 == 2){
        printf("Área: %f\n", area);
    } else if (Atributo2 == 3){
        printf("PIB: %f\n", PIB);
    } else if (Atributo2 == 4) {
        printf("Pontos Turisticos: %d\n", turismo);
    } else if (Atributo2 == 5){
        printf("Densidade Populacional: %f\n", densidade);
    } else if (Atributo2 == 6){
        printf("PIB per Capita: %f\n", PIBpercapita);
    } else if (Atributo2 == 7){
        printf("Super Poder: %f\n", SUPER);
    }

    printf("Soma: %.2f\n", Soma1);

    //carta 2
    printf("\n");
    if (Atributo1 == 1) {
        printf("\nCarta 2\n");
        printf("População: %d\n", populacao2);
    } else if (Atributo1 == 2){
        printf("Carta 2\n");
        printf("Área: %f\n", area2);
    } else if (Atributo1 == 3){
        printf("Carta 2\n");
        printf("PIB: %f\n", PIB2);
    } else if (Atributo1 == 4) {
        printf("Carta 2\n");
        printf("Pontos Turisticos: %d\n", turismo2);
    } else if (Atributo1 == 5){
        printf("Carta 2\n");
        printf("Densidade Populacional: %f\n", densidade2);
    } else if (Atributo1 == 6){
        printf("Carta 2\n");
        printf("PIB per Capita: %f\n", PIBpercapita2);
    } else if (Atributo1 == 7){
        printf("Carta 2\n");
        printf("Super Poder: %f\n", SUPER2);
    }

    if (Atributo2 == 1) {
        printf("População: %d\n", populacao2);
    } else if (Atributo2 == 2){
        printf("Área: %f\n", area2);
    } else if (Atributo2 == 3){
        printf("PIB: %f\n", PIB2);
    } else if (Atributo2 == 4) {
        printf("Pontos Turisticos: %d\n", turismo2);
    } else if (Atributo2 == 5){
        printf("Densidade Populacional: %f\n", densidade2);
    } else if (Atributo2 == 6){
        printf("PIB per Capita: %f\n", PIBpercapita2);
    } else if (Atributo2 == 7){
        printf("Super Poder: %f\n", SUPER2);
    }

    printf("Soma: %.2f\n", Soma2);

    printf("\n");

    if (Soma1 > Soma2){
        printf("Carta 1 Venceu!\n");
    } else if (Soma1 == Soma2){
        printf("Empate!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    }

    return 0;
}
