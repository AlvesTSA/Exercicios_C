/*15. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N. Mostre a tabuada na forma:

1 x N = N
2 x N = 2N
...
N x N = N^2*/

#include <stdio.h>

void tabuada(int N){

    for (int i = 1; i <= N; i++)
    {
        printf("%d x %d = %d\n",i,N,N*i); 
    }
}

int main(){

    int N = 0;

    printf("Informe o numero que deseja ver a tabuada: ");
    scanf("%d",&N);

    tabuada(N);

    return 0;
}