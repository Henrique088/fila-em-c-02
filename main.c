#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"

/*
 * 
 */
int main(int argc, char** argv) {

    Fila f;
    Dados dados;
    int opcao;

    int capa;
    printf("Digite a capacidade da fila:");
    scanf("%d", &capa);

    do {

        printf("\n\n1-Criar\n");
        printf("2-Inserir\n");
        printf("3-Remover\n");
        printf("4-Imprimir\n");
        printf("5-Sair\n");
        printf("Digite uma opção:");
        scanf("%d", &opcao);

        if (opcao == 1) {

            criarFila(&f, capa);
            printf("Fila criada!\n");

        } else if (opcao == 2) {

            if (estaCheia(&f)) {
                printf("Fila está cheia...\n");
            } else {
                printf("Digite a matricula:");
                scanf("%d", &dados.matricula);
                printf("Digite a nota da prova:");
                scanf("%f", &dados.prova);
                printf("Digite a nota do trabalho:");
                scanf("%f", &dados.trabalho);
                inserir(&f, dados);
            }

        } else if (opcao == 3) {
            if (estaVazia(&f)) {
                printf("Fila está vazia...\n");
            } else {
                remover(&f);
                printf("Aluno removido da fila...\n");
            }

        }
        else if (opcao == 4) {
            printf("\n************DADOS DA FILA***********\n");
            mostrarFila(&f);
        }
        else if (opcao == 5) {
            exit(0);
        }
        else{
            continue;
        }
    } while (opcao != 5);





    return (EXIT_SUCCESS);
}

