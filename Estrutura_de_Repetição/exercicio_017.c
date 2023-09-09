/*17. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120 */

#include <stdio.h>

int main(){

    int num = 0;
    int i = 0;
    int fatorial = 0;

    printf("Informe o valor ao qual deseja calcular o fatorial: ");
    scanf("%d", &num);

    fatorial = num;

    for (i = num - 1; i > 0 ; i--){
        
        num = num*i;

    }
    
    printf("Resultado: %d! = %d",fatorial, num);

    return 0;

}