#ifndef LISTA_WHISKY_H_INCLUDED
#define LISTA_WHISKY_H_INCLUDED

typedef int TIPOCHAVE;

typedef struct registro{
    TIPOCHAVE chave;
}REGISTO;

typedef struct reserva{
   REGISTRO reg;
  struct registro *prox;
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
    PONT inicio;
}LISTA;


// ****** PROTÓTIPOS ********
void insere(LISTA *l, REGISTRO reg);
void inicializa(LISTA *l);
void reinicializaLista(LISTA *l);
PONT buscaElem(LISTA *l, TIPOCHAVE ch);
void deletaReg(LISTA *l, TIPOCHAVE ch);
void mostraLista(LISTA *l);

#endif // LISTA_WHISKY_H_INCLUDED
