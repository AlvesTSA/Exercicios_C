//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

#include <stdio.h>

int main(){
    
    int numero;

    printf("Digite um numero: ");

    scanf("%d", &numero);
    
    printf("O numero informado foi %d\n", numero);

    return 0;

}