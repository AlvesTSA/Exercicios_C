/*18. . Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.*/

#include <stdio.h>

int main(){

    int num = 0;
    int maior = 0;
    int menor = 0;
    int soma = 0;
    int n = 0;
    int i = 0;
    int temp = 0;

    printf("Infrome quantos numeros deseja inserir: ");
    scanf("%d", &n);

    printf("Infrome os numeros:\n");
    scanf("%d %d", &maior, &menor);

    soma = maior + menor;

    if (maior > menor){
        
        maior = maior;
    }
    else{

        temp = maior;
        maior = menor;
        menor = temp;
    }
    
    for (i = n - 2; i > 0; i--){
        
        scanf("%d", &num);
        soma += num; 

        if (num > maior && maior > menor){

            maior = num;
        }
        else if (num < menor && menor < maior){
            
            menor = num;
        }
    }
    
    printf("    Maior = %d\n    Menor = %d\n    Soma = %d", maior,menor,soma);

    return 0;

}

