#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = this->getpeso() * this->getcustokg();
        this->addTotal(x);
		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << getpeso() << std::endl
			<< "  Custo por kg: " << getcustokg() << std::endl
			<< "  Custo total: " << gettotal() << std::endl;

	}
	EncomendaNormal(double Peso, double Custo, Cliente Remetente, Cliente Destinatario): Encomenda(Peso, Custo, Remetente, Destinatario)
	{
		calcula();
	}
	

};

#endif
