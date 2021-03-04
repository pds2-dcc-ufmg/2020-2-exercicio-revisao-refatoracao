#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	private:
		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente destinatario;

	public:

		Encomenda(	double _peso,
					double _custoKg,
					Cliente _remetente,
					Cliente _destinatario	)
				:	
					peso(_peso),
					custoKg(_custoKg),
					remetente(_remetente),
					destinatario(_destinatario) {}

		double 	getPeso()			{ return this->peso; 			}
		double 	getCustoKg()		{ return this->custoKg; 		}
		double 	getTotal()			{ return this->total; 			}
		Cliente	getRemetente()		{ return this->remetente; 		}
		Cliente	getDestinatario()	{ return this->destinatario;	}

			
		virtual void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}

};

#endif