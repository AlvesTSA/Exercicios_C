/*13. Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.*/

#include <stdio.h>

int main(){

    double base = 0;
    int expoente = 0;
    int contador = 0;
    double resultado = 1;

    printf("Informe dois numeros, a base depois o expoente do que se pretende calcular a potencia:\n");
    scanf("%lf", &base);
    scanf("%d", &expoente);

    if (expoente == 0){
        
        base = 1;
    }
    else if (expoente < 0){

        expoente *= -1;
        
        while (contador != expoente){

            contador++;
            resultado *= base;
            
        }

        resultado = 1/resultado;

    }
    else{

        while (contador != expoente){

            contador++;
            resultado *= base;
            
        }
    }

    printf("Resultado = %lf", resultado);

    return 0;
}