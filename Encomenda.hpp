#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	private: // Variáveis privadas; acesso via getters e setters

		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
	public: // Métodos publicos implementados em Encomenda.cpp

		void print();

		double get_peso();
		double get_custo_kg();
		double get_custo_total();
		Cliente get_remetente();
		Cliente get_destinatario();

		void set_peso(float _peso);
		void set_custo_kg(float _custo_kg);
		void set_custo_total(float _custo_total);
		void set_remetente(Cliente _remetente);
		void set_destinatario(Cliente _destinatario);
};

#endif
