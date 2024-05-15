/*10. Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
Triângulo Isósceles: os comprimentos de 2 lados são iguais.
Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/

#include <stdio.h>
#include <string.h>

const char* triangulo(int x, int y, int z){

    if (x >= y + z || y >= x + z || z >= x + y)
    {
        return "Nao e triangulo";
    }
    else if (x == y && x == z)
    {
        return "Equilatero";
    }
    else if (x == y || x == z || y == z)
    {
        return "Isoseles";
    }
    else
    {
        return "Escaleno";
    }
}

int main(){

    int x,y,z = 0;

    printf("Informe os 3 lados do triangulo:\n");
    scanf("%d %d %d",&x,&y,&z);

    const char* resultado = triangulo(x,y,z);

    printf("Resultado: %s",resultado);

    return 0;
}