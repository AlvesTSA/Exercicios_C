/*Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

#include <stdio.h>

int main(){

    char turno;

    printf("Digite M, V ou N para selecionar o turno desejado: \nM-matutino\nV-Vespertino\nN- Noturno\n");
    scanf("%c", &turno);

    switch (turno){

    case 'M':

        printf("Bom dia !!!");

        break;
    
    case 'V':

        printf("Boa tarde !!");

        break;
    
    case 'N':

        printf("Boa noite !!");

        break;
    
    default:

        printf("Valor inválido !");

        break;
    }

    return 0;

}