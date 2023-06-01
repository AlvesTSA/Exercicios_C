/*Crie um programa que peça um número ao usuário e armazene ele na variável x. Depois peça outro número e armazene na variável y. Mostre esses números. Em seguida, faça com que x passe a ter o valor de y, e que y passe a ter o valor de x.*/

#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;
    int temp = 0;

    printf("Informe um número: ");
    scanf("%d", &x);
    printf("Informe outro número: ");
    scanf("%d", &y);

    printf("Primero: %d\n", x);
    printf("Segundo: %d\n", y);

    temp = x;
    x = y;
    y = temp;
    
    printf("Primero: %d\n", x);
    printf("Segundo: %d", y);

    return 0;
}