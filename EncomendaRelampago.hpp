#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Cliente.hpp"
#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{

	private:
		static constexpr const double TAXA_ENTREGRA_RELAMPAGO = 0.25; // taxa adicional constante para entregas relampago

	public:

		EncomendaRelampago(); // declaracao do construtor de EncomendaRelampago
		EncomendaRelampago(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas); // declaracao construtor de EncomendaRelampago
		double calcula() const; // declaracao do metodo calcula
		void print() const; // declaracao do metodo print

};

#endif
