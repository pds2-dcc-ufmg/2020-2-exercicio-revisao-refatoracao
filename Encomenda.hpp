#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void print();
		void encomendaRegister(double peso, double custoKg, Cliente remetente, Cliente destinatario);

};

#endif
