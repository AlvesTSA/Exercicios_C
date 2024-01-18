/*23. Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene os resultados em um vetor . Depois, mostre quantas vezes cada valor foi conseguido. Dica: use um vetor de contadores(1-6) e uma função para gerar numeros aleatórios, simulando os lançamentos dos dados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Número de lançamentos
    int numLancamentos = 100;

    // Vetor para armazenar os resultados dos lançamentos
    int resultados[numLancamentos];

    // Vetor de contadores para cada valor possível (1-6)
    int contadores[6] = {0};

    // Realiza os lançamentos e armazena os resultados no vetor
    for (int i = 0; i < numLancamentos; i++) {
        resultados[i] = rand() % 6 + 1;

        // Incrementa o contador correspondente ao valor obtido
        contadores[resultados[i] - 1]++;
    }

    // Exibe os resultados
    printf("Resultados dos %d lançamentos:\n", numLancamentos);
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: %d vezes\n", i + 1, contadores[i]);
    }

    return 0;
}
