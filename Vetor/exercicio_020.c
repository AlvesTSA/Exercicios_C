/*20. Faça um programa que carregue uma lista com os modelos de cinco carros (exemplo de modelos: FUSCA, GOL, VECTRA etc). Carregue uma outra lista com o consumo desses carros, isto é, quantos quilômetros cada um desses carros faz com um litro de combustível. Calcule e mostre:
  
 a. O modelo do carro mais econômico; 

 b. Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1000 quilômetros e quanto isto custará, considerando um que a gasolina custe R$ 2,25 o litro. Abaixo segue uma tela de exemplo. O disposição das informações deve ser o mais próxima possível ao exemplo. Os dados são fictícios e podem mudar a cada execução do programa.

Comparativo de Consumo de Combustível
Veículo 1
Nome: fusca
Km por litro: 7
Veículo 2
Nome: gol
Km por litro: 10
Veículo 3
Nome: uno
Km por litro: 12.5
Veículo 4
Nome: Vectra
Km por litro: 9
Veículo 5
Nome: Peugeout
Km por litro: 14.5

Relatório Final
1 - fusca           -    7.0 -  142.9 litros - R$ 321.43
2 - gol             -   10.0 -  100.0 litros - R$ 225.00
3 - uno             -   12.5 -   80.0 litros - R$ 180.00
4 - vectra          -    9.0 -  111.1 litros - R$ 250.00
5 - peugeout        -   14.5 -   69.0 litros - R$ 155.17
O menor consumo é do peugeout.*/

#include <stdio.h>

int main(){

    char carro1[20];
    char carro2[20];
    char carro3[20];
    char carro4[20];
    char carro5[20];
    float consumo[5];
    int i = 0;
    float litros = 0;
    float valor_pago = 0;
    float menor_consumo = 0;

    printf("\nComparativo de Consumo de Combustivel\n");

    printf("\nVeiculo 1");
    printf("\nNome: ");
    scanf("%s",carro1);
    printf("Km por litro: ");
    scanf("%f", &consumo[0]);

    printf("\nVeiculo 2");
    printf("\nNome: ");
    scanf("%s",carro2);
    printf("Km por litro: ");
    scanf("%f", &consumo[1]);

    printf("\nVeiculo 3");
    printf("\nNome: ");
    scanf("%s",carro3);
    printf("Km por litro: ");
    scanf("%f", &consumo[2]);

    printf("\nVeiculo 4");
    printf("\nNome: ");
    scanf("%s",carro4);
    printf("Km por litro: ");
    scanf("%f", &consumo[3]);

    printf("\nVeiculo 5");
    printf("\nNome: ");
    scanf("%s",carro5);
    printf("Km por litro: ");
    scanf("%f", &consumo[4]);
    

    printf("\nRelatorio final\n");
    menor_consumo = consumo[0];

    for (i = 0; i < 5; i++){
        
        switch (i + 1){
        case 1:

            litros = 1000 / consumo[i];
            valor_pago = litros * 2.25;

            printf("%d - %s           -    %.1f -  %.1f litros - R$ %.2f\n", i + 1,carro1, consumo[i], litros, valor_pago);

            break;
        case 2:

            litros = 1000 / consumo[i];
            valor_pago = litros * 2.25;

            printf("%d - %s           -    %.1f -  %.1f litros - R$ %.2f\n", i + 1,carro2, consumo[i], litros, valor_pago);

            break;
        case 3:

            litros = 1000 / consumo[i];
            valor_pago = litros * 2.25;

            printf("%d - %s           -    %.1f -  %.1f litros - R$ %.2f\n", i + 1,carro3, consumo[i], litros, valor_pago);

            break;
        case 4:

            litros = 1000 / consumo[i];
            valor_pago = litros * 2.25;

            printf("%d - %s           -    %.1f -  %.1f litros - R$ %.2f\n", i + 1,carro4, consumo[i], litros, valor_pago);

            break;
        case 5:

            litros = 1000 / consumo[i];
            valor_pago = litros * 2.25;

            printf("%d - %s           -    %.1f -  %.1f litros - R$ %.2f\n", i + 1,carro5, consumo[i], litros, valor_pago);

            break;
        
        default:
            printf("\nValor invalido.\n");
            break;
        }

        if (consumo[i] > menor_consumo){
            
            menor_consumo = consumo[i];
        }
        
    }
    for (i = 0; i < 5; i++){
        
        if (menor_consumo == consumo[i]){
            break;   
        }
        
    }
    switch (i + 1){
        case 1:
            printf("O menor consumo e do %s.", carro1);
            break;
        case 2:
            printf("O menor consumo e do %s.", carro2);
            break;
        case 3:
            printf("O menor consumo e do %s.", carro3);
            break;
        case 4:
            printf("O menor consumo e do %s.", carro4);
            break;
        case 5:
            printf("O menor consumo e do %s.", carro5);
            break;
        
        default:
            printf("Valor invalido");
            break;
    }
    
    return 0;
}