/*13. Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).*/

#include <stdio.h>

int main(){

    float temp_mes[12];
    float soma = 0;
    float media = 0;

    for (int i = 0; i < 12; i++){
        
        printf("Informe a temperatura media do mes %d: ",i + 1);
        scanf("%f", &temp_mes[i]);

        soma += temp_mes[i];
    }

    media = soma / 12;
    
    printf("\nTemperatura media do ano: %.2f\n", media);
    printf("Meses com temperatura acima da media\n");
    
    for (int i = 0; i < 12; i++){
        
        if (temp_mes[i] > media){
        
            switch (i + 1){

            case 1:
                printf("1 - Janeiro: %.2f graus celcius",temp_mes[i]);
                break;
            case 2:
                printf("\n2 - Fevereiro: %.2f graus celcius",temp_mes[i]);
                break;
            case 3:
                printf("\n3 - Marco: %.2f graus celcius",temp_mes[i]);
                break;
            case 4:
                printf("\n4 - Abril: %.2f graus celcius",temp_mes[i]);
                break;
            case 5:
                printf("\n5 - Maio: %.2f graus celcius",temp_mes[i]);
                break;
            case 6:
                printf("\n6 - Junho: %.2f graus celcius",temp_mes[i]);
                break;
            case 7:
                printf("\n7 - Julho: %.2f graus celcius",temp_mes[i]);
                break;
            case 8:
                printf("\n8 - Agosto: %.2f graus celcius",temp_mes[i]);
                break;
            case 9:
                printf("\n9 - Setembro: %.2f graus celcius",temp_mes[i]);
                break;
            case 10:
                printf("\n10 - Outubro: %.2f graus celcius",temp_mes[i]);
                break;
            case 11:
                printf("\n11 - Novembro: %.2f graus celcius",temp_mes[i]);
                break;
            case 12:
                printf("\n12 - Dezembro: %.2f graus celcius",temp_mes[i]);
                break;
            
            default:
                printf("Mes invalido.");
                break;
            }
        }
    }
    
    return 0;
}