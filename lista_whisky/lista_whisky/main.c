//Nome: Gabriel Martins Gomes
//RA: 120142
//Trabalho: Implementa��o Controle Estoque Whisky (Lista Encadeada Est�tica)

#include <stdio.h>
#include <stdlib.h>
#include "lista_whisky.h"

int main(){

 LISTA l;
 REGISTRO reg;

 inicializa(&lista); //chama a procedure pra inicializar

 reg.chave = 5;
 insereRegOrdenado(&lista, reg);

 reg.chave = 11;
 insereRegOrdenado(&lista, reg);

 reg.chave = 2;
 insereRegOrdenado(&lista, reg);

 reg.chave = 8;
 insereRegOrdenado(&lista, reg);

 reg.chave = 13;
 insereRegOrdenado(&lista, reg);


 exibieLista(&lista);


 exclui(&lista, reg.chave = 8);

 exibeLista(&lista);

}
