#ifndef LISTA
#define LISTA

#include "No.hpp"

template <class T> class Lista {

	private:

		No<T> *primeiro; // ponteiro que aponta para o primeiro no de tipo T da lista
	        No<T> *ultimo; // ponteiro que aponta para o ultimo no de tipo T da lista
		int _listaSize; // variavel inteira que armazena a quantidade de nos inseridos na lista


	public:

		Lista();
		void inserir(T _encomenda);
		double printAndCalc() const;
		void printNthNode(int n) const;
		int getSize() const;

};

#endif
