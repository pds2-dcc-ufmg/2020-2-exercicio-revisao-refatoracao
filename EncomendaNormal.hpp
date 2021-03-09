#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

    EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) :
    Encomenda(peso, custo, remetente, destinatario){}

	double calcula(){
		double x = peso * custo_kg;
		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
                  << "  Custo por kg: " << custo_kg << endl
                  << "  Custo total: " << custo_total << endl;

	}

};

#endif