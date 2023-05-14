/* Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax^2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
  
Se o usuário informar o valor de A igual a zero. a equação não e do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
  
Se o delta calculado for negativo, a equação não possui raízes reais. Informe ao usuário e encerre o programa;

Se o delta calculado for igual a zero a equação possui apenas uma raiz real, informe ao usuário;

Se o delta for positivo, a equação possui duas raízes reais, informe-as ao usuário; */

#include <stdio.h>
#include <math.h>

int main(){

    double a = 0;
    double b = 0;
    double c = 0;
    double delta = 0;
    double x1 = 0;
    double x2 = 0;

    printf("Informe o valor de a: ");
    scanf("%lf", &a);

    if (a != 0){
        
        printf("Informe o valor de b: ");
        scanf("%lf", &b);
        printf("Informe o valor de c: ");
        scanf("%lf", &c);

        delta = pow(b,2) - 4*a*c;

        if (delta > 0){
            
            x1 = (- b + sqrt(delta))/2*a;
            x2 = (- b - sqrt(delta))/2*a;

            printf("Valor de x': %.2lf\nValor de x'': %.2lf", x1, x2);
            
        }
        else if (delta == 0){
            
            x1 = (- b)/2*a;
            x2 = (- b)/2*a;

            printf("Valor de x': %.2lf\nValor de x'': %.2lf", x1, x2);

        }
        
        else{

            printf("Os valores de x não são reais.");

        }
        
    }
    else{

        printf("A equação não é do segundo grau, informe um valor de 'a' diferente de zero");

    }

    return 0;

}