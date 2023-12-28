/*39. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e o número do aluno mais baixo, junto com suas alturas.*/

#include <stdio.h>

int main(){

    int altura = 0;
    int num_aluno = 0;
    int maior_altura = 0;
    int menor_altura = 999;
    int cod_maior_altura = 0;
    int cod_menor_altura = 0;

    for(int i = 1; i <= 10; i++){
        
        printf("\nInforme seu numero: ");
        scanf("%d", &num_aluno);

        printf("Informe sua altura: ");
        scanf("%d", &altura);

        if (altura > maior_altura){

            maior_altura = altura;
            cod_maior_altura = num_aluno;
        }
        else if(altura < menor_altura){
           
            menor_altura = altura;
            cod_menor_altura = num_aluno;
        }
        
    }

    printf("\nAluno numero %d o mais alto: %d cm",cod_maior_altura,maior_altura);
    printf("\nAluno numero %d o mais baixo: %d cm",cod_menor_altura,menor_altura);
   
    return 0;
}
