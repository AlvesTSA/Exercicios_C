/*17. Em uma competição de salto em distância cada atleta tem direito a cinco saltos. O resultado do atleta será determinado pela média dos cinco valores restantes. Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos. O programa deve ser encerrado quando não for informado o nome do atleta. A saída do programa deve ser conforme o exemplo abaixo:

Atleta: Rodrigo Curvêllo
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m


Resultado final:
Atleta: Rodrigo Curvêllo
Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
Média dos saltos: 5.9 m*/

#include <stdio.h>

int main(){

    char nome[50];
    float salto[5];
    float media  = 0;

    printf("informe os dados dos atletas ou digite sair no campo nome.\n");

    while (1){
        
        printf("\nAtleta: ");
        scanf("%s", nome);

        if (strcmp(nome, "sair") == 0){
            
            break;
        }
        
        printf("Primeiro salto: ");
        scanf("%f", &salto[0]);
        printf("Segundo salto: ");
        scanf("%f", &salto[1]);
        printf("Terceiro salto: ");
        scanf("%f", &salto[2]);
        printf("Quarto salto: ");
        scanf("%f", &salto[3]);
        printf("Quinto salto: ");
        scanf("%f", &salto[4]);

        for (int i = 0; i < 5; i++){
            
            media += salto[i];
        }

        media /= 5;
        
        printf("\nResultado final\n\n");
        printf("Atleta: %s", nome);
        printf("\nSaltos: %.1f - %.1f - %.1f - %.1f - %.1f", salto[0], salto[1], salto[2], salto[3], salto[4]);
        printf("\nMedia dos saltos: %.1f\n\n", media);

        media = 0;
        
    }
    
    return 0;
}