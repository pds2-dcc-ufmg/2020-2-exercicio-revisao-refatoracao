#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	
	private:
	
		double taxa = 0.0;

	public:
		//retorna a taxa da encomenda normal
		double getTaxa() {
			return this->taxa;	
		}

		//imprime na tela os dados de uma encomenda
		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Custo total: " << this->getCustoTotal(taxa) << endl;

		}

};

#endif
