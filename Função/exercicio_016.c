/*16. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.*/

#include <stdio.h>

int divisores(int valor){

    float resto = 0;
    int count = 0;

    for (int i = 1; i <= valor; i++)
    {
        resto = valor % i;

        if (resto == 0)
        {
            count++;
        }
    }
    
    return count;
}

int main(){

    int count = 0;
    int valor = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d",&valor);

    count = divisores(valor);

    printf("O valor informado e divisivel por %d numeros.",count);

    return 0;
}