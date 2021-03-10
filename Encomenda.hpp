#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		double getPeso() {return this->_peso;}
		double getCustokg() {return this->_custoKg;}
		double getCustoTotal() {return this->_custoTotal;}
		Cliente getRemetente() {return this->_remetente;}
		Cliente getDest() {return this->_destinatario;}


		void setPeso(double peso) {this->_peso = peso;}
		void setCustokg(double custoKg) {this->_custoKg = custoKg;}
		void setRemetente(Cliente remetente) {this->_remetente = remetente;}
		void setDest(Cliente destinatario) {this->_destinatario = destinatario;}
	
		void printEncomenda(){

			std::cout << "[Remetente]" << endl;
			getRemetente().printCliente();
			std::cout << "[Destinatário]" << endl;
			getDest().printCliente();
		}
	protected:
		double _peso = 0.0;
		double _custoKg = 0.0;
		double _custoTotal = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
};

#endif