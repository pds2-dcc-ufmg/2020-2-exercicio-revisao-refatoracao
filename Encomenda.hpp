#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:
		
		virtual void print();

		virtual double calcula();
	
		double getPeso() const { return peso; }
		double getCustoKg() const { return custoKg; }
		double getCustoTotal() const { return custoTotal; }
		Cliente getRemetente() const { return remetente; }
		Cliente getDestinatario() const { return destinatario; }
	
		void setPeso(double _peso) { peso = _peso; }
		void setCustoKg(double _custoKg) { custoKg = _custoKg; }
		void setCustoTotal(double _custoTotal) { custoTotal = _custoTotal; }
		void setRemetente(Cliente _remetente) { remetente = _remetente; }
		void setDestinatario(Cliente _destinatario) { destinatario = _destinatario; }
	
	protected:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif
