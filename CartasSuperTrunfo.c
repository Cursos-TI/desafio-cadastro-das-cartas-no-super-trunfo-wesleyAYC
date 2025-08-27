#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){

    printf("Desafio Cartas Supertrunfo\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[2] = "BA";
    char codigo[20] = "B01";
    char cidade[20] = "SALVADOR";
    int populacao = 14850513;
    float area = 567.295;
    float PIB = 352.618;
    int pontos = 10;

    char estado[2] = "CE";
    char codigo[20] = "C02";
    char cidade[20] = "FORTALEZA";
    int populacao = 8794957;
    float area = 148.886;
    float PIB = 194.885;
    int pontos = 15;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da carta: ");
    scanf("%s", &codigo);
    printf("O código da carta é: %s\n", codigo);

    printf("Digite o estado: ");
    scanf("%s", &estado);
    printf("O estado é: %s\n", estado);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite a população do estado: ");
    scanf("%d", &populacao);
    printf("A população do estado é: %d\n", populacao);

    printf("Digite a área do estado: ");
    scanf("%f", &area);
    printf("A área do estado é: %f\n", area);

    printf("Digite o PIB do estado: ");
    scanf("%f", &PIB);
    printf("O PIB do estado é: %f\n", PIB);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos);
    printf("A quantidade de pontos turísticos é: %d\n", pontos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("O código da carta é: %s\n", codigo);
    printf("O estado é: %s\n", estado);
    printf("A cidade do estado %s é: %s\n", estado, cidade);
    printf("A população do estado %s é: %d\n", estado, populacao);
    printf("A área do estado %s é: %f\n", estado, area);
    printf("O PIB do estado %s é: %f\n", estado, PIB);
    printf("A quantidade de pontos turísticos é: %d\n", pontos);

    /*
    printf ("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    return 0;
}
