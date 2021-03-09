#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		static constexpr double TAXA_ADICIONAL = 0.25;

		EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo, remetente, destinatario) {}

		double calcula() override{

			double x = this->_peso * this->_custokg;
			x += x * TAXA_ADICIONAL;
			this->_total = x;
			
			return x;
		}

		void print_encom() override{

			Encomenda::print_remet_dest();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->_peso << std::endl
				<< "  Custo por kg: " << this->_custokg << std::endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << std::endl
				<< "  Custo total: " << this->_total << std::endl;

		}

};

#endif