#include "Encomenda.hpp"

void Encomenda::print() {
	std::cout << "[Remetente]" 	  << endl;
	remetente.print();
	std::cout << "[Destinatário]" << endl;
	destinatario.print();
}

Encomenda::Encomenda(double peso, double custokg, double custo_total, Cliente remetente, Cliente destinatario){
	this->peso 			= peso;
	this->custo_kg 		= custokg;
	this->custo_total 	= custo_total;
	this->remetente 	= remetente;
	this->destinatario 	= destinatario;
}