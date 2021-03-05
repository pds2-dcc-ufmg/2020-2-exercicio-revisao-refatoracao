#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	protected:

		double _peso = 0.0;
		double _custo_por_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

	public:

		static constexpr double taxa_relampago = 0.25;

		void print_remet_dest(){

			std::cout << "[Remetente]" << std::endl;
			this->_remetente.print_cliente();
			std::cout << "[Destinatário]" << std::endl;
			this->_destinatario.print_cliente();
		}

		virtual double calcula_custo_total(){

			double custo_total = _peso * _custo_por_kg;

			this->_custo_total = custo_total;

			return custo_total;
		}

		void print_enc_normal(){

			Encomenda::print_remet_dest();
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << _peso << std::endl;
			std::cout << "  Custo por kg: " << _custo_por_kg << std::endl;
			std::cout << "  Custo total: " << _custo_total << std::endl;

		}

};

#endif