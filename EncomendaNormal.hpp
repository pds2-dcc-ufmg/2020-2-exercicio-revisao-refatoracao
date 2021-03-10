#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{
	public:		
		EncomendaNormal(double peso, double custo_kg, Cliente remetente, Cliente destinatario) {
			this->_peso = peso;
			this->_custo_kg = custo_kg;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
		}

		void print() {
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl;
			std::cout << "  Custo por kg: " << this->_custo_kg << std::endl;
			std::cout << "  Custo total: " << this->custo_total() << std::endl;
		}

};

#endif