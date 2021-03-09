#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		//Retorna o custo de uma encomenda individual

		virtual double calcula(){
			double custoResultante = this->peso * this->custoPorKg;
			return custoResultante;
		}

		virtual void print(){		
			std::cout << "[Remetente]" << std::endl;
			this->remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			this->destinatario.print();
		}

		//Mostra os detalhes da encomenda e atualiza um contador de preço total

		void relatarEncomenda(double *cost){
			this->print();
			*cost += this->calcula();
			std::cout<<std::endl;
		}
		
	protected:

		double peso = 0.0;
		double custoPorKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;	

};

#endif