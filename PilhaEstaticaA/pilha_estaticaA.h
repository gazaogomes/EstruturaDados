#ifndef PILHA_ESTATICAA_H_INCLUDED
#define PILHA_ESTATICAA_H_INCLUDED
#define MAX 50
#define true 1
#define false 0

typedef int bool;

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int topo;
}PILHA;

//---------------PROTÓTIPOS------------------
void inicializarPilha(PILHA*p);
int tamanhoPilha (PILHA*p);
void exibir (PILHA *p);
bool inserirElem(PILHA *p, REGISTRO reg);
bool excluirElem(PILHA *p, REGISTRO *reg);
void reinicializar(PILHA *p);
#endif // PILHAESTATICA_H_INCLUDED

