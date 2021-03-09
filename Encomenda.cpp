#include <iostream>
#include <string>
#include "Encomenda.hpp"

double Encomenda::getPeso() {
	return this->peso;
}
void Encomenda::setPeso(double new_peso) {
	this->peso = new_peso;
}
	
double Encomenda::getCustoKg() {
	return this->custo_kg;
}
void Encomenda::setCustoKg(double new_custo_kg) {
	this->custo_kg = new_custo_kg;
}
	
double Encomenda::getCustoTotal(double taxa) {
	double taxa_adicional = taxa + 1.0;
	return this->peso * this->custo_kg * taxa_adicional;
}
	
Cliente Encomenda::getRemetente() {
	return this->remetente;
}
void Encomenda::setRemetente(Cliente new_remetente) {
	this->remetente = new_remetente;
}
	
Cliente Encomenda::getDest() {
	return this->dest;
}
void Encomenda::setDest(Cliente new_dest) {
	this->dest = new_dest;
}
			
void Encomenda::print() {

	std::cout << "[Remetente]" << endl;
	this->remetente.print();
	std::cout << "[Destinatário]" << endl;
	this->dest.print();
}
