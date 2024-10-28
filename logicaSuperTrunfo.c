#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
char estado;
  char codigo[50];
  char cidade[50];
  unsigned long int populaçao;
  float area;
  float densidadePopulacional;
  float pib;
  float pibPerCapita;
  int turistico;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

  printf ("Digite o estado: \n");
  scanf ("%c", &estado);

  printf ("Digite o código da carta: \n");
  scanf ("%c", &codigo);
  
  printf ("Digite o nome da cidade: \n");
  scanf ("%c", &cidade);

  printf ("Digite a população: \n");
  scanf ("%u", &populaçao); 

  printf ("Digite o área: \n");
  scanf ("%.2f", &area);

  printf ("Digite o PIB: \n");
  scanf ("%.2f", &pib);

   printf ("Digite o número de pontos turísticos: \n");
  scanf ("%d", &turistico);
    
    // soma da Densidade Populacional e o PIB per Capita

   pibPerCapita = pib / populaçao;
  densidadePopulacional = populaçao / area;

 printf ("PIB per Capita: %d \n", pibPerCapita);

 printf ("Densidade populacional: %d \n", densidadePopulacional);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

     if (populacaoA > populacaoB) {
        printf("Cidade 1 tem maior população.\n");
     } else {
         printf("Cidade 2 tem maior população.\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

     printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
