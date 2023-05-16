/*Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é par ou ímpar e positivo ou negativo*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    int resultado = 0;
    int op = 0;

    printf("Informe dois números:\n");
    scanf("%d %d", &num1, &num2);
    printf("Escolha a operação\n\n[1]Adição\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n");
    scanf("%d", &op);

    switch (op){
    case 1:

        resultado = num1 + num2;

        break;
    
    case 2:
       
        resultado = num1 - num2;

        break;
    
    case 3:

        resultado = num1*num2;
       
        break;
    
    case 4:

        if(num2 == 0){

            printf("Não existe divisão por zero.");
           
            return 0;

        }
        else{

            resultado = num1/num2;

        }

        break;
    
    default:

        printf("Informe uma opção válida.");

        return 0;
    }

    if(resultado % 2 == 0){

        if(resultado > 0){

            printf("Resultado: %d é par e positivo.", resultado);
        }
        else if(resultado == 0){

           printf("Resultado: %d é par e neutro.", resultado);

        }
        else{

            printf("Resultado: %d é par e negativo.", resultado);
        }
    }
    else{

        if(resultado < 0){

            printf("Resultado: %d é impar e negativo.", resultado);
        }
        else{

            printf("Resultado: %d é impar e positivo.", resultado);
        }
    }

    return 0;

}