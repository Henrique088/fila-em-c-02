#ifndef DADOS_H
#define DADOS_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

typedef struct {
    int matricula;
    float prova;
    float trabalho;
} Dados;

typedef struct {
    int capacidade;
    Dados *dados;
    int primeiro;
    int ultimo;
    int nItens;
} Fila;

void criarFila(Fila *f, int capa);
void inserir(Fila *f, Dados dados);
Dados remover(Fila *f);
int estaVazia(Fila *f);
int estaCheia(Fila *f);
void mostrarFila(Fila *f);

#endif /* DADOS_H */

