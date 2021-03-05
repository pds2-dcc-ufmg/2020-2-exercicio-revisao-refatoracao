#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

	public:

		Encomenda(double peso, double custo_kg, Cliente remetente, Cliente destinatario) :
			_peso(peso), _custo_kg(custo_kg), _remetente(remetente), _destinatario(destinatario), _custo_total(this->calculaPreco()){}

		double getPeso() { return this->_peso; }
		double getCustoKg() { return this->_custo_kg; }
		double getCustoTotal() { return this->_custo_total; }
		Cliente getRemetente() { return this->_remetente; }
		Cliente getDestinatario() { return this->_destinatario; }

		void setPeso(double peso) { this->_peso = peso; }
		void setCustoKg(double custo_kg) { this->_custo_kg = custo_kg; }
		void setCustoTotal(double custo_total) { this->_custo_total = custo_total; }
		void setRemetente(Cliente remetente) { this->_remetente = remetente; }
		void setDestinatario(Cliente destinatario) { this->_destinatario = destinatario; }

		void print(){ // Imprime na tela os dados do remetente e do destinatario

			std::cout << "[Remetente]" << endl;
			this->getRemetente().print();
			std::cout << "[Destinatário]" << endl;
			this->getDestinatario().print();
		}

		virtual double calculaPreco() {

			double preco = this->getPeso() * this->getCustoKg();
			
			return preco;
		}

};

#endif