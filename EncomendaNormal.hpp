#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Cliente.hpp"
#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda {

	public:

		EncomendaNormal(); // declaracao construtor de EncomendaNormal
		EncomendaNormal(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas); // declaracao construtor de EncomendaNormal
		double calcula() const; // declaracao do metodo calcula
		void print() const; // declaracao do metodo print

};

#endif
