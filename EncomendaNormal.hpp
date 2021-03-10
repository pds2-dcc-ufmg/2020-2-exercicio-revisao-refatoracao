#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
		double calcula(){

			double total = peso * custo_kg;

			return total;
		}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl;
		std::cout << "  Custo por kg: " << custo_kg << endl;
		std::cout << "  Custo total: " << custo_total << endl;

	}

};

#endif