#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	private:
		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
	
	public:
		Encomenda(double peso, double custo_kg, double custo_total, Cliente remetente, Cliente destinatario); // construtor para classe encomenda
		void print(); // imprime na tela os dados de uma encomenda cadastrada
};

#endif
