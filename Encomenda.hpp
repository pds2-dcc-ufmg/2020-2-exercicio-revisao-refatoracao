#ifndef ENCOMENDA_H
#define ENCOMENDA_H

#include "Cliente.hpp"
#include <iostream>

class Encomenda{

	private:

		double peso = 0.0;
		double custoPorKg = 0.0;
		Cliente remetente;
		Cliente destinatario;
	
	public:

		Encomenda(double peso, double custoPorKg, Cliente remetente, Cliente destinatario): peso(peso), custoPorKg(custoPorKg), remetente(remetente), destinatario(destinatario)  {}

		double getPeso(){
			return peso;
		}

		double getCustoPorKg(){
			return custoPorKg;
		}

		Cliente getRemetente(){
			return remetente;
		}

		Cliente getDestinatario(){
			return destinatario;
		}

		double calculaValorFinal(){
			return getPeso() * getCustoPorKg();
		}
			
		void print(){

			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.print();
		}

};

#endif