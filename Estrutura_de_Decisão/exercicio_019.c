/*Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    int dia = 0;
    int mes = 0;
    int ano = 0;
    bool data = 1;

    printf("Informe uma data dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano < 0){
        
        data = 0;

    }
    else if(mes <= 0 || mes > 12){

        data = 0;

    }
    else if(dia <= 0 || dia > 31){

        data = 0;

    }
    else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){

        data = 0;

    }
    else if(mes == 2){

        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){

            if(dia > 29){

                data = 0;

            }
        }
        else{

            if(dia > 28){

                data = 0;

            }
        }
    }
    if(data){

        printf("Data: %02d/%02d/%04d", dia, mes, ano);
        /*O código é uma instrução em linguagem C que imprime uma mensagem formatada na tela. A função printf é usada para imprimir a mensagem. A mensagem é "Data: %02d/%02d/%04d", onde %02d, %02d e %04d são especificadores de formato que indicam que os valores das variáveis dia, mes e ano devem ser impressos como números inteiros com pelo menos 2 dígitos para dia e mês e 4 dígitos para o ano. Se o número tiver menos dígitos do que o especificado, zeros serão adicionados à esquerda. */

    }
    else{

        printf("Data inválida! Tente novamente.");
    }

    return 0;

}



/*Este programa pede ao usuário para inserir uma data no formato dd/mm/aaaa e verifica se a data é válida. Primeiro, verifica se o ano é negativo. Em seguida, verifica se o mês está entre 1 e 12. Depois, verifica se o dia está entre 1 e 31. Se o mês for abril, junho, setembro ou novembro, verifica se o dia é maior que 30. Se o mês for fevereiro, verifica se o ano é bissexto e se o dia é maior que 29 ou se o ano não é bissexto e o dia é maior que 28. Se todas essas condições forem satisfeitas, o programa informa que a data é válida. Caso contrário, informa que a data não é válida.

// Veja aabaixo o mesmo programa que está acima, escrito com alguns detalhes diferente, mas seguindo a mesma lógica e realizando o mesmo objetivo.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int dia, mes, ano;
    bool data_valida = true;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano < 0)
        data_valida = false;
    else if (mes < 1 || mes > 12)
        data_valida = false;
    else if (dia < 1 || dia > 31)
        data_valida = false;
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
        data_valida = false;
    else if (mes == 2)
    {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            if (dia > 29)
                data_valida = false;
        }
        else
        {
            if (dia > 28)
                data_valida = false;
        }
    }

    if (data_valida)
        printf("A data %02d/%02d/%04d é válida\n", dia, mes, ano);
    else
        printf("A data %02d/%02d/%04d não é válida\n", dia, mes, ano);

    return 0;
}   

*/