/*4. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).*/

#include <stdio.h>
#include <math.h>


double calc_vol(double r){

    double pi = M_PI;
    double v = (4.0/3.0)*pi*r*r*r;

    return v;
}

int main(){

    double r,v = 0;

    printf("Informe o raio da esfera: ");
    scanf("%lf", &r);

    v = calc_vol(r);
    
    printf("Volume da esfera: %.2f",v);

    return 0;
}