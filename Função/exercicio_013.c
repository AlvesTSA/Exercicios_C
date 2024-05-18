/*13. Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/

#include <stdio.h>

int calcFatorial(int *numero){

    *numero = 0;
    int fatorial = 1;

    do
    {
        scanf("%d",numero);

        if (*numero < 0)
        {
            printf("ERRO: o numero informado deve ser maior ou igual a zero.\n");
        }
        
    } while (*numero < 0);
    
    for (int i = 2; i <= *numero; i++)
    {
        fatorial *= i;
    }
    
    return fatorial;
}

int main(){

    int num = 0;
    int fatorial = 0;

    printf("Informe um numero inteiro e positivo: ");

    fatorial = calcFatorial(&num);

    printf("%d! = %d",num,fatorial);

    return 0;
}