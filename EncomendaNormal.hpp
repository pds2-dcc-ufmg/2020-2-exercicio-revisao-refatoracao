#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda {

	public:
	
		EncomendaNormal() {}
		EncomendaNormal(double peso, double custoKg, 
						Cliente remetente, Cliente destinatario)
		: 				Encomenda(peso, custoKg,
								  remetente, destinatario) {}

		virtual void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->getPeso() << std::endl
				  	<< "  Custo por kg: " << this->getCustoKg() << std::endl
				  	<< "  Custo total: " << this->getCustoTotal() << std::endl;
		
		}

};

#endif