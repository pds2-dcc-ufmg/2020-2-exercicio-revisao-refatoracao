#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		// Impressão dos atributos da classe EncomendaNormal
		void print_data() override
		{
			//Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Custo total: " << TOTAL << endl;
		}

		// Construtor - EncomendaNormal
		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario)
		{
			this->TAXA = 0.0;
		}
};

#endif