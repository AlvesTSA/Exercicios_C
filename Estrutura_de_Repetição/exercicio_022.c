/*22. Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.*/

#include <stdio.h>

int main(){

    int primo = 1;
    int num = 0;
    int i = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if(num == 1){

        primo = 0;

        printf("O numero 1 so e divisivel por ele mesmo.");

    }
    else if(num < 0){
        
        primo = 0;

        printf("Numeros negativos nao sao considerados como primo.");

    }
    else if(num == 0){

        primo = 0;

        printf("Zero e um numero nulo.");
    }
    else{
        
        printf("%d e divisivel por 1\n%d e divisivel por %d\n", num, num, num);

        for(i = 2; i <= num / 2; i++){

            if(num % i == 0){

                primo = 0;

                
                printf("%d e divisivel por %d\n", num, i);
            }
        }
    }
    if(primo){

        printf("%d e um numero primo.", num);
    }
    else{

        printf("Portanto, %d nao e um numero primo. Numeros primos sao divisiveis apenas por 1 e por ele mesmo.", num);
    }

    return 0;

}