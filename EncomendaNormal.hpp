#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
		//Calcular valor dessa encomenda
		double calcula() {

			double x = peso * custoKG;

			return x;
		}

		//Imprime dos dados dessa encomenda
		void print() {

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->peso << std::endl
				<< "  Custo por kg: " << this->custoKG << std::endl
				<< "  Custo total: " << this->T << std::endl;

		}
};

#endif