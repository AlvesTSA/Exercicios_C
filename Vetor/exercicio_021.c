/*21. Sua organização acaba de contratar um estagiário para trabalhar no Suporte de Informática, com a intenção de fazer um levantamento nas sucatas encontradas nesta área. A primeira tarefa dele é testar todos os cerca de 200 mouses que se encontram lá, testando e anotando o estado de cada um deles, para verificar o que se pode aproveitar deles. Foi requisitado que você desenvolva um programa para registrar este levantamento. O programa deverá receber um número indeterminado de entradas, cada uma contendo: um número de identificação do mouse o tipo de defeito: necessita da esfera; necessita de limpeza; a.necessita troca do cabo ou conector; a.quebrado ou inutilizado Uma identificação igual a zero encerra o programa. Ao final o programa deverá emitir o seguinte relatório:

Relatório de Mouses
 
     Situação	                          Quantidade	Percentual
    
1- Necessita da esfera	                    40	        40%
2- Necessita de limpeza	                    30	        30%
3- Necessita troca do cabo ou conector	     15	        15%
4- Quebrado ou inutilizado	               15	        15%
*/

#include <stdio.h>

int main(){

     int identificacao[200];
     int quantidade[4] = {0};
     int op = 0;
     int i = 0;
     int percentual[4];

     for (i = 0; i < 200; i++){
          
          printf("Informe o numero de identificacao mouse ou informe 0 para sair: ");
          scanf("%d", &identificacao[i]);

          if (identificacao[i] == 0){
               break;
          }

          printf("Informe o tipo de defeito.\n\n1- Necessita da esfera\n2- Necessita de limpeza\n3- Necessita troca do cabo ou conector\n4- Quebrado ou inutilizado\n");
          scanf("%d", &op);

          switch (op){

          case 1://1- Necessita da esfera
               quantidade[0]++;
               break;
          case 2://2- Necessita de limpeza
               quantidade[1]++;
               break;
          case 3://3- Necessita troca do cabo ou conector
               quantidade[2]++;
               break;
          case 4://4- Quebrado ou inutilizado
               quantidade[3]++;
               break;

          default:
               printf("Valor invalido\n");
               break;
          }
     }
     for (int y = 0; y < 4; y++){
          
          percentual[y] = (quantidade[y] * 100) / i;
     }
     printf("\n              Relatorio de Mouses\n\n");
     printf("     Situacao	                          Quantidade	Percentual\n\n");
     printf("\n1- Necessita da esfera	                    %d	        %d %", quantidade[0], percentual[0]);
     printf("\n2- Necessita de limpeza	                    %d	        %d %",quantidade[1], percentual[1]);
     printf("\n3- Necessita troca do cabo ou conector	    %d	        %d %",quantidade[2], percentual[2]);
     printf("\n4- Quebrado ou inutilizado	            %d	        %d %",quantidade[3], percentual[3]);

     return 0;
}