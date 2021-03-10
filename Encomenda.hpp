#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

		protected:
			double taxaAdicional = 1.0;

			double peso = 0.0;
			double custoKg = 0.0;
			Cliente remetente;
			Cliente destinatario;

	public:		
		Encomenda(double peso, double custoKg, Cliente remetente, cliente destinatario, double taxaAdicional=1.0):
				peso(peso), custoKg(custoKg), remetente(remetente), destinatario(destinatario) taxaAdicional(taxaAdicional){}

		double calculaCusto(){
			return  peso * custoKg * taxaAdicional;
		}

		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}

};

#endif