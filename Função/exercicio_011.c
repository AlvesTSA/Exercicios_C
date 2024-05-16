/*11. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.*/

#include <stdio.h>

void pesquisa(float *media_salario,int *media_filhos,float *maior_salario,float *percentual){

    int num_filhos = 0;
    float salario = 0.0;
    int count = 0;
    int count2 = 0;
    *media_salario = 0.0;
    *media_filhos = 0;
    *maior_salario = 0.0;

    printf("Preencha os dados ou digite -1 nos dois campos para sair\n\n");
    
    do
    {
        printf("Informe seu salario: ");
        scanf("%f",&salario);
        printf("Informe quantos filhos voce tem: ");
        scanf("%d",&num_filhos);

        if (salario == -1 && num_filhos == -1)
        {
            break;
        }
        
        count2++;
        *media_salario += salario;
        *media_filhos += num_filhos;

        if (salario > *maior_salario)
        {
            *maior_salario = salario;
        }
        if (salario > 0 && salario <= 350.0)
        {
            count++;
        }
    }while(salario != -1 && num_filhos != -1);

    *media_salario /= (float)count2;
    *media_filhos /= count2;
    *percentual = (count*100.0) / (float)count2;
}

int main(){

    float media_salario = 0.0;
    int media_filhos = 0;
    float maior_salario = 0.0;
    float percentual = 0.0;
    
    pesquisa(&media_salario, &media_filhos, &maior_salario, &percentual);
    
    printf("Media salarial: %.2f\n", media_salario);
    printf("Media de filhos: %d\n", media_filhos);
    printf("Maior salario: %.2f\n", maior_salario);
    printf("Percentual de salario ate R$ 350,00: %.2f%%\n", percentual);

    return 0;
}