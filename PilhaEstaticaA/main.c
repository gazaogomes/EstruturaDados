// Nome: Gabriel Martins Gomes
//RA: 120142
//Trabalho: Pilha Estatica A

/* PILHA

Estrutura linear, com uma caracteristica diferente, a inser��o de  elementos ou a exclus�o de elementos acontece no topo da pilha, por exemplo uma pilha de livros, onde o primeiro livro a entrar � o ultimo livro a sair (FILO) ou tamb�m o ultimo livro a entrar � o primeiro a sair (LIFO), ser� realizada uma implementa��o est�tica, e depois uma dinamica, na estatica teremos um vetor com o tamanho j� predefinido, precisamos controlar onde est� o topo.
Nesta ED, teremos que guardar a variavel [topo], ela n�s mostrata onde est� disponivel e onde n�o est�, onde pode ser feita a exclus�o e etc. Para a inser��o temos uma palavra especial PUSH e para a exclus�o tamb�m o POP.
Para a inicializa��o precisamos acertar a variavel topo; topo iniciar� com -1, pois ele indica o elemento do topo e no momento a pilha est� vazia.
Para retornar o numero de elementos de uma pilha � topo+1 pois topo � o numero que cont�m no vetor e tamb�m funciona com a pilha vazia.
Para imprimir elementos, vamos mandar uma variavel percorrer trazendo esses elementos.
Para inserir elemento com o PUSH, o usuario passa como parametro o registro para ser inserido no topo da lista, tem que ser feita a verifica��o se a lista n�o est� cheia, pois ela � estatica, e insere acima do topo.
Para a exclus�o, se a pilha estiver vazia, n�o temos o que excluir retorna falso, se tiver, POP no topo da lista -1.
Para a reinicializa��o, ou chamar a func�o de inicializa��o ou seta o topo como -1.

*/

#include "pilha_estaticaA.h"

int main(){
TIPOCHAVE chave;
PILHA pilha;
REGISTRO reg;

inicializarPilha(&pilha);

printf("Elementos inseridos na ");

    reg.chave = 2;
    inserirElem(&pilha, reg);

    reg.chave = 1;
    inserirElem(&pilha, reg);

    reg.chave = 7;
    inserirElem(&pilha, reg);

    reg.chave = 11;
    inserirElem(&pilha, reg);

    reg.chave = 0;
    inserirElem(&pilha, reg);

    exibir(&pilha);

    printf ("\nTamanho da pilha: %d", tamanhoPilha(&pilha));
    printf("\n");

    printf("\nExcluindo o topo 0 da ");
    excluirElem(&pilha, &reg);
    exibir(&pilha);

    printf("\nExcluindo o topo 1 da ");
    excluirElem(&pilha, &reg);
    exibir(&pilha);

    printf("\nExcluindo o topo 2 da ");
    excluirElem(&pilha, &reg);
    exibir(&pilha);

    printf("\nExcluindo o topo 3 da ");
    excluirElem(&pilha, &reg);
    exibir(&pilha);

    printf("\nExcluindo o topo 4 da ");
    excluirElem(&pilha, &reg);
    exibir(&pilha);

    printf("A pilha est� vazia\n");

return 0;
}
