/*40. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:

Código da cidade;

Número de veículos de passeio (em 1999); 

Número de acidentes de trânsito com vítimas (em 1999).

Deseja-se saber:

Qual o maior e menor índice de acidentes de transito e a que cidade pertence;

Qual a média de veículos nas cinco cidades juntas;

Qual a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.

*/

#include <stdio.h>

int main(){

    int num_veiculo = 0;
    int num_acidente = 0;
    int codigo = 0;
    float soma_veiculo = 0;
    float media_veiculo = 0;
    float soma_acidente = 0;
    float media_acidente = 0;
    float maior_acidente = 0;
    //float maior_altura = 0;
    int menor_acidente = 999;
    //float menor_altura = 999;
    int count = 0;
    int count_veiculo = 0;
    //int count_altura = 0;
    int cod_maior_acidente = 0;
    //int cod_maior_altura = 0;
    int cod_menor_acidente = 0;
    //int cod_menor_altura = 0;

    for(int i = 1; i <= 5; i++){
        
        printf("\nInforme o codigo da cidade: ");
        scanf("%d", &codigo);

        printf("Informe o numero de veiculos: ");
        scanf("%d", &num_veiculo);
        printf("Informe o numero de acidades: ");
        scanf("%d", &num_acidente);

        if (num_veiculo < 2000){
            
            soma_acidente += num_acidente;
            count++;
        }
        
        soma_veiculo += num_veiculo;
        count_veiculo++;

        if (num_acidente > maior_acidente){

            maior_acidente = num_acidente;
            cod_maior_acidente = codigo;
        }
        else if(num_acidente < menor_acidente){
           
            menor_acidente = num_acidente;
            cod_menor_acidente = codigo;
        }

    }

    media_acidente = soma_acidente/count;
    media_veiculo = soma_veiculo/count_veiculo;

    printf("\nCidade (codigo %d) tem o maior indice de acidentes: %d",cod_maior_acidente,maior_acidente);
    printf("\nCidade (codigo %d) tem o menor indice de acidentes: %d",cod_menor_acidente,menor_acidente); 
    printf("\nmedia de veiculos: %.2f",media_veiculo);
    printf("\nMedia de acidentes em cidades com menos de 2000 veiculos: %.2f",media_acidente);

    return 0;
}
