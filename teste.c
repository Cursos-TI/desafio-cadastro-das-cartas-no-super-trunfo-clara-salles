#include <stdio.h>

int main() {
    char estado1, estado2; //letra de A a H
    char codigo1, codigo2; //número de 01 a 04
    char[50] cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_t1, pontos_t2;

    
    // Cadastro da Carta 1:
    printf("Insira os dados da Carta 1\n Digite uma letra de A a H: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (letra escolhida anteriormente + número entre 01 e 04): \n");
    scanf("%c", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%c", cidade1);

    printf("Digite o tamanho da população: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%.2f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%.2f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_t1);

    
    // Cadastro da Carta 2:
    printf("Insira os dados da Carta 2\n Digite uma letra de A a H: \n");
    scanf("%c", &estado2);

    printf("Digite o código da carta (letra escolhida anteriormente + número entre 01 e 04): \n");
    scanf("%c", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%c", cidade2);

    printf("Digite o tamanho da população: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%.2f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%.2f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_t2);

    
    // Imprimindo da Carta 1:
    printf("Carta 1\n")
    printf("Estado: %c\n", estado1);
    printf("Código: %c\n", codigo1);
    printf("Nome da Cidade: %c", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    scanf("Número de Pontos Turísticos: %i\n", pontos_t1);

    
    // Imprimindo da Carta 2:
    printf("Carta 2\n")
    printf("Estado: %c\n", estado2);
    printf("Código: %c\n", codigo2);
    printf("Nome da Cidade: %c", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    scanf("Número de Pontos Turísticos: %i\n", pontos_t2);
    
    return 0;
}
