#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print(){
	std::cout << "[Remetente]" << endl;
	remetente.print();
	std::cout << "[Destinatário]" << endl;
	destinatario.print();
}

void Encomenda::setPeso(double pPeso){
    peso = pPeso;
}

double Encomenda::getPeso(){
    return peso;
}

void Encomenda::setCustoKg(double pCustoKg){
    custoKg = pCustoKg;
}

double Encomenda::getCustoKg(){
    return custoKg;
}

void Encomenda::setTotal(double pTotal){
    total = pTotal;
}

double Encomenda::getTotal(){
    return total;
}

void Encomenda::setRemetente(Cliente pRemetente){
    remetente = pRemetente;
}

Cliente Encomenda::getRemetente(){
    return remetente;
}

void Encomenda::setdestinatario(Cliente pDestinatario){
    destinatario = pDestinatario;
}

Cliente Encomenda::getDestinatario(){
    return destinatario;
}
