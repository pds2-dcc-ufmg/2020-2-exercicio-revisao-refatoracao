#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda {

	public:

		Encomenda() {}
		Encomenda(double peso, double custoKg, 
				  Cliente remetente, Cliente destinatario)
		:		  _peso(peso), _custoKg(custoKg), 
				  _remetente(remetente), _destinatario(destinatario) {}

		void setPeso(double peso) { this->_peso = peso; }
		void setCustoKg(double custoKg) { this->_custoKg = custoKg; }
		void setCustoTotal(double custoTotal)  { this->_custoTotal = custoTotal; }
		void setRemetente(Cliente remetente) { this->_remetente = remetente; }
		void setDestinatario(Cliente destinatario) { this->_destinatario = destinatario; }

		double getPeso() { return this->_peso; }
		double getCustoKg() { return this->_custoKg; }
		double getCustoTotal() { return this->_custoTotal; }
		Cliente getRemetente() { return this->_remetente; }
		Cliente getDestinatario() { return this->_destinatario; }

		virtual double calcPreco() { 

			return this->getPeso() * this->getCustoKg(); 

		}

		virtual void print() {

			std::cout << "[Remetente]" << std::endl;
			this->getRemetente().print();
			std::cout << "[Destinatário]" << std::endl;
			this->getDestinatario().print();

		}

	private:
	
		double _peso = 0.0;
		double _custoKg = 0.0;
		double _custoTotal= 0.0;
		Cliente _remetente;
		Cliente _destinatario;

};

#endif