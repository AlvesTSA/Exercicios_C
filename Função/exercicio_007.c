/*7. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano.*/

#include <stdio.h>
#include <stdbool.h>
/*
bool positivo_negativo(int numero){

    if (numero > 0)
    {
        return true;
    }
    else
    {
        return false;
    }  
}

int main(){

    int num = 0;
    bool P_N = 0;

    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    P_N = positivo_negativo(num);

    if (P_N == true)
    {
        printf("O valor informado e positivo.");
    }
    else
    {
        printf("O valor informado e negativo.");
    }
    
    return 0;
}
*/

bool positivo_negativo(int numero){

   return numero > 0;
    
}

int main(){

    int num = 0;
    
    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    if (positivo_negativo(num))
    {
        printf("O valor informado e positivo.");
    }
    else
    {
        printf("O valor informado e negativo.");
    }
    
    return 0;
}