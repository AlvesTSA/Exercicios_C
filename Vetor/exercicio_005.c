/*5. Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.*/

#include <stdio.h>

int main(){

    int numeros[20];
    float resto = 0;
    int count_par = 0;
    int count_impar = 0;

    printf("Informe 20 numeros inteiros:\n");

    for (int i = 0; i < 20; i++){
        
        scanf("%d", &numeros[i]);
        resto = numeros[i] % 2;

        if (resto == 0){

            count_par++;
        }
        else{

            count_impar++;
        }
        
    }

    int par[count_par];
    int impar[count_impar];
    int y = 0;
    int z = 0;

    for (int i = 0; i < 20; i++){
        
        resto = numeros[i] % 2;

        if (resto == 0){
                
            par[y] = numeros[i];
            y++;  
        }
        else{
    
            impar[z] = numeros[i];
            z++;  
        }
        
    }

    printf("numeros inseridos: ");

    for (int i = 0; i < 20; i++){
        
        printf("%d ",numeros[i]);
    }
    
    printf("\n\nNumeoros impares: ");

    for (z = 0; z < count_impar; z++){
        
        printf("%d ", impar[z]);
    }
    
    printf("\n\nNumeros pares: ");

    for (y = 0; y < count_par; y++){
        
        printf("%d ", par[y]);
    }

    return 0;
}