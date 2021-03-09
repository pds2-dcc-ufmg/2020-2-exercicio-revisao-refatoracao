#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double _peso;
		Cliente _remetente;
		Cliente _destinatario;

	public:

		void setPeso(double peso){_peso=peso;};
		double getPeso(){return _peso;};

		void setRemetente(Cliente remetente){_remetente=remetente;};
		Cliente getRemetente(){return _remetente;};

		void setDestinatario(Cliente destinatario){_destinatario=destinatario;};
		Cliente getDestinatario(){return _destinatario;};		
			
		void print(){
			std::cout << "[Remetente]" << endl;
			getRemetente().print();
			std::cout << "[Destinatário]" << endl;
			getDestinatario().print();
		}

};

#endif