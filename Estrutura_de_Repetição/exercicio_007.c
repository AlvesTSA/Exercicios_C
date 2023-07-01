/* Faça um programa que leia 5 números e informe o maior número. */

#include <stdio.h>

int main(){

    int contador = 1;
    int maior = 0;
    int num = 0;

    printf("informe o 1º numero : ");
    scanf("%d", &maior);

    for (contador = 1; contador < 5; contador++){
        
        printf("Informe o %dº numero: ",contador + 1);
        scanf("%d", &num);

        if (num > maior){

            maior = num;
        }
        
    }

    printf("O maior numero digitado: %d", maior);

    return 0;






                        //Utilizando while loop

/*  int contador = 1;
    int maior = 0;
    int num = 0;

    printf("informe o 1º numero : ");
    scanf("%d", &maior);

    while (contador < 5){

        printf("Informe o %dº numero: ",contador + 1);
        scanf("%d", &num);

        if (num > maior){

            maior = num;
        }

        contador++;
    }
    
    printf("O maior numero digitado: %d", maior);

    return 0;         */





                        //utilizando o do-while loop

 /* int contador = 1;
    int maior = 0;
    int num = 0;

    printf("informe o 1º numero : ");
    scanf("%d", &maior);

    do{
        
        printf("Informe o %dº numero: ",contador + 1);
        scanf("%d", &num);

        if (num > maior){

            maior = num;
        }

        contador++;

    } while (contador < 5);

    printf("O maior numero digitado: %d", maior);

    return 0;       */
    
}

