#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"

void criarFila(Fila *f, int c) {
    f->capacidade = c;
    f->dados = (Dados*) malloc(f->capacidade * sizeof (Dados));
    f->primeiro = 0;
    f->ultimo = -1;
    f->nItens = 0;
}

void inserir(Fila *f, Dados dados) {
    if (f->ultimo == f->capacidade - 1) {
        f->ultimo = -1;
    }
    f->ultimo++;
    f->dados[f->ultimo].matricula = dados.matricula;
    f->dados[f->ultimo].prova = dados.prova;
    f->dados[f->ultimo].trabalho = dados.trabalho;
    f->nItens++;
}

Dados remover(Fila *f) {
    Dados temp;
    temp = f->dados[f->primeiro];
    f->primeiro++;
    if (f->primeiro == f->capacidade)

        f->primeiro = 0;

    f->nItens--;
    return temp;
}

int estaVazia(Fila *f) {
    return (f->nItens == 0);
}

int estaCheia(Fila *f) {
    return (f->nItens == f->capacidade);
}

void mostrarFila(Fila *f) {
    int cont, i;
    i = f->primeiro;
    for (cont = 0; cont < f->nItens; cont++) {

        printf("\nMatricula = %d\n", f->dados[i].matricula);
        printf("Prova = %f\n", f->dados[i].prova);
        printf("Trabalho = %f\n\n", f->dados[i].trabalho);

        if (i == f->capacidade) {
            i = 0;
        }
        i++;
    }
    printf("\n\n");
}