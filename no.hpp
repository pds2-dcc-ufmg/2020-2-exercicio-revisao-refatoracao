#ifndef NO
#define NO

#include "Cliente.hpp"

template <class T> class No {

    private:
        T encomenda; // variavel que armazena uma encomenda do tipo T
        No<T> *proximo; // ponteiro que aponta para o proximo no

    public:
        No(T encomenda); // declaracao do construtor de no
        No(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas); // declaracao do construtor de no
        void setProximo(No*); // declaracao do metodo que atribui o proximo no da lista a variavel responsavel por amazena-lo
        No *getProximo() const; // declaracao do metodo que retorna o proximo no da lista
        T getEncomenda() const; // declaracao do metodo que retorna a encomenda do tipo T corrente

}; // fim class no

#endif
