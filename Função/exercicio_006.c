/*6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.*/

#include <stdio.h>

int transformaIdade(int anos,int meses,int dias){

    dias += anos * 365 + meses * 30;

    return dias;
}

int main(){

    int a,m,d = 0;

    printf("Informe os anos de sua idade: ");
    scanf("%d", &a);
    printf("Informe os meses de sua idade: ");
    scanf("%d", &m);
    printf("Informe os dias de sua idade: ");
    scanf("%d", &d);

    d = transformaIdade(a,m,d);

    printf("Voce tem %d dias de idade.",d);

    return 0;    
}