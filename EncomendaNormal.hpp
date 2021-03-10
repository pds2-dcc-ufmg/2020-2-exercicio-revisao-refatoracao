#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {
	public:
		// Calcula o valor total de uma encomenda normal.
		double calculaValor() override {
			double x = this->_peso * this->_custoKg;
			return x;
		}
		// Imprime na tela as informações do destinatário, do remetente e da encomenda.
		void print() {
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->_peso << endl
				  << "  Custo por kg: " << this->_custoKg << endl
				  << "  Custo total: " << this->_total << endl;
		}
};

#endif
