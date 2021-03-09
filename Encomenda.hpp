#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:
		
		virtual void print(){
			
			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.print();
		}

		virtual double calcula(){
			return 0;	
		}
	
		double getPeso() const { return peso; }
		double getCustoKg() const { return custoKg; }
		double getCustoTotal() const { return custoTotal; }
		Cliente getRemetente() const { return remetente; }
		Cliente getDestinatario() const { return destinatario; }
	
	protected:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif
