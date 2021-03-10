#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double peso = 0.0;
		double custokg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

		void imprimeDadosCliente(){

			std::cout << "[Remetente]" << endl;
			remetente.imprimeCliente();
			std::cout << "[Destinatário]" << endl;
			dest.imprimeCliente();
		}


	public:	
		void setPeso(double _peso){
			peso = _peso;
		}

		void setCustokg(double _custokg){
			custokg = _custokg;
		}

		void setCaminho(Cliente _remetente, Cliente _dest){
			remetente = _remetente;
			dest = _dest;
		}



};

#endif
