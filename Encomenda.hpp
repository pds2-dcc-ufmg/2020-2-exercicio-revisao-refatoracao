#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		
		Encomenda(bool prioridade, int peso, int custokg, Cliente Remetente, Cliente Destinatario);
		double calcula();
		void print();
		bool prioridade();
	
	private:
		
		bool relampago = 0;
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
