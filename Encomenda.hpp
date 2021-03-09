#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		// atributos da classe Encomenda
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		double taxa;

		// Construtor da classe Encomenda
		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) 
		{
			this->PESO = peso;
			this->CUSTOkg = custo;
			this->remetente = remetente;
			this->dest = destinatario;
		}

		// Impressão dos atributos da classe
		void print()
		{
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		// Cálculo do custo total da encomenda
		double calcula()
		{
			return PESO * CUSTOkg * (1 + this->taxa);
		}

	private:

		// Clientes associados à encomenda
		Cliente remetente;
		Cliente dest;
			
};

#endif