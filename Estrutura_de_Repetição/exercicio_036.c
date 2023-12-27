/*36. Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, o valor inicial e final devem ser informados também pelo usuário, conforme exemplo abaixo:

Montar a tabuada de: 5 

Começar por: 4 

Terminar em: 7

Vou montar a tabuada de 5 começando em 4 e terminando em 7:

5 X 4 = 20

5 X 5 = 25

5 X 6 = 30

5 X 7 = 35

Obs: Você deve verificar se o usuário não digitou o final menor que o inicial.*/

#include <stdio.h>

int main(){

    int num = 0;
    int num_inicio = 0;
    int num_final = 0;
    int resultado = 0;

    printf("Montar a tabuada de: ");
    scanf("%d", &num);
    
    do{
        printf("Começar por: ");
        scanf("%d", &num_inicio);
        printf("Terminar em: ");
        scanf("%d", &num_final);

        if (num_final < num_inicio){
            
            printf("Erro: o valor final deve ser maior que o valor iniciaL, tente outra vez.\n");
        }
        
    } while (num_final < num_inicio);

    printf("Vou montar a tabuada de %d começando em %d e terminando em %d:\n", num,num_inicio,num_final);
    
    for (int i = num_inicio; i <= num_final; i++){
        
        resultado = num*i;
        printf("%d x %d = %d\n", num,i,resultado);
    }

    return 0;
    
}