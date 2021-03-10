#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaNormal : public Encomenda
{

public:
	EncomendaNormal(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario) : Encomenda(peso, custoPorKg, remetente, destinatario) {}

	void print() override{
		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << peso << endl
				  << "  Custo por kg: " << custoPorKg << endl
				  << "  Custo total: " << custoTotal << endl;
	}
	
};

#endif
