/*5. Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos.*/

#include <stdio.h>

void converteTempo(int tempo_em_segundos, int *horas, int *minutos, int *segundos) {
    *horas = tempo_em_segundos / 3600;  // Calcula o número de horas
    *minutos = (tempo_em_segundos % 3600) / 60;  // Calcula o número de minutos
    *segundos = tempo_em_segundos % 60;  // Calcula os segundos restantes
}

int main() {
    int t_em_s, h, m, s;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &t_em_s);

    converteTempo(t_em_s, &h, &m, &s);

    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", m);
    printf("Segundos: %d\n", s);

    return 0;
}
 