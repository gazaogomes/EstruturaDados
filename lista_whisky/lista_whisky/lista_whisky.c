#include <stdio.h>
#include <stdlib.h>
#include "lista_whisky.h"
#define VAZIO = NULL;

// ##############################################

void insere(LISTA *l, REGISTRO reg){
    PONT novo = VAZIO;
    novo = (PONT)malloc(sizeof(ELEMENTO));

    if(novo == VAZIO){
    puts("Esta vazio\n");
}
    novo->reg=reg;
    novo->prox=VAZIO;
    novo->prox=l->inicio;
    l->inicio=novo;
}

// ##############################################

void inicializa(void){
    l->inicio = VAZIO;
}

// ##############################################

void reinicializaLista(LISTA *l){
PONT reserva = l->inicio;

do{
    l->inicio=l->inicio->prox;
    free(reserva);
    reserva=l->inicio;
}
    while(reserva!=VAZIO);
}

// ##############################################

void insereRegOrdenado(LISTA *l, REGISTRO reg){
PONT atual = NULL;
PONT novo = NULL;
PONT ant = NULL;
novo = (PONT) malloc(sizeof(ELEMENTO));

if(novo==NULL){
    puts("\nnao deu\n");
}

novo->reg=reg;
novo->prox=NULL;

atual=l->inicio;

while(atual!=NULL && atual->reg.chave<reg.chave){
    ant=atual;
    atual = atual->prox;
}
novo->prox=atual;

if(ant==NULL){
    l->inicio=novo;
}
else{
    ant->prox=novo;
}
}

