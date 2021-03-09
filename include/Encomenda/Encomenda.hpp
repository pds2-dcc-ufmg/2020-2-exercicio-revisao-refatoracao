#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda {

	public:
		virtual double calcula_tarifa_total() = 0;
		virtual void print() = 0;

		void setPeso(double peso) { _peso = peso; }
		void setCustoPorKg(double custo_por_kg) { _custo_por_kg = custo_por_kg; }
		void setRemetente(Cliente remetente) { _remetente = remetente; }
		void setDestinatario(Cliente destinatario) { _destinatario = destinatario; }

		double getPeso() { return _peso; }
		double getCustoPorKg() { return _custo_por_kg; }
		double getTarifaTotal() { return _tarifa_total; }
		Cliente getRemetente() { return _remetente; }
		Cliente getDestinatario() { return _destinatario; }

	protected:

		double _peso = 0;
		double _custo_por_kg = 0;
		double _tarifa_total = 0;
		Cliente _remetente;
		Cliente _destinatario;
		
		void print_remetente_destinatario();

};

#endif