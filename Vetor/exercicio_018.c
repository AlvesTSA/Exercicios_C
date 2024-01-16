/*18. Uma empresa de pesquisas precisa tabular os resultados da seguinte enquete feita a um grande quantidade de organizações:

"Qual o melhor Sistema Operacional para uso em servidores?"
As possíveis respostas são:


1- Windows Server
2- Unix
3- Linux
4- Netware
5- Mac OS
6- Outro

Você foi contratado para desenvolver um programa que leia o resultado da enquete e informe ao final o resultado da mesma. O programa deverá ler os valores até ser informado o valor 0, que encerra a entrada dos dados. Não deverão ser aceitos valores além dos válidos para o programa (0 a 6). Os valores referentes a cada uma das opções devem ser armazenados num vetor. Após os dados terem sido completamente informados, o programa deverá calcular a percentual de cada um dos concorrentes e informar o vencedor da enquete. O formato da saída foi dado pela empresa, e é o seguinte:
       
Sistema Operacional Votos	%
Windows Server	    1500	17%
Unix	            3500	40%
Linux	            3000	34%
Netware	            500	    5%
Mac OS	            150	    2%
Outro	            150	    2%
Total	            8800	

O Sistema Operacional mais votado foi o Unix, com 3500 votos, correspondendo a 40% dos votos. d*/

#include <stdio.h>

int main(){

    int votos[6];
    int op = 0;
    int percentual[6];

    printf("Qual o melhor Sistema Operacional para uso em servidores?\nAs possíveis respostas são:\n\n1- Windows Server\n2- Unix\n3- Linux\n4- Netware\n5- Mac OS\n6- Outro\n\n");

    while (1){
        
        printf("Informe o sistema operacional ou aperte 0 para encerrar: ");
        scanf("%d", &op);

        if (op == 0){
            
            break;
        }
        
        switch (op){
        case 1:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[0]);
            break;
        case 2:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[1]);
            break;
        case 3:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[2]);
            break;
        case 4:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[3]);
            break;
        case 5:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[4]);
            break;
        case 6:
            printf("Informe a quantidade de votos: ");
            scanf("%d", &votos[5]);
            break;
        
        default:
            printf("Error: informe um valor de 1 a 6");
            break;
        }
    }

    int total = 0;
      
    for (int i = 0; i < 6; i++){
        
        total += votos[i];
        
    }
    for (int i = 0; i < 6; i++){

        percentual[i] = (votos[i] * 100) / total;
    }
    
    printf("Sistema Operacional  Votos	 Percentual\n\n");
    printf("Windows Server	     %d	     %d %\n", votos[0], percentual[0]);
    printf("Unix        	     %d	     %d %\n", votos[1], percentual[1]);
    printf("Linux       	     %d	     %d %\n", votos[2], percentual[2]);
    printf("Netware     	     %d	     %d %\n", votos[3], percentual[3]);
    printf("Mac OS      	     %d	     %d %\n", votos[4], percentual[4]);
    printf("Outro       	     %d	     %d %\n", votos[5], percentual[5]);
    printf("Total       	     %d", total);
    
    return 0;
}

