/*27. Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.*/

#include <stdio.h>

int main(){

    int q_turmas = 0;
    int q_alunos = 0;
    int soma = 0;
    float media = 0;
    int i = 0;

    printf("Informe a quantidade de turmas: ");
    scanf("%d", &q_turmas);

    for (i = 1; i <= q_turmas; i++){
        
        do{
            printf("\nInforme a quantidade da %d° turma: ",i);
            scanf("%d", &q_alunos); 

            if (q_alunos > 40){
                
                printf("Erro: a turma não deve ultrapassar 40 alunos.\n");
            }
            
        } while (q_alunos > 40);
        
        soma += q_alunos;
    }

    media =  soma / q_turmas;

    printf("\nQuantidade media de aluno por turma: %.0f",media);

    return 0;
}



