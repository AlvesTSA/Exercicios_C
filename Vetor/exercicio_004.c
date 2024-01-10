/*4. Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.*/

#include <stdio.h>

int main(){

    char c[10];
    int consoante = 0;

    printf("Informe 10 caracteres: \n");

    for (int i = 0; i < 10; i++){
        
        scanf(" %c", &c[i]);
    }

    for (int i = 0; i < 10; i++){
        
        if (c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' && c[i] != 'A' && c[i] != 'E' && c[i] != 'I' && c[i] != 'O' && c[i] != 'U'){
            
            consoante++;
        }
        
    }
    
    printf("Foram lidas %d consoantes: ", consoante);
    
    for (int i = 0; i < 10; i++){
        
        if (c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' && c[i] != 'u' && c[i] != 'A' && c[i] != 'E' && c[i] != 'I' && c[i] != 'O' && c[i] != 'U'){
            
            printf("%c ", c[i]);
        }
        
    }

    return 0;
}