/*19. . Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.*/

#include <stdio.h>

int main(){

    int num = 0;
    int maior = 0;
    int menor = 0;
    int soma = 0;
    int n = 0;
    int i = 0;
    int temp = 0;

    printf("Infrome quantos numeros deseja inserir: ");
    scanf("%d", &n);

    do{
        
        printf("Infrome os numeros:\n");
        scanf("%d %d", &maior, &menor);

        soma = maior + menor;

        if (maior > menor){
            
            maior = maior;
        }
        else{

            temp = maior;
            maior = menor;
            menor = temp;
        }
        
        for (i = n - 2; i > 0; i--){
            
            scanf("%d", &num);
            soma += num; 

            if (num > maior && maior > menor){

                maior = num;
            }
            else if (num < menor && menor < maior){
                
                menor = num;
            }
        }

        if (maior <= 0 || maior >= 1000 || menor <= 0 || menor >= 1000){
            
            printf("Error: os numeros devem ser entre 0 e 1000\n");
        }
        
    } while (maior <= 0 || maior >= 1000 || menor <= 0 || menor >= 1000);
    
    printf("    Maior = %d\n    Menor = %d\n    Soma = %d", maior,menor,soma);

    return 0;

}