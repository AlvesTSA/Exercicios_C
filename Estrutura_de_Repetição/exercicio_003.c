/*Faça um programa que leia e valide as seguintes informações:

Nome: maior que 3 caracteres; 
 
Idade: entre 0 e 150; 

Salário: maior que zero;

Sexo: 'f' ou 'm';

Estado Civil: 's', 'c', 'v', 'd';*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[50] = "";
    int idade = 0;
    float salario = 0;
    char sexo = ' ';
    char estado_civil = ' ';

    do{
        
        printf("Informe o nome: ");
        scanf("%s", nome);

        if(strlen(nome) < 4){

            printf("Nome invalido\n");
        }
    }while (strlen(nome) < 4 );


    do{
        
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade < 0 || idade > 150){

            printf("Valor invalido\n");
        }
    }while(idade < 0 || idade > 150);


    do{
        
        printf("Informe seu salario: ");
        scanf("%f", &salario);

        if(salario < 0){

            printf("Valor invalido\n");
        }
    }while (salario < 0);


    do{
        
        printf("Informe seu sexo\n[m]-Masculino\n[f]-Feminino\n");
        scanf(" %c", &sexo);

        if(sexo != 'm' && sexo != 'f'){

            printf("Valor invalido\n");
        }
    }while (sexo != 'm' && sexo != 'f');


    do{
        
        printf("Informe seu estado civil\n[s]-Solteiro\n[c]-Casado\n[v]-Viuvo\n[d]-Divorciado\n");
        scanf(" %c", &estado_civil);

        if(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd'){

            printf("Valor invalido\n");
        }
    }while (estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');
    
    printf("Nome: %s\nIdade: %d\nSalario: %f\nSexo: %c\nEstado civil: %c", nome,idade, salario, sexo, estado_civil);

    return 0;
    
}