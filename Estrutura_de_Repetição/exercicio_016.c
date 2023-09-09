/*16. A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 1;
    int num = 0;
    int i = 0;

    printf("sequancia de Fibonacci ate o primeiro valor maior que 500: ");

    while (num < 611){
        
        printf("%d, ",num2);
        num = num1 + num2;
        num1 = num2;
        num2 = num;
        i++;
    }
     
    printf("\nPosicao %d : %d", i, num1);

    return 0;
    
}