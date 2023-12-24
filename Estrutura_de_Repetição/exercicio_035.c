/*35. Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos números primos existentes entre 1 e um número inteiro informado pelo usuário.*/

#include <stdio.h>

int main(){

    int num = 0;
    int divisivel = 0;

    printf("Informe um número inteiro para determinar o intervalo de numeros primos: ");
    scanf("%d", &num);
    printf("Primos entre 1 e %d: ",num);

    for (int i = 1; i <= num; i++){
        
        divisivel = 0;
        
        for (int y = 1; y <= i; y++){
            
            int resto = i % y;

            if (resto == 0){
                
                divisivel++;
            }
        }
        if (divisivel < 3){
            printf("%d ", i);
        }
        
    }
    
   
    return 0;
    
}