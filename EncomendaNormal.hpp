#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(double peso, double custo_por_kg, Cliente remetente, Cliente destinatario){
			
			this->_peso = peso;
			this->_custo_por_kg = custo_por_kg;
			this->_remetente = remetente; //implementamos o construtor vazio para que esse construtor funcionasse
			this->_destinatario = destinatario;
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