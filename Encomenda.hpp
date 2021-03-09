#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		// atributos da classe Encomenda
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double TOTAL = 0.0;
		double TAXA;

		// Construtor da classe Encomenda
		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) 
		{
			this->PESO = peso;
			this->CUSTOkg = custo;
			this->REMET = remetente;
			this->DEST = destinatario;
			this->TOTAL = this->calcula();
		}

		// Impressão dos atributos da classe
		void print()
		{
			std::cout << "[Remetente]" << endl;
			REMET.print();
			std::cout << "[Destinatário]" << endl;
			DEST.print();
		}

		// Cálculo do custo total da encomenda
		double calcula()
		{
			return PESO * CUSTOkg * (1 + this->TAXA);
		}

	private:

		// Clientes associados à encomenda
		Cliente REMET;
		Cliente DEST;
			
};

#endif