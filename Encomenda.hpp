#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda {
	public:
		Encomenda(double peso, double custoKg, double total, Cliente remetente, Cliente destinatario) {
			this->_peso = peso;
			this->_custoKg = custoKg;
			this->_total = total;
			this->remetente = remetente;
			this->destinatario = destinatario;
		}
		~Encomenda() {};
	
		void setPeso(double peso);
		void setCustoKg(double custoKg);
		void setTotal(double total);
		void setRemet(Cliente remetente);
		void setDest(Cliente destinatario);
	
		double getPeso();
		double getCustoKg();
		double getTotal();
		Cliente getRemet();
		Cliente getDest();
			
		virtual void print();
		virtual double calcula();
	
	private:
		double _peso = 0.0;
		double _custoKg = 0.0;
		double _total = 0.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif
