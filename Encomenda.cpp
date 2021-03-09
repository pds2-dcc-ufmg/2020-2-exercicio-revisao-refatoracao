#include <iostream>
#include <string>
#include "Encomenda.hpp"

Encomenda::Encomenda(){
    this->peso = 0.0;
    this->custoKg = 0.0;
    this->custoTotal = 0.0;
}
double Encomenda::getPeso(){
    return this->peso;
}
void Encomenda::setPeso(double peso){
    this->peso = peso;
}
double Encomenda::getCustoKg(){
    return this->custoKg;
}
void Encomenda::setCustoKg(double custoKg){
    this->custoKg = custoKg;
}
double Encomenda::getCustoTotal(){
    return this->custoTotal;
}
void Encomenda::setCustoTotal(double custoTotal){
    this->custoTotal = custoTotal;
}
Cliente Encomenda::getRemetente(){
    return this->remetente;
}
void Encomenda::setRemetente(Cliente remetente){
    this->remetente = remetente;
}
Cliente Encomenda::getDestinatario(){
    return this->destinatario;
}
void Encomenda::setDestinatario(Cliente destinatario){
    this->destinatario = destinatario;
}
