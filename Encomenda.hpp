#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		// Atributos da classe Encomenda
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double TOTAL = 0.0;

		// Construtor da classe Encomenda
		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) 
		{
			this->PESO = peso;
			this->CUSTOkg = custo;
			this->REMET = remetente;
			this->DEST = destinatario;
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
		virtual double calcula() = 0;

		virtual void print_data() = 0;

		// Formatação da impressão final e cálculo do custo total
		double metodo()
		{
			this->print();
			this->print_data();
			std::cout << endl;
			return this->calcula();
		}

	private:

		// Clientes associados à encomenda
		Cliente REMET;
		Cliente DEST;
			
};

#endif