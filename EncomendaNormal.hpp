#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaNormal
		void print()
		{
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Custo total: " << T << endl;
		}

		// Construtor - EncomendaNormal
		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->T = this->calcula();
			this->taxa = 0.0;
		}

		// Formatação da impressão final e cálculo do custo total
		double metodo()
		{
			this->print();
			std::cout << endl;
			return this->calcula();
		}
};

#endif