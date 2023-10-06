/*21. Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.*/

#include <stdio.h>

int main(){

    int primo = 1;
    int num = 0;
    int i = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if(num <= 1){

        primo = 0;
    }
    else{

        for(i = 2; i <= num / 2; i++){

            if(num % i == 0){

                primo = 0;
            }
        }
    }
    if(primo){

        printf("%d e um numero primo.", num);
    }
    else{

        printf("%d não e um numero primo.", num);
    }

    return 0;

}