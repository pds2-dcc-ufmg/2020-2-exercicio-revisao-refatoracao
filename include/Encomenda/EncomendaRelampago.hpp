#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		static constexpr double TARIFA_RELAMPAGO = 0.25;

		EncomendaRelampago() {}

		EncomendaRelampago(double peso, double custo_por_kg, Cliente remetente, Cliente destinatario) {
			_peso = peso;
			_custo_por_kg = custo_por_kg;
			_remetente = remetente;
			_destinatario = destinatario;
		}

		double calcula_tarifa_total() override;

		void print() override;

};

#endif