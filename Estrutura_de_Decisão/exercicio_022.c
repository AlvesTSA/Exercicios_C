/* Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
“Telefonou para a vítima? “ 

“Esteve no local do crime?” 

“Mora perto da vítima? “

“Devia para a vítima? “

“Já trabalhou com a vítima? “

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como “Suspeita”, entre 3 e 4 como “Cúmplice” e 5 como “Assassino“. Caso contrário, ele será classificado como “Inocente“.*/

#include <stdio.h>

int main(){

    char resposta1;
    char resposta2;
    char resposta3;
    char resposta4;
    char resposta5;
    int contador = 0;

    printf("Responda 's' para sim e 'n' para não.\n\n");
    printf("Telefonou para a vítima?\n");
    scanf(" %c", &resposta1);
    printf("Esteve no local do crime?\n");
    scanf(" %c", &resposta2);
    printf("Mora perto da vítima?\n");
    scanf(" %c", &resposta3);
    printf("Devia para a vítima?\n");
    scanf(" %c", &resposta4);
    printf("Já trabalhou com a vítima?\n");
    scanf(" %c", &resposta5);

    if(resposta1 == 's'){

        contador ++;

    }
    if(resposta2 == 's'){

        contador ++;

    }
    if(resposta3 == 's'){

        contador ++;
        
    }
    if(resposta4 == 's'){

        contador ++;
        
    }
    if(resposta5 == 's'){

        contador ++;
        
    }

    printf("Resultado: ");

    if(contador == 2){

        printf("SUSPEITO");

    }
    else if(contador >= 3 && contador <= 4){

        printf("CUMPLICE");

    }
    else if(contador == 5){

        printf("CULPADO");

    }
    else{

        printf("INOCENTE");

    }

    return 0;

}