/*. Faça um Programa que leia um número e exiba o dia correspondente da semana. (1- Domingo , 2- Segunda, etc). Se digitar outro valor, deve aparecer “valor inválido.*/

#include <stdio.h>

int main(){

    int dia = 0;

    printf("Informe um valor de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia){

    case 2:
        printf("SEGUNDA");

        break;
    
    case 3:
        printf("TERÇA FEIRA");
        
        break;
    
    case 4:
        printf("QUARTA FEIRA");
        
        break;
    
    case 5:
        printf("QUINTA FEIRA");
        
        break;

     case 6:
        printf("SEXTA FEIRA");
        
        break;

     case 7:
        printf("SABADO");
        
        break;
    
    case 1:
        printf("DOMINGO");
        
        break;
    
    default:
        printf("VALOR INVÁLIDO");

        break;
    }

    return 0;

}