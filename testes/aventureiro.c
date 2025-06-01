#include <stdio.h>
#include <string.h>

//Declarando as variaveis usadas
char estado;
char codigo[4], nome[50];
int populacao, pontos_turisticos;
float area, pib, densidade_pop, pib_pc;

// Função para calcular densidade populacional e PIB per capita
void calcular_atributos() {
    densidade_pop = (float) populacao / area; //usando conversão explícita
    pib_pc = (float) pib / populacao;
}

// Função para inserir os dados da carta
void dados_carta() {
    printf("Estado (insira uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado);
    getchar(); // Limpa o buffer de entrada

    printf("Código da Carta (letra do estado + número de 01 a 04 (ex: A01, B03)): \n");
    scanf(" %s", codigo);
    getchar(); // Limpa o buffer de entrada

    printf("Nome da Cidade: \n");
    scanf(" %s", nome);
    getchar(); // Limpa o buffer de entrada

    printf("População (número de habitantes da cidade): \n");
    scanf(" %d", &populacao);

    printf("Área (em km²): \n");
    scanf(" %f", &area);

    printf("PIB (Produto Interno Bruto) da cidade: \n");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &pontos_turisticos);

    // Calcula os atributos derivados
    calcular_atributos();
}

// Função para exibir os dados da carta
void exibir_carta(int numero) {
    printf("Carta %d\n", numero);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade_pop);
    printf("PIB per capita: %.2f\n", pib_pc);
}

// Função principal
int main() {
    printf("Carta 1\n");
    dados_carta();
    
    printf("\nCarta 2\n");
    dados_carta();
    
    exibir_carta(1);
    exibir_carta(2);

    return 0;
}