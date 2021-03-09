#include "No.hpp"

template <class T> No<T>::No(T encomenda) { // construtor de no
    this->encomenda = encomenda;
    this->proximo = nullptr;
} // fim do construtor de no

// metodos set
template <class T> void No<T>::setProximo (No *proximo) { // atribui o proximo no da lista a variavel responsavel por amazena-lo
    this->proximo = proximo;
} // fim do metodo setProximo

// metodos get
template <class T> No<T> *No<T>::getProximo () const { // retorna o proximo no
    return this->proximo;
} // fim do metodo getProximo

template <class T> T No<T>::getEncomenda () const { // retorna a encomenda do tipo T corrente
    return this->encomenda;
} // fim do metodo getEncomenda
