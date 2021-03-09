#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
	
		double taxa = 0.25;

	public:
		double getTaxa() {
			return this->taxa;	
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Taxa adicional: " << this->taxa << endl
				<< "  Custo total: " << this->getCustoTotal(taxa) << endl;

		}

};

#endif
