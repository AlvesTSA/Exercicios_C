/*8. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.*/

#include <stdio.h>

int main(){

    float altura[5];
    int idade[5];

    for (int i = 0; i < 5; i++){
        
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);

        printf("Informe a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);
    }

    for (int i = 4; i >= 0; i--){
        
        printf("\nidade da pessoa %d: %d",i + 1,idade[i]);
        printf("\nAltura da pessoa %d: %.2f",i + 1,altura[i]);
        printf("\n");
    }
    
    return 0;
}