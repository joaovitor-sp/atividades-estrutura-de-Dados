/*
* Programa que lê números inteiros a partir
* do teclado e os armazena em uma pilha.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
typedef int elemento;
#include "pilha.h"
int main() {
    pilha minhaPilha;
    CriarPilha(&minhaPilha);

    int numPessoas = 10; // Número de pessoas a serem inseridas na pilha

    for (int i = 0; i < numPessoas; i++) {
        Pessoa pessoa;

        printf("Digite o CPF da pessoa %d: ", i + 1);
        scanf("%s", pessoa.cpf);

        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoa.nome);

        printf("Digite o endereço da pessoa %d: ", i + 1);
        scanf("%s", pessoa.endereco);

        printf("Digite o telefone da pessoa %d: ", i + 1);
        scanf("%s", pessoa.telefone);

        printf("Digite o celular da pessoa %d: ", i + 1);
        scanf("%s", pessoa.celular);

        printf("Digite a data de nascimento da pessoa %d (dd/mm/aaaa): ", i + 1);
        scanf("%s", pessoa.dataNascimento);

        printf("Digite a data de admissão da pessoa %d (dd/mm/aaaa): ", i + 1);
        scanf("%s", pessoa.dataAdmissao);

        printf("Digite o departamento da pessoa %d: ", i + 1);
        scanf("%s", pessoa.departamento);

        printf("Digite o cargo da pessoa %d: ", i + 1);
        scanf("%s", pessoa.cargo);

        printf("Digite o salário da pessoa %d: ", i + 1);
        scanf("%f", &pessoa.salario);

        Empilhar(&minhaPilha, pessoa);
    }

printf("\n");
system("pause");
return 0;
}