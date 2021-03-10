#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		Encomenda(double Peso_in, double Custo_Kg_in, Cliente *Remetente_in, Cliente *Destinatario_in ):
		Peso(Peso_in), Custo_Kg(Custo_Kg_in), Remetente(Remetente_in), Destinatario(Destinatario_in) {}
		//construtor de Encomenda
		double getPeso(){
		    return Peso;
		}
		double getCusto(){
		    return Custo_Kg;
		}
		double getTotal(){
		    return Total;
		}

		virtual double calcula(){}
			
		virtual void print(){
    
			std::cout << "[Remetente]" << std::endl;
			Remetente->print();
			std::cout << "[Destinatário]" << std::endl;
			Destinatario->print();
		}
		
	private:
        double Peso = 0.0;
		double Custo_Kg = 0.0;
		double Total = 0.0;
		Cliente *Remetente;
		Cliente *Destinatario;
};

#endif
