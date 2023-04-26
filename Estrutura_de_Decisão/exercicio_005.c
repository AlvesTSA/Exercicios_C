/* Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:

A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; 

A mensagem "Reprovado", se a média for menor do que sete; 

A mensagem "Aprovado com Distinção", se a média for igual a dez.

*/

#include <stdio.h>

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 7 && media < 10){

        printf("Sua nota final é: %f \n Situação: APROVADO", media);
    }
    else if (media < 7 || media >= 0){

        printf("Sua nota final é: %f \n Situação:  REPROVADO", media);
    }
    else if(media == 10){

        printf("Sua nota final é: %f \n Situação: APROVADO COM DISTINÇÃO", media);

    }
    return 0;

}