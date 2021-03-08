#include "Encomenda.hpp"
#include <iostream>

void Encomenda::print(){ // Método para impressão dos dados sobre a encomenda com dados do cliente

	std::cout << "[Remetente]" << std::endl;
	this->remetente.print();
	std::cout << "[Destinatário]" << std::endl;
	this->destinatario.print();

}


// Métodos para retornar dados da encomenda
double Encomenda::get_peso(){return this-> peso;}
double Encomenda::get_custo_kg(){return this->custo_kg;}
double Encomenda::get_custo_total(){return this->custo_total;}
Cliente Encomenda::get_remetente(){return this->remetente;}
Cliente Encomenda::get_destinatario(){return this->destinatario;}

// Métodos para setar dados da encomenda
void Encomenda::set_peso(float _peso){this->peso = _peso;}
void Encomenda::set_custo_kg(float _custo_kg){this->custo_kg = _custo_kg;}
void Encomenda::set_custo_total(float _custo_total){this->custo_total = _custo_total;}
void Encomenda::set_remetente(Cliente _remetente){this->remetente = _remetente;}
void Encomenda::set_destinatario(Cliente _destinatario){this->destinatario = _destinatario;}
