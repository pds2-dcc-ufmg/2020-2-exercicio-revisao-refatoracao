#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

	public:
	EncomendaNormal(double Peso_in, double Custo_Kg_in, Cliente *Remetente_in, Cliente *Destinatario_in ):
	Encomenda(Peso_in, Custo_Kg_in, Remetente_in, Destinatario_in ){}
	
	 double calcula() override{
		return Encomenda::getPeso() * Encomenda::getCusto();
	}
        
	void print() override{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << Encomenda::getPeso() << std::endl
			<< "  Custo por kg: " << Encomenda::getCusto() << std::endl
			<< "  Custo total: " << Encomenda::getTotal() << std::endl;

	}

};

#endif
