#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:
	
		void print(){

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			dest.print();
		}

		double get_peso();
		double get_custoKG();
		double get_T();
		cliente get_remetente();
		cliente get_dest();

		set_peso( double peso );
		set_custoKG( double custoKG );
		set_T( double T );
		set_remetente( Cliente remetente );
		set_dest( Cliente dest );

	protected:

		double peso = 0.0;
		double custoKG = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif