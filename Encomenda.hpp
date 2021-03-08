#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		double taxa;

		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario)
		{
			this->PESO = peso;
			this->CUSTOkg = custo;
			this->remetente = remetente;
			this->dest = destinatario;
		}

		void print()
		{
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		double calcula()
		{
			return PESO * CUSTOkg * (1 + this->taxa);
		}

	private:

		Cliente remetente;
		Cliente dest;
			
};

#endif