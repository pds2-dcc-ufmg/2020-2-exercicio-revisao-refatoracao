#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {

	protected:

		double peso_kg;
		double custo_por_kg;
		Cliente remetente;
		Cliente destinatario;

	public:

		Encomenda(double _peso_kg, double _custo_por_kg, Cliente _remetente, Cliente _destinatario) {
			peso_kg = _peso_kg;
			custo_por_kg = _custo_por_kg;
			remetente = _remetente;
			destinatario = _destinatario;
		}

		double getPeso() {
			return this->peso_kg;
		}

		double getCustoPorKg() {
			return this->custo_por_kg;
		}

		/** Imprime na tela os dados do remetente e destinatário. */		
		virtual void printDadosEncomenda();

		virtual double calculaCustoTotal();
};

#endif