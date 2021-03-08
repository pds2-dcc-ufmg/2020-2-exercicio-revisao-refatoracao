#ifndef ENCOMENDA_H
#define ENCOMENDA_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
		void print();

};

#endif