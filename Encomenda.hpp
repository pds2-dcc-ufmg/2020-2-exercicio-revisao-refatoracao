#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"


class Encomenda{

	private:
	
		double peso;
		double custoKg ;
		double total ;
		Cliente remetente;
		Cliente destinatario;

	public:
		
		double getPeso();
    	double getCustoKg();
    	double getTotal();
    	Cliente getRemetente();
    	Cliente getDestinatario();
		void setPeso(double peso);
    	void setCustoKG(double custoKg);
    	void setT(double total);
		void setRemetente(Cliente remetente);
    	void setDestinatario(Cliente destinatario);
		Encomenda(double peso, double custoKg, double total, Cliente remetente, Cliente destinatario);
		void print();
		Encomenda();

};

#endif