#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda{
	public:
		EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario){
			this->setPeso(peso), this->setCustoKg(custoKg);
			this->setRemetente(remetente), this->setDestinatario(destinatario);
		}		

		double calcula() override;
		void print() override;

};

#endif