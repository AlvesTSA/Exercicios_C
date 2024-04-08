/*11. Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 100 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size_l 100
#define size_c 10

int main(){

    const char respostas[] = "abcd";
    int size = sizeof(respostas) - 1;
    char matriz[size_l][size_c];
    char gabarito[size_c];
    int resultado[size_l] = {0};
    int count_acerto[size_l] = {0};
    srand(time(NULL));

    //Geração do gabarito
    for (int i = 0; i < size_c; i++){
        
        gabarito[i] = respostas[rand() % size];

    }

    for (int i = 0; i < size_l; i++){
        
        printf("Respostas do Aluno %d:\n",(i+1));

        for (int j = 0; j < size_c; j++){
            
            matriz[i][j] = respostas[rand() % size];
            printf("%c ",matriz[i][j]);

        }
        printf("\n");
    }

    for (int i = 0; i < size_l; i++){
        
        for (int j = 0; j < size_c; j++){
            
            if (matriz[i][j] == gabarito[j]){
                
                resultado[i] += 10;
                count_acerto[i]++;
            }
            else{
                
                resultado[i] += 0;
            }
        }
    }

    printf("\nGabarito: ");

    for (int i = 0; i < size_c; i++){
        
        printf("%c ",gabarito[i]);
    }

    printf("\n\n");

    for (int i = 0; i < size_l; i++){
        
        printf("Resultado do aluno %d: %d acertos e %d pontos\n",(i+1),count_acerto[i],resultado[i]);
    }
    
    return 0;  
}
