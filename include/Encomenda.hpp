#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	public:
		Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario):
			_peso(peso), _custoKg(custoKg), _remetente(remetente), _destinatario(destinatario){};
		virtual void imprimeEncomenda();
	
	protected:
		double _peso = 0.0;
		double _custoKg = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
};

#endif
