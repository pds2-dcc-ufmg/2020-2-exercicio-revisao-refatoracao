#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		Encomenda(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario){
			this->peso = _peso;
			this->custoKg = _custoKg;
			this->remetente = _remetente;
			this->destinatario = _destinatario;
		}
			
		virtual void printDados(){
			std::cout << "[Remetente]" << endl;
			remetente.printDados();
			std::cout << "[Destinatário]" << endl;
			destinatario.printDados();
		}

	protected:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif