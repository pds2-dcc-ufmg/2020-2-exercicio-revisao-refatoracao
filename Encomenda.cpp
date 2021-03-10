#include <iostream>
#include <string>
#include "Encomenda.hpp"

//Implementação do construtor da classe Encomenda...
Encomenda::Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario){

	this->peso = peso;
	this->custoKg = custoKg;
	this->remetente = remetente;
	this->destinatario = destinatario;
}

//Implementação da função para impressão do remetente e do destinatario da encomenda...
void Encomenda::print(){

	std::cout << "[Remetente]" << endl;
	remetente.print();
	std::cout << "[Destinatário]" << endl;
	dest.print();
}