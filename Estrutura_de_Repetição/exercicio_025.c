/*25. Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.*/

#include <stdio.h>

int main(){

    int n = 0;
    int idade = 0;
    int soma = 0;
    int media = 0;
    int i = 0;

    printf("Informe quantas pessoas existe na turma: ");
    scanf("%d", &n);
    printf("Informe a idade das pessoas:\n");

    for (i = 0; i < n; i++){
        
        scanf("%d", &idade);
        soma += idade;
    }

    media = soma/n;

    if (media > 0 && media <= 25){
        
        printf("Turma jovem.\nMedia de idade: %d", media);
    }
    else if (media >= 26 && media <= 60){
        
        printf("Turma adulta.\nMedia de idade: %d", media);
    }
    else{

        printf("Turma idosa.\nMedia de idade: %d", media);
    }
    
    return 0;
    
}
