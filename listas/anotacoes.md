# Listas, Pilhas e Filas

## Tipos de Dados Abstratos

Tipo de dados que implementa objetos cujo comportamento é definido por um conjunto de valores e
operações.
Empregadas para simplificar diversas operações em programação.

Principais tipos:
- **Lista**: Permite inserção e remoção em qualquer posição.
- **Pilha(Stack)**: LIFO (last in first out).
- **Fila(Queue)**: FIFO (first in first out).

### Listas

Dados são armazenados de forma sequencial, em estruturas chamadas de **nós**.
Os nós são compostos por um **campo de informação** e um **ponteiro de ligação** - que conecta ao
próximo nó da lista.

A lista pode ser simples ou dupla. Uma lista duplamente encadeada contém também ponteiros para
elementos anteriores.

Amplamente empregadas na implementação de pilhas e filas.

A inserção ou remoção de um elemento na lista não implica a mudança de lugar de outros elementos.
Não é necessário definir, no momento da criação da lista, o número máximo de elementos que esta
poderá ter.

### Pilhas

Estrutura linear para armazenar itens de acordo com o princípio LIFO (Last In First Out).

Os objetos podem ser inseridos a qualquer momento, mas apenas o objeto que foi inserido por último
pode ser removido. Os elementos podem ser inseridos e excluídos apenas de um lado da lista, chamado de
topo.

### Fila

Estrutura linear na qual a inserção e remoção de itens segue o princípio LIFO (Last In First Out).

Os objetos podem ser inseridos a qualquer momento, mas apenasa o objeto que está há mais tempo na fila
pode ser removido.

Cada nó contém um ponteiro para os dados e um ponteiro de ligação para o próximo elemento na fila.

