#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#include <iostream>

class Encomenda {

	public:
		Encomenda(
			double _peso,
			double _custo_kg,
			Cliente _remetente,
			Cliente _dest
		) : peso(_peso),
			custo_kg(_custo_kg),
			remetente(_remetente),
			dest(_dest) {}

		virtual void print();
		double preco_total();

		void set_peso(double _peso);
		double get_peso();

		void set_custo_kg(double _custo_kg);
		double get_custo_kg();

		void get_remetente(Cliente _remetente);
		Cliente get_remetente();

		void set_dest(Cliente _dest);
		Cliente get_dest();

	protected:
		double peso;
		double custo_kg;
		Cliente remetente;
		Cliente dest;
};

#endif