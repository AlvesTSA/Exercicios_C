/*14. Faça um procedimento que lê 50 valores inteiros e retorna o maior e o menor deles.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void maior_menor(int *maior,int *menor){

    srand(time(NULL));
    int valores = 0;
    *maior = INT_MIN;// Inicializa o maior com o menor valor possível de um inteiro (#include <limits.h>)
    *menor = INT_MAX;// Inicializa o menor com o maior valor possível de um inteiro (#include <limits.h>)

    for (int i = 0; i < 50; i++){
        
        valores = rand() % 10000; //usado para gerar numeros aleatórios e simular entrada do usuário.

        //scanf("%d",&valores); 

        if (valores > *maior)
        {
            *maior = valores;
            
        }
        if (valores < *menor)
        {
            *menor = valores;
        } 
    }
}

int main(){

    int maior,menor = 0;

    printf("informe 50 valores inteiros: \n");

    maior_menor(&maior,&menor);

    printf("Maior: %d\nMenor: %d",maior,menor);

    return  0;
}