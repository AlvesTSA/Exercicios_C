/*23. Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário. O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos. Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.*/

#include <stdio.h>

int main() {

    int N = 0;
    int i = 0; 
    int j = 0;
    int primo = 1;
    int divisions = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Não existem números primos no intervalo de 1 a %d.\n", N);
        return 0;
    }

    if (N >= 2) {
        printf("Números primos entre 1 e %d:\n2 ", N);
    }

    for (i = 3; i <= N; i += 2) { 

        for (j = 2; j <= i/2; j++) {

            divisions++;

            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("%d ", i);
        }
    }

    printf("\nNúmero total de divisões: %d\n", divisions);

    return 0;
}
