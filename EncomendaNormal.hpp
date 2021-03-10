#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = peso * custokg;

		return x;
	}

	void print()override{

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custokg << endl
			<< "  Custo total: " << tot << endl;

	}

};

#endif