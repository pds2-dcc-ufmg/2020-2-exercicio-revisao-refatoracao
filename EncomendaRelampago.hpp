#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double peso, double custo_por_kg, Cliente remetente, Cliente destinatario){
			this->_peso = peso;
			this->_custo_por_kg = custo_por_kg;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
		}

		double calcula_custo_total() override{

			double custo_total = _peso * _custo_por_kg;
			custo_total += custo_total * taxa_relampago;
			
			this->_custo_total = custo_total;

			return custo_total;
		}

		void print_enc_relamp(){

			Encomenda::print_remet_dest();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << _peso << std::endl;
			std::cout << "  Custo por kg: " << _custo_por_kg << std::endl;
			std::cout << "  Taxa adicional: " << taxa_relampago << std::endl;
			std::cout << "  Custo total: " << _custo_total << std::endl;

		}

};

#endif