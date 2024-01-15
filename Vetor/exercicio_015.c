/*15. Faça um programa que leia um número indeterminado de valores, correspondentes a notas, encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada de dados, faça:

 a. Mostre a quantidade de valores que foram lidos; 

 b. Exiba todos os valores na ordem em que foram informados, um ao lado do outro; 

 c. Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;

 d. Calcule e mostre a soma dos valores;
 
 e. Calcule e mostre a média dos valores;

 f. Calcule e mostre a quantidade de valores acima da média calculada;

 g. Calcule e mostre a quantidade de valores abaixo de sete;

 h. Encerre o programa com uma mensagem;

*/

#include <stdio.h>

int main(){

    float notas[100];
    int quantidade = 0;
    float soma = 0;
    float media = 0;

    printf("\nInforme as notas e atribua -1 para finalizar.\n\n");

    for (quantidade = 0; quantidade < 100; quantidade++){
        
        printf("Informe a nota %d: ", quantidade + 1);
        scanf("%f", &notas[quantidade]);

        if (notas[quantidade] == -1){
            
            break;   
        }

        soma += notas[quantidade];
        
    }
    //a. Mostre a quantidade de valores que foram lidos;
    printf("Quantidade de valores obtidos: %d", quantidade);

    //b. Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
    printf("\nValores informados na ordem: ");

    for (int i = 0; i < quantidade; i++){
        
        printf("%.2f ", notas[i]);
    }

    //c. Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
    printf("\nValores informados na ordem contraria: \n");

    for (int i = quantidade - 1; i >= 0; i--){
        
        printf("%.2f \n", notas[i]);
    }

    //d. Calcule e mostre a soma dos valores;
    printf("\nSoma dos valores: %.2f", soma);
    
    //e. Calcule e mostre a média dos valores;
    media = soma / quantidade;
    printf("\nMedia dos valores: %.2f", media);

    //f. Calcule e mostre a quantidade de valores acima da média calculada;
    int count = 0;

    for (int i = 0; i < quantidade; i++){
        
        if (notas[i] > media){
            
            count++;
        }
    }
    printf("\nQuantidade de valores acima da media: %d", count);

    //g. Calcule e mostre a quantidade de valores abaixo de sete;
    int count2 = 0;

    for (int i = 0; i < quantidade; i++){
        
        if (notas[i] < 7){
            
            count2++;
        }
    }
    printf("\nQuantidade de valores abaixo de 7: %d", count2);
    
    //h. Encerre o programa com uma mensagem;
    printf("\n\nMuito obrigado, volte sempre.\n\n");

    return 0;
}