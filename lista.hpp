#ifndef LISTA
#define LISTA

#include "No.hpp"

template <class T> class Lista {

	private:

		No<T> *primeiro; // ponteiro que aponta para o primeiro no de tipo T da lista
	        No<T> *ultimo; // ponteiro que aponta para o ultimo no de tipo T da lista
		int _listaSize; // variavel inteira que armazena a quantidade de nos inseridos na lista


	public:

		Lista(); // declaracao do construtor da lista
		void inserir(T _encomenda); // declaracao do metodo que insere uma encomenda na lista
		double printAndCalc() const; // declaracao do metodo que printa as encomendas da lista e calcula o total de encomendas
		void printNthNode(int n) const; // declaracao do metodo que printa a enesima encomenda armazenada na lista
		int getSize() const; // declaracao do metodo que retorna o tamanho corrente da lista

};

#endif
