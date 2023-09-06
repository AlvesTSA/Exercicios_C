/*11. Altere o programa anterior para mostrar no final a soma dos números.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int soma = 0;
    int temp = 0;

    printf("Informe dois números:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){

        temp = num1;
        num1 = num2;
        num2 = temp;

    }

    printf("Intervalo entre %d e %d: ",num1,num2);

    while (num1 < num2 - 1){

        num1++;
        soma += num1;
        printf("%d ",num1);
    }

    printf("\nSoma do números: %d", soma);

    return 0;
    
}


