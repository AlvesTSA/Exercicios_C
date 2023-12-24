/*34. Os números primos possuem várias aplicações dentro da Computação, por exemplo na Criptografia. Um número primo é aquele que é divisível apenas por um e por ele mesmo. Faça um programa que peça um número inteiro e determine se ele é ou não um número primo.*/

#include <stdio.h>

int main(){

    int num = 0;
    int divisivel = 0;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        
        int resto = num % i;

        if (resto == 0){
            
            divisivel++;
        }
    }
    if (divisivel > 2){
        printf("Primo: nao");
    }
    else{
        printf("Primo: sim");
    }
    return 0;
    
}