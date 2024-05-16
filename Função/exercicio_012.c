/*12. Faça uma função que leia um número não determinado de valores positivos e retorna a média aritmética dos mesmos.*/

#include <stdio.h>

float mediaAritmetica(){

    float media = 0.0;
    float numero = 0.0;
    int count = 0;

    printf("Informe numeros inteiros ou informe -1 para sair:\n");

    do
    {
        scanf("%f",&numero);

        if (numero == -1)
        {
            break;
        }
        
        media += numero;
        count++;
        
    } while (numero != -1);

    return media / count;
}

int main(){

    float media = mediaAritmetica();
    
    printf("Media aritmetica: %.2f",media);

    return 0;
}