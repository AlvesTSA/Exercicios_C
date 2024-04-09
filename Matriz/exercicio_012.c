/*12. Leia uma matriz 4 x 4 e verifique se é palíndromo, isto é, sua leitura a partir de qualquer direção sempre apresentara a mesma seqüência.

   EX.                  SATOR
                        AREPO
                        TENET
                        OPERA
                        ROTAS
                        */

#include <stdio.h>
#define size 4

int main(){

   char matriz[size][size];
   int polindromo = 1;

   printf("Informe uma matriz tipo char %d x %d:\n",size,size);

   for (int i = 0; i < size; i++){
      
      for (int j = 0; j < size; j++){
         
         scanf(" %c",&matriz[i][j]);
      }
   }
   
   for (int i = 0; i < size; i++){
      
      for (int j = 0; j < size; j++){
         
         if (matriz[i][j] != matriz[(size-1) - i][(size - 1) - j]){
            
            polindromo = 0;

            break;
         }
      }
   }

   if (polindromo){
      
      printf("Matriz:\n");

      for (int i = 0; i < size; i++){
      
         for (int j = 0; j < size; j++){
            
            printf("%c ",matriz[i][j]);
         }
         printf("\n");
      }

      printf("A matriz e um polindromo");
   }
   else{

      printf("Matriz:\n");

      for (int i = 0; i < size; i++){
      
         for (int j = 0; j < size; j++){
            
            printf("%c ",matriz[i][j]);
         }
         printf("\n");
      }
      printf("A matriz nao e polidromo");
   }

   return 0;
}