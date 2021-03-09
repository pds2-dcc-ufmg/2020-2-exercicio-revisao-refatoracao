#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal() {}

		EncomendaNormal(double peso, double custo_por_kg, Cliente remetente, Cliente destinatario){
			this->_peso = peso;
			this->_custo_por_kg = custo_por_kg;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
		}
		
		double calcula_tarifa_total() override;

		void print() override;

};

#endif