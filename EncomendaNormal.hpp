#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		using Encomenda::Encomenda;

		double calculaPreco(){
			double preco = this->peso * this->custoKg;
			return preco;
		}

		void printDados(){
			Encomenda::printDados();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->peso << endl
				<< "  Custo por kg: " << this->custoKg << endl
				<< "  Custo total: " << this->custoTotal << endl << endl;

		}
	

};

#endif