/*14. Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

"Telefonou para a vítima?" 

"Esteve no local do crime?" 

"Mora perto da vítima?"

"Devia para a vítima?"

"Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".*/

#include <stdio.h>

int main(){

    char perguntas[5];

    printf("Responda as perguntas com s para sim ou n para nao.\n");

    for (int i = 0; i < 5; i++){
        
        switch (i + 1){
        case 1:
            printf("Telefonou para a vítima? ");
            scanf(" %c", &perguntas[i]);
            break;
        case 2:
            printf("Esteve no local do crime? ");
            scanf(" %c", &perguntas[i]);
            break;
        case 3:
            printf("Mora perto da vítima? ");
            scanf(" %c", &perguntas[i]);
            break;
        case 4:
            printf("Devia para a vítima? ");
            scanf(" %c", &perguntas[i]);
            break;
        case 5:
            printf("Já trabalhou com a vítima? ");
            scanf(" %c", &perguntas[i]);
            break;
        
        default:
            printf("Valor invalido");
            break;
        }
    }

    int count = 0;

    for (int i = 0; i < 5; i++){
        
        if (perguntas[i] == 's'){
            
            count++;
        }
        
    }
    if (count == 2){
        
        printf("Suspeito");
    }
    else if (count >= 3 && count <= 4){
        
        printf("Cumplice");
    }
    else if (count == 5){
        
        printf("Assassino");
    }
    else{

        printf("Inocente");
    }
    
    return 0;
}