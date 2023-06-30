/*. Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[50] = "";
    char senha[50] = "";

    do{

        printf("Informe um nome de usuario: ");
        scanf("%s", nome);
        printf("Informe uma senha: ");
        scanf("%s", senha);

        if(strcmp(nome, senha) == 0){

            printf("Erro: sua senha nao pode ser igual ao nome de usuario\n");
        }
        else{

            printf("usuario e senha criado com sucesso");
        }

    }while(strcmp(nome, senha) == 0);

    return 0;
}

/*Para comparar o conteúdo de duas strings em C, você deve usar a função strcmp() da biblioteca string.h. A função strcmp() retorna um valor inteiro que indica se as strings são iguais, maiores ou menores lexicograficamente.*/