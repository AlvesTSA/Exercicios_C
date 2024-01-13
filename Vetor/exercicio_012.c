/*12. Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.*/

#include <stdio.h>

int main(){

    int idade[30];
    float altura[30];
    float media_altura = 0;
    float soma_altura = 0;
    int count = 0;

    for (int i = 0; i < 30; i++){
        
        printf("Informe a idade do aluno %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Informe a altura do aluno %d: ", i + 1);
        scanf("%f", &altura[i]);

        soma_altura += altura[i];
    }
    
    media_altura = soma_altura / 30;

    for (int i = 0; i < 30; i++){
        
        if (idade[i] > 13){

            if (altura[i] < media_altura){
                
                count++;
            }
            
        }
        
    }
    
    printf("Alunos com mais de 13 anos com altura abaixo da media: %d", count);

    return 0;
}