/*20. Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.*/

#include <stdio.h>

int main(){

    int num = 0;
    int i = 0;
    int fatorial = 0;
    int op = 0;

    do{

        do{
            printf("Informe o valor ao qual deseja calcular o fatorial: ");
            scanf("%d", &num);

            if (num <= 0 || num >= 16){

                printf("Erroe: informe um numero entrem 0 e 16.\n");
            }
            
        } while (num <= 0 || num >= 16);
        
        fatorial = num;

        for (i = num - 1; i > 0 ; i--){
            
            num = num*i;

        }
        
        printf("Resultado: %d! = %d\n",fatorial, num);
        printf("Digite 0 para sair ou 1 para continuar: ");
        scanf("%d", &op);

    } while (op == 1);
    
    return 0;

}