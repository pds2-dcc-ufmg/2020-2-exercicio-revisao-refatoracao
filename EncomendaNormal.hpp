#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	public:
		double calcula(){
			this->_custo_total = this->_peso * this->_custo_kg;
			return this->_custo_total;
		}

		void print(){
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->_peso << endl
				<< "  Custo por kg: " << this->_custo_kg << endl
				<< "  Custo total: " << this->_custo_total << endl;
		}
};

#endif
