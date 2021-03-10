#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:	
	
	EncomendaNormal(double _peso, double _custoKg, Cliente _remetente, Cliente _dest){
			
			this->setPeso(_peso);
			this->setCustoKg(_custoKg);
			this->setRemetente(_remetente);
			this->setDest(_dest);
		}	
	
	double calcula(){

		double x = this->getPeso() * this->getCustoKg();

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << this->getPeso() << endl
			<< "  Custo por kg: " << this->getCustoKg() << endl
			<< "  Custo total: " << this->getCustoTotal() << endl;

	}

};

#endif
