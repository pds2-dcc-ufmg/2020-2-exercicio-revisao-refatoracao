#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario):
		Encomenda(peso, custoKg, 0.0, remetente, destinatario) {};
		
	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custoKg << endl
			<< "  Custo total: " << calculaCustoTotal() << endl;

	}

};

#endif