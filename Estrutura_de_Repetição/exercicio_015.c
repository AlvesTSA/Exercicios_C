/*15. A série de Fibonacci é formada pela seqüência   1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até o n−ésimo termo.*/

#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 1;
    int num = 0;
    int i = 0;
    int n = 0;

    printf("Informe ate qual termo deseja gerar a sequancia de Fibonacci: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        
        printf("%d, ",num2);
        num = num1 + num2;
        num1 = num2;
        num2 = num;

    }
     
    printf("\nPosicao %d : %d", n, num1);

    return 0;
    
}