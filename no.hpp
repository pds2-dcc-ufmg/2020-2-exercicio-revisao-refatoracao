#ifndef NO
#define NO

#include "Cliente.hpp"

template <class T> class No {

    private:
        T encomenda; // variavel que armazena uma encomenda do tipo T
        No<T> *proximo; // ponteiro que aponta para o proximo no

    public:
        No(T encomenda);
        No(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas);
        void setProximo(No*);
        No *getProximo() const;
        T getEncomenda() const;

}; // fim class no

#endif
