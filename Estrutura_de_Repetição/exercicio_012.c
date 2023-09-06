/*12. Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:

Tabuada de 5: 

5 X 1 = 5 

5 X 2 = 10

... 

5 X 10 = 50
*/

#include <stdio.h>

int main(){

    int num = 0;
    int produto = 0;
    int multiplicador = 0;

    do{
        printf("Informe de 1 a 10 qual tabuada deseja ver: ");
        scanf("%d", &num);

        switch (num){

            case 1:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            case 2:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            case 3:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            case 4:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            case 5:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;

            case 6:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;

            case 7:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            case 8:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;

            case 9:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;

            case 10:
                
                printf("Tabuada de %d:\n", num);

                for (multiplicador = 1; multiplicador < 11; multiplicador++){

                    produto = num * multiplicador;
                    printf("%d X %d = %d\n", num, multiplicador, produto);
                }
                
                break;
            
            default:

                printf("ERROR: escolha um valor de 1 a 10.\n\n");

                break;
        }

    } while (num <= 0 || num > 10);
    
    return 0;
}
