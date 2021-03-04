#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoKg, remetente, destinatario) {
			this->_taxa = 0.25;
		} 

		void print() {
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
				<< "  Custo por kg: " << this->_custoKg << std::endl
				<< "  Taxa adicional: " << this->_taxa << std::endl
				<< "  Custo total: " << this->calculaCustoTotal() << std::endl;

		}

};

#endif