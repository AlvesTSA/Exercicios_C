/*7. Leia duas matrizes 4 x 4 e escreva uma terceira com os 4 maiores elementos entre as primeiras*/

#include <stdio.h>

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int maiores[32]; // Vamos armazenar os maiores valores de ambas as matrizes aqui
    int k = 0; // Índice para percorrer o array de maiores valores
    int matrizResultante[4][4]; // Matriz para armazenar os 4 maiores valores

    printf("Informe os elementos da matriz A:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
            maiores[k++] = matrizA[i][j];
        }
    }

    printf("Informe os elementos da matriz B:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
            maiores[k++] = matrizB[i][j];
        }
    }

    // Ordenar os maiores valores em ordem decrescente
    for (int i = 0; i < 31; i++) {
        for (int j = i + 1; j < 32; j++) {
            if (maiores[i] < maiores[j]) {
                int temp = maiores[i];
                maiores[i] = maiores[j];
                maiores[j] = temp;
            }
        }
    }

    // Preencher a matriz resultante com os 4 maiores valores
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizResultante[i][j] = maiores[j];
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
