#include <iostream>
#include "Lista.hpp"

template <class T> Lista<T>::Lista () { // construtor da lista

	this->_listaSize = 0;

} // fim do contrutor


template <class T> void Lista<T>::inserir(T encomenda) { // insere uma encomenda na lista

	No<T> *newNode = new No<T>(encomenda);

	if (getSize() == 0) {
		this->primeiro = newNode;
		this->primeiro->setProximo(this->ultimo);
	} else {
		this->ultimo->setProximo(newNode);
		this->ultimo = newNode;
	}

	this->ultimo = newNode;
	this->ultimo->setProximo(nullptr);
	newNode = nullptr;
	delete newNode;

	this->_listaSize++;


} // fim do metodo inserir


template <class T> int Lista<T>::getSize() const { // retorna o tamanho atual da lista

   return this->_listaSize;

} // fim do metodo getSize


template <class T> double Lista<T>::printAndCalc ()  const{ // printa as encomendas da lista e calcula o total de encomendas

	int j = 1;
	double _quantEntregas = 0;
	double b = 0;
	No<T> *i = this->primeiro;
 	while (j <= getSize()) {
		i->getEncomenda().print();
		_quantEntregas += i->getEncomenda().calcula();
		j++;
		i = i->getProximo();
	}
	return _quantEntregas;

} // fim do metodo imprimirLista


template <class T> void Lista<T>::printNthNode (int n) const { // printa a enesima encomenda armazenada na lista

	int j = 1;
	No<T> *i = this->primeiro;
 	while (i != nullptr && j < n) {
		i = i->getProximo();
		j++;
	}
	i->getEncomenda().print();

} // fim do metodo imprimirLista
