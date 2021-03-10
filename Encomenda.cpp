#include <iostream>
#include "Encomenda.hpp"

double Encomenda::calcula(){

    return this->getPeso() * this->getCusto();

 }

void Encomenda::print(){

	std::cout << "[Remetente]" << std::endl;
	remetente.print();
	std::cout << "[Destinatário]" << std::endl;
	destinatario.print();
}

void Encomenda::setPeso(double peso){
    this->peso = peso;
}

void Encomenda::setCusto(double custo_kg){
    this->custo_kg = custo_kg;
}

void Encomenda::setTaxa(double taxa){ 
    this->taxa = taxa;
}

void Encomenda::setRemetente(Cliente c){
    this->remetente = remetente;
}

void Encomenda::setDestinatario(Cliente c){
    this->destinatario = destinatario;
}

double Encomenda::getPeso(){
    return peso;
}

double Encomenda::getCusto(){
    return custo_kg;
}

double Encomenda::getTaxa(){
    return taxa;
}

Cliente Encomenda::getRemetente(){
    return remetente;
}

Cliente Encomenda::getDestinatario(){
    return destinatario;
}