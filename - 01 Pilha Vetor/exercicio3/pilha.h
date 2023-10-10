/*
* Arquivo: pilha.h
* Biblicoteca de operações para pilha
* implementada com vetor.
*/
#define VERDADEIRO 1
#define FALSO 0

struct Pessoa {
    char cpf[12];
    char nome[100];
    char endereco[200];
    char telefone[15];
    char celular[15];
    char dataNascimento[11];
    char dataAdmissao[11];
    char departamento[50];
    char cargo[50];
    float salario;
};

typedef struct Pessoa Pessoa;

struct tipo_pilha {
Pessoa vet[TAM];
int topo;
};
typedef struct tipo_pilha pilha;
//Cria pilha.
void CriarPilha(pilha *p) {
p->topo = 0;
}
//Verifica se a pilha está vazia.
int PilhaVazia(pilha *p) {
return(p->topo == 0);
}
//Verifica se a pilha está cheia.
int PilhaCheia(pilha *p) {
return(p->topo == TAM);
}
//Insere um elemento na pilha.
void Empilhar(pilha *p, Pessoa e) {
p->vet[p->topo] = e;
p->topo++;
}
//Retira um elemento na pilha.
Pessoa Desempilhar(pilha *p) {
p->topo--;
return p->vet[p->topo];
}

void empilhaArquivo(pilha p) {
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "r");
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        Empilhar(&p, linha);
    }

}