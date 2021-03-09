#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda {

	public:

		virtual double calcula_tarifa_total() = 0;
		virtual void print() = 0;

		double getTarifaTotal() { return _tarifa_total; }

	protected:

		double _peso = 0;
		double _custo_por_kg = 0;
		double _tarifa_total = 0;
		Cliente _remetente;
		Cliente _destinatario;
		
		void print_remetente_destinatario();

};

#endif