#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
class EncomendaNormal: public Encomenda{

	public:
		EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoKg, remetente, destinatario) {
			this->_taxa = 0.0;
		} 

		void print(){
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
				<< "  Custo por kg: " << this->_custoKg << std::endl
				<< "  Custo total: " << this->calculaCustoTotal() << std::endl;

		}
};

#endif