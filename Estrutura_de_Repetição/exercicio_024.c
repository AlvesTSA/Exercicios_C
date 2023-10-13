/*24. Faça um programa que calcule o mostre a média aritmética de N notas.*/

#include <stdio.h>

int main(){

    int n = 0;
    int nota = 0;
    int i = 0;
    int soma = 0;
    double media = 0;

    printf("Informe quantas notas deseja calcular: ");
    scanf("%d", &n);
    printf("Informe as notas que pretende calcular:\n");

    for (i = 0; i < n; i++){
        
        scanf("%d", &nota);

        soma += nota;
    }

    media = (double)soma / n;

    printf("Media = %.1lf", media);
    
    return 0;
}