/*14. Um número palíndromo é aquele que, se lido de trás para frente e de frete para trás, é o mesmo. Exemplos: 2112, 666, 2442 etc… Sabendo disso, crie um programa que pergunte ao usuário um intervalo, por exemplo: Inicio – 30, Fim – 2000; Com base neste intervalo, verifique quantos palíndromos existem e exiba-os na tela.*/

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int start, end;
    int numbers[MAX_SIZE];
    int palindromeCount = 0;

    printf("Digite o intervalo (inicio e fim separados por espaço): ");
    scanf("%d %d", &start, &end);

    printf("Números no intervalo [%d, %d]:\n", start, end);
    int index = 0;
    for (int i = start; i <= end; i++) {
        numbers[index++] = i;
        printf("%d ", i);
    }
    printf("\n");

    printf("Palíndromos no intervalo [%d, %d]:\n", start, end);
    for (int i = 0; i < index; i++) {
        int originalNumber = numbers[i];
        int reversedNumber = 0;
        int temp = originalNumber;

        while (temp > 0) {
            int remainder = temp % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            temp /= 10;
        }

        if (originalNumber == reversedNumber) {
            printf("%d\n", originalNumber);
            palindromeCount++;
        }
    }

    printf("Total de palíndromos: %d\n", palindromeCount);

    return 0;
}
