#ifndef Encomenda_H
#define Encomenda_H

#include "../cliente/Cliente.hpp"

class Encomenda{
	
	private:
		double pesoEncomenda = 0.0;
		double custoPorKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
	public:
		void printEncomenda();
		double calculaCusto();
		
		double getPesoEncomenda();
		double getCustoPorKg();
		double getCustoTotal();
		Cliente getRemetente();
		Cliente getDestinatario();

		Encomenda(){};
		virtual ~Encomenda(){};

		void setPesoEncomenda(double pesoEncomenda);
		void setCustoPorKg(double custoPorKg);
		void setCustoTotal(double custoTotal);
		void setRemetente(Cliente remetente);
		void setDestinatario(Cliente destinatario);

};

#endif