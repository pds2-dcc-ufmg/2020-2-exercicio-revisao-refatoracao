#include <iostream>
#include <string>
#include "../../include/encomenda/Encomenda.hpp"

double Encomenda::getPesoEncomenda(){
    return this->pesoEncomenda;
}
double Encomenda::getCustoPorKg(){
    return this->custoPorKg;
}
double Encomenda::getCustoTotal(){
    return this->custoTotal;
}
Cliente Encomenda::getRemetente(){
    return this->remetente;
}
Cliente Encomenda::getDestinatario(){
    return this->destinatario;
}
void Encomenda::setPesoEncomenda(double pesoEncomenda){
    this->pesoEncomenda = pesoEncomenda;
}
void Encomenda::setCustoPorKg(double custoPorKg){
    this->custoPorKg = custoPorKg;
}
void Encomenda::setCustoTotal(double custoTotal){
    this->custoTotal = custoTotal;
}
void Encomenda::setRemetente(Cliente remetente){
    this->remetente = remetente;
}
void Encomenda::setDestinatario(Cliente destinatario){
    this->destinatario = destinatario;
}
void Encomenda::printEncomenda(){
	std::cout << "[Remetente]" << std::endl;
	getRemetente().printCliente();
	std::cout << "[Destinatário]" << std::endl;
	getDestinatario().printCliente();
}

