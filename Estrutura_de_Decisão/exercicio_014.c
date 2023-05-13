/* Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
 
Média de aproveitamento: entre 9.0 e 10.0; Conceito: A 
 
Média de aproveitamento: entre 7.5 e 9.0; Conceito: B 

Média de aproveitamento: entre 6.0 e 7.5; Conceito: C 
 
Média de aproveitamento: entre 4.0 e 6.0; Conceito: D  

Média de aproveitamento: entre 4.0 e 0.0; Conceito: E 

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

#include <stdio.h>

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    printf("Informe suas duas notas: ");
    scanf("%f" "%f", &nota1, &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 9 && media <= 10){

        printf("Nota 1: %f\nNota 2: %f\nMédia:  %f\nConceito: A\nSituação: APROVADO", nota1, nota2, media);
        
    }
    else if (media >= 7.5 && media < 9){

        printf("Nota 1: %f\nNota 2: %f\nMédia:  %f\nConceito: B\nSituação: APROVADO", nota1, nota2, media);
        
    }
    else if (media >= 6 && media < 7.5){

        printf("Nota 1: %f\nNota 2: %f\nMédia:  %f\nConceito: C\nSituação: APROVADO", nota1, nota2, media);
        
    }
    else if (media >= 4 && media < 6){

        printf("Nota 1: %f\nNota 2: %f\nMédia:  %f\nConceito: D\nSituação: REPROVADO", nota1, nota2, media);
        
    }
    else if (media >= 0 && media < 4){
        
        printf("Nota 1: %f\nNota 2: %f\nMédia:  %f\nConceito: E\nSituação: REPROVADO", nota1, nota2, media);

    }
    else{

        printf("Informe um valor válido !");
        
    }
    
    return 0;

}