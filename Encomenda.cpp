#include <iostream>
#include <string>
#include "Encomenda.hpp"
void Encomenda::print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}

void Encomenda::encomendaRegister(double peso, double custoKg, Cliente remetente, Cliente destinatario){
		this->peso = peso;
		this->custoKg = custoKg;
		this->remetente = remetente;
		this->destinatario = destinatario;
}
