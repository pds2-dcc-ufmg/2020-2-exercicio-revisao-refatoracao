#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{
	static constexpr double TAXA_ADICIONAL = 0.25;

	public:
		EncomendaRelampago(){}
		EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario){
			this->setPeso(peso), this->setCustoKg(custoKg);
			this->setRemetente(remetente), this->setDestinatario(destinatario);
		}

		double calcula() override;
		void print() override;

};

#endif