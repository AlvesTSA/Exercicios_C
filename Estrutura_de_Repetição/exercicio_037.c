/*37. Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo, a mais gordo e o mais magro, para isto você deve fazer um programa que pergunte a cada um dos clientes da academia seu código, sua altura e seu peso. O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero) no campo código. Ao encerrar o programa também deve ser informados os códigos e valores do clente mais alto, do mais baixo, do mais gordo e do mais magro, além da média das alturas e dos pesos dos clientes.*/

#include <stdio.h>

int main(){

    float altura = 0;
    float peso = 0;
    int codigo = 0;
    float soma_peso = 0;
    float media_peso = 0;
    float soma_altura = 0;
    float media_altura = 0;
    float maior_peso = 0;
    float maior_altura = 0;
    float menor_peso = 999;
    float menor_altura = 999;
    int count_peso = 0;
    int count_altura = 0;
    int cod_maior_peso = 0;
    int cod_maior_altura = 0;
    int cod_menor_peso = 0;
    int cod_menor_altura = 0;

    printf("\nInforme os dados e aperte 0 no campo codigo quando precisar sair.\n\n");
   
    do{
        
        printf("\nInforme seu codigo: ");
        scanf("%d", &codigo);

        if (codigo == 0){
            break;
        }
        
        printf("Informe sua altura: ");
        scanf("%f", &altura);
        printf("Informe seu peso: ");
        scanf("%f", &peso);

        count_altura++;
        count_peso++;
        soma_altura += altura;
        soma_peso += peso;

        if (altura > maior_altura){

            maior_altura = altura;
            cod_maior_altura = codigo;
        }
        else if(altura < menor_altura){
           
            menor_altura = altura;
            cod_menor_altura = codigo;
        }
        if (peso > maior_peso){

            maior_peso = peso;
            cod_maior_peso = codigo;
        }
        else if(peso < menor_peso){
            
            menor_peso = peso;
            cod_menor_peso = codigo;
        }

    } while (codigo != 0);

    media_altura = soma_altura/count_altura;
    media_peso = soma_peso/count_peso;

    printf("\nCliente (codigo %d) o mais alto: %.2f",cod_maior_altura,maior_altura);
    printf("\nCliente (codigo %d) o mais baixo: %.2f",cod_menor_altura,menor_altura);
    printf("\nCliente (codigo %d) o mais pesado: %.2f",cod_maior_peso,maior_peso);
    printf("\nCliente (codigo %d) o menos pesado: %.2f",cod_menor_peso,menor_peso);
    printf("\nAltura media: %.2f",media_altura);
    printf("\nPeso medio: %.2f",media_peso);

    return 0;
}
