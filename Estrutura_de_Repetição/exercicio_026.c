/*26. Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.*/

#include <stdio.h>

int main(){

    int candidato = 0;
    int eleitor = 0;
    int voto1 = 0;
    int voto2 = 0;
    int voto3 = 0;
    int i = 0;

    printf("Informe a quantidade de eleitores: ");
    scanf("%d", &eleitor);
    
    for (i = 0; i < eleitor; i++){

        do{
            printf("Informe qual candidato deseja votar: [1] [2] [3]\n");
            scanf("%d", &candidato);

            switch (candidato){
            case 1:
                voto1++;

                break;
            case 2:
                voto2++;

                break;
            case 3:
                voto3++;

                break;
            default:

                printf("erro: informe um candidato valido.\n");
                break;
            }
        }while(candidato > 3);

    }
    printf("Candidato [1]: %d votos\nCandidato [2]: %d votos\nCandidato [3]: %d votos", voto1,voto2,voto3);

    return 0;
}