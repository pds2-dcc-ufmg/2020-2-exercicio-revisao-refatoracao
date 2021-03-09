#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario) {}

		void print_encom() override{

			Encomenda::print_remet_dest();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
				<< "  Custo por kg: " << this->_custokg << std::endl
				<< "  Custo total: " << this->_total << std::endl;

		}

};

#endif