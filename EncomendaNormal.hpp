#ifndef ENCOMENDANORMAL_H
#define ENCOMENDANORMAL_H
#include "Encomenda.hpp"
#include "Cliente.hpp"
#include <iostream>

class EncomendaNormal: public Encomenda{

	public:

	EncomendaNormal(double peso, double custoPorKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoPorKg, remetente, destinatario) {}
		
	double calculaValorFinal(){
		return Encomenda::calculaValorFinal();
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << getPeso() << std::endl
			<< "  Custo por kg: " << getCustoPorKg() << std::endl
			<< "  Custo total: " << calculaValorFinal() << std::endl;

	}

};

#endif