// Nome: Gabriel Martins Gomes
//RA: 120142
//Trabalho: Pilha Estatica A

/* PILHA

Estrutura linear, com uma caracteristica diferente, a inserção de  elementos ou a exclusão de elementos acontece no topo da pilha, por exemplo uma pilha de livros, onde o primeiro livro a entrar é o ultimo livro a sair (FILO) ou também o ultimo livro a entrar é o primeiro a sair (LIFO), será realizada uma implementação estática, e depois uma dinamica, na estatica teremos um vetor com o tamanho já predefinido, precisamos controlar onde está o topo.
Nesta ED, teremos que guardar a variavel [topo], ela nós mostrata onde está disponivel e onde não está, onde pode ser feita a exclusão e etc. Para a inserção temos uma palavra especial PUSH e para a exclusão também o POP.
Para a inicialização precisamos acertar a variavel topo; topo iniciará com -1, pois ele indica o elemento do topo e no momento a pilha está vazia.
Para retornar o numero de elementos de uma pilha é topo+1 pois topo é o numero que contém no vetor e também funciona com a pilha vazia.
Para imprimir elementos, vamos mandar uma variavel percorrer trazendo esses elementos.
Para inserir elemento com o PUSH, o usuario passa como parametro o registro para ser inserido no topo da lista, tem que ser feita a verificação se a lista não está cheia, pois ela é estatica, e insere acima do topo.
Para a exclusão, se a pilha estiver vazia, não temos o que excluir retorna falso, se tiver, POP no topo da lista -1.
Para a reinicialização, ou chamar a funcão de inicialização ou seta o topo como -1.

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

    printf("A pilha está vazia\n");

return 0;
}
