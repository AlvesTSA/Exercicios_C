/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).*/

#include <stdio.h>

int main(){

    double mb = 0;
    double mbps = 0;
    double t = 0;

    printf("Informe o tamanho so arquivo em MB: ");
    scanf("%lf", &mb);
    
    printf("Informe a velocidade do link: ");
    scanf("%lf", &mbps);

    t = mb/mbps;

    printf("O tempo para dowloading: %lf min \n", t);

    return 0;

}