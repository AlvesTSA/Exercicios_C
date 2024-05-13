/*3. Faça um programa, com uma função que necessite de três argumentos, e que forneça a soma desses três argumentos.*/

#include <stdio.h>
#include <locale.h>

float sum(float a, float b, float c){

    float resultado = a + b + c;

    return resultado;
}

int main(){

    const int size = 3;
    float num[size];
    setlocale(LC_ALL, "portuguese"); //saída e entrada tipo float com vírgula 
   
    for (int i = 0; i < size; i++)
    {
        printf("Informe o número %d: ",(i + 1));
        scanf("%f", &num[i]);
    }

    float result = sum(num[0],num[1],num[2]);
    printf("Soma dos números: %.2f",result);

    return 0;
}