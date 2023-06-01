/* Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).*/

#include <stdio.h>

int main(){

    int idade = 0;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 67){

        printf("Pode ser doadora de sangue");

    }
    else{

        printf("Não pode ser doadora de sangue");

    }

    return 0;

}