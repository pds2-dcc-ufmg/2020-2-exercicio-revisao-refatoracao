#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
#include "Encomenda.hpp"

void Encomenda::setPeso(double peso){
    this->_peso_encomenda = peso;
}
void Encomenda::setCustoKg(double custoKg){
    this->_custo_kg_encomenda = custoKg;
}
void Encomenda::setCustoTotal(double custoTotal){
    this->_custo_total_encomenda = custoTotal;
}
void Encomenda::setRemetente(Cliente remetente){
    this->_remetente_encomenda = remetente;
}
void Encomenda::setDestinatario(Cliente destinatario){
    this->_destinatario_encomenda = destinatario;
}

double Encomenda::getPeso(){
    return this->_peso_encomenda;
}
double Encomenda::getCustoKg(){
    return this->_custo_kg_encomenda;
}
double Encomenda::getCustoTotal(){
    return this->_custo_total_encomenda;
}
Cliente Encomenda::getRemetente(){
    return this->_remetente_encomenda;
}
Cliente Encomenda::getDestinatario(){
    return this->_destinatario_encomenda;
}

void Encomenda::print(){
    setlocale(LC_CTYPE, "");
    std::cout << "[Remetente]" << endl;
    _remetente_encomenda.print();
    std::cout << "[Destinatário]" << endl;
    _destinatario_encomenda.print();
}
