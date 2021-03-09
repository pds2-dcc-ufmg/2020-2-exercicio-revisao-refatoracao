#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {

	public:
		/*
		Encomenda(double _peso_kg, double _custo_por_kg, Cliente _remetente, Cliente _destinatario) {
			peso_kg = _peso_kg;
			custo_por_kg = _custo_por_kg;
			remetente = _remetente;
			destinatario = _destinatario;
		}
		*/

		/** Imprime na tela os dados do remetente e destinatário. */		
		virtual void printDadosEncomenda() = 0;

		virtual double calculaCustoTotal() = 0;
};

#endif