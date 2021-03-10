#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{
	public:
		EncomendaRelampago(double peso, double custo_kg, Cliente remetente, Cliente destinatario) {
			this->_peso = peso;
			this->_custo_kg = custo_kg;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
			this->_taxa = 0.25;
		} 

		void print(){
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl;
			std::cout << "  Custo por kg: " << this->_custo_kg << std::endl;
			std::cout << "  Taxa adicional: " << this->_taxa << std::endl;
			std::cout << "  Custo total: " << this->custo_total() << std::endl;
		}
};

#endif