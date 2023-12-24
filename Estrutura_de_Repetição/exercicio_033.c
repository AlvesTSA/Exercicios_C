/*33. O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um conjunto indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas, bem como a média das temperaturas.*/

#include <stdio.h>

int main(){

    int t = 0;
    int soma = 0;
    float media = 0;
    int maior = 0;
    int menor = 0;
    int op = 0;
    int i = 1;

    printf("Informe a temperatura 1: ");
    scanf("%d", &t);
    maior = t;
    menor = t;
    soma = t;
    do{
        i++;
        printf("Informe a temperatura %d: ",i);
        scanf("%d", &t);
        soma += t;
        if (t > maior){
            maior = t;
        }
        else if(t < menor){
            menor = t;
        }

        printf("Deseja adicionar mais uma temperatura ? [0]-Nao [1]-Sim: ");
        scanf("%d", &op);
        
    } while (op == 1);
    
    media = (float)soma/i;

    printf("Maior temperatura: %d", maior);
    printf("\nMenor temperatura: %d", menor);
    printf("\nTemperatura media: %.2f", media);

    return 0;
}