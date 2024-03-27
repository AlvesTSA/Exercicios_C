/*4. Leia uma matriz 4 x 4 e troque os valores da 1ª.linha pelos da 4ª.coluna, vice-e-versa. Escrever ao final a matriz obtida*/

/*#include <stdio.h>

int main(){

    int matrix[4][4];
    int linha[4];
    int coluna[4];
    int i,j = 0;

    printf("Informe 16 numeros inteiros: ");

    for (i = 0; i < 4; i++){
        
        for (j = 0; j < 4; j++){
            
            scanf("%d",&matrix[i][j]);
        }
    }

    for (i = 0; i < 4; i++){
        
        for (j = 0; j < 4; j++){
            
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 4; i++){
        
        linha[i] = matrix[0][i];
        coluna[i] = matrix[i][3];
        matrix[i][3] = linha[i];
        matrix[0][i] = coluna[i];
    }
    
    for (i = 0; i < 4; i++){
        
        for (j = 0; j < 4; j++){
            
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>

#define TAMANHO_MATRIZ 4

int main() {
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int temp[TAMANHO_MATRIZ]; // Array temporário para armazenar a primeira linha

    // Ler a matriz 4x4
    printf("Digite os valores da matriz %dx%d:\n", TAMANHO_MATRIZ, TAMANHO_MATRIZ);
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Trocar os valores da primeira linha com os da quarta coluna
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        temp[i] = matriz[0][i]; // Armazenar os valores da primeira linha no array temporário
        matriz[0][i] = matriz[i][TAMANHO_MATRIZ - 1]; // Trocar os valores da primeira linha com os da quarta coluna
        matriz[i][TAMANHO_MATRIZ - 1] = temp[i]; // Trocar os valores da quarta coluna com os da primeira linha
    }

    // Imprimir a matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        for (int j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
