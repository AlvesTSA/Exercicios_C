/*15. Faça um jogo de batalha naval, utilize as seguinte regras:

– O primeiro usuário será o que vai configurar o tabuleiro inserindo os navios. – O tabuleiro deve ter 8×8 – Quando inserido todos os navios o restante será considerado como “água”. – Cada navio pode ocupar apenas 1 posição – O jogador deve respeitar o espaço de 1 célula entre os navios – O jogador que irá descobrir onde os navios estão tem apenas 10 tiros – O jogador 1 pode posicionar 5 navios*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 8

int main(){

    int tabuleiro[size][size];
    srand(time(NULL));
    int linha = 0;
    int coluna = 0;
    const int tiros = 10;
    const int quant_navios = 5;

    for (int i = 0; i < quant_navios; i++){
        
        do{
            linha = rand() % size;
            coluna = rand() % size;

        } while (tabuleiro[linha][coluna] == 1);
        
        tabuleiro[linha][coluna] = 1;
    }

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            if (tabuleiro[i][j] != 1){
                
                tabuleiro[i][j] = 0;
            }
        }  
    }
    
    linha = 0;
    coluna = 0;
    int abatido = 0;

    for (int i = 0; i < tiros; i++){
        
        printf("infome linha: ");
        scanf("%d",&linha);
        printf("infome coluna: ");
        scanf("%d",&coluna);
        linha -= 1; 
        coluna -= 1;

        if (tabuleiro[linha][coluna] == 1){
            
            printf("Navio abatido\n");
            abatido++;
        }
        else{

            printf("Errou\n");
        }
    }

    printf("\nVoce afundou %d navio(s)",abatido);

    return 0;
}