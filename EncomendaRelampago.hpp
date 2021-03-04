#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
	EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario):
		Encomenda(peso, custoKg, 0.25, remetente, destinatario) {};

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custoKg << endl
			<< "  Taxa adicional: " << 0.25 << endl
			<< "  Custo total: " << calculaCustoTotal() << endl;

	}

};

#endif