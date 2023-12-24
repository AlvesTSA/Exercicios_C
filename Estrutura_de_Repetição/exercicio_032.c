/*32. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:

Fatorial de: 5 

5! =  5 . 4 . 3 . 2 . 1 = 120 
*/

#include <stdio.h>

int main(){

    int num = 0;

    printf("Informe um número ao qual deseja calcular o fatorial: ");
    scanf("%d", &num);
    printf("%d! = %d", num,num);

    for (int i = num -1; i > 0; i--){
        
        num = num * i;

        printf(" . %d",i);
    }

    printf(" = %d", num);

    return 0;
    
}