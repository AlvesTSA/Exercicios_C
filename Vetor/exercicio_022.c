/*22. A ACME Inc., uma empresa de 500 funcionários, está tendo problemas de espaço em disco no seu servidor de arquivos. Para tentar resolver este problema, o Administrador de Rede precisa saber qual o espaço ocupado pelos usuários, e identificar os usuários com maior espaço ocupado. Através de um programa, baixado da Internet, ele conseguiu gerar o seguinte arquivo, chamado "usuarios.txt":

alexandre       456123789
anderson        1245698456
antonio         123456456
carlos          91257581
cesar           987458
rosemary        789456125
 
Neste arquivo, o nome do usuário possui 15 caracteres. A partir deste arquivo, você deve criar um programa que gere um relatório, chamado "relatório.txt", no seguinte formato:
Relatório de Uso do Espaço em Disco

Nr.	Usuário	    Espaço utilizado	Percentual do uso
    
1	alexandre	434,99 MB	        16,85%
2	anderson	1187,99 MB	        46,02%
3	antonio	    117,73 MB	        4,56%
4	carlos	    87,03 MB	        3,37%
5	cesar	    0,94 MB	            0,04%
6	rosemary	752,88 MB	        29,16%
    
Espaço total ocupado:	2581,57 MB
Espaço médio ocupado:	430,26 MB
  

O arquivo de entrada deve ser lido uma única vez, e os dados armazenados em memória, caso sejam necessários, de forma a agilizar a execução do programa. A conversão da espaço ocupado em disco, de bytes para megabytes deverá ser feita através de uma função separada, que será chamada pelo programa principal. O cálculo do percentual de uso também deverá ser feito através de uma função, que será chamada pelo programa principal.*/

#include <stdio.h>

int main(){

    char pessoa1[15] = {"Alexandre"};
    char pessoa2[15] = {"Anderson"};
    char pessoa3[15] = {"Antonio"};
    char pessoa4[15] = {"Carlos"};
    char pessoa5[15] = {"Cesar"};
    char pessoa6[15] = {"Rosymari"};
    float espaco_utilizado[6] = {456123789, 1245698456, 123456456, 91257581, 987458, 789456125};
    float percentual[6];
    int i= 0;
    float media = 0;
    float soma = 0;

    for (i = 0; i < 6; i++){
        
        espaco_utilizado[i] = espaco_utilizado[i] / 1000000;
        soma += espaco_utilizado[i]; 
        
    }
    for (int y = 0; y < 6; y++){
        
        percentual[y] = (espaco_utilizado[y] * 100) / soma;
    }
    
    media = soma / i;

    printf("\n        Relatorio de Uso do Espaco em Disco\n\n");
    printf("Nr.	Usuario	        Espaco utilizado	Percentual do uso\n");
    printf("1	%s	%.2f MB	        %.2f%\n",pessoa1,espaco_utilizado[0],percentual[0] );
    printf("2	%s	%.2f MB	        %.2f%\n",pessoa2,espaco_utilizado[1],percentual[1] );
    printf("3	%s	        %.2f MB	        %.2f%\n",pessoa3,espaco_utilizado[2],percentual[2] );
    printf("4	%s	        %.2f MB	        %.2f%\n",pessoa4,espaco_utilizado[3],percentual[3] );
    printf("5	%s	        %.2f MB	                %.2f%\n",pessoa5,espaco_utilizado[4],percentual[4] );
    printf("6	%s	%.2f MB	        %.2f%\n\n",pessoa6,espaco_utilizado[5],percentual[5] );
    printf("Espaco total ocupado:	%.2f MB\n", soma);
    printf("Espaco medio ocupado:	%.2f MB\n\n", media);

    return 0;
}