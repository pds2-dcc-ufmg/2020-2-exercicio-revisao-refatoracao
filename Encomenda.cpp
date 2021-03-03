#include "Encomenda.hpp"

Encomenda::Encomenda() {
    peso = 0;
    custoKg = 0;
}
Encomenda::Encomenda(double _peso,
                     double _custoKg,
                     Cliente _remetente,
                     Cliente _destinatario) {
    peso = _peso;
    custoKg = _custoKg;
    remetente = _remetente;
    destinatario = _destinatario;
}

double Encomenda::getPeso() {
    return peso;
}
double Encomenda::getCustoKg() {
    return custoKg;
}
Cliente Encomenda::getRemetente() {
    return remetente;
}
Cliente Encomenda::getDestinatario() {
    return destinatario;
}

void Encomenda::setPeso(double _peso) {
    peso = _peso;
}
void Encomenda::setCustoKg(double _custoKg) {
    custoKg = _custoKg;
}
void Encomenda::setRemetente(Cliente _remetente) {
    remetente = _remetente;
}
void Encomenda::setDestinatario(Cliente _destinatario) {
    destinatario = _destinatario;
}

double Encomenda::calcularCustoTotal() {
    return custoKg * peso;
}

void Encomenda::print() {
    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.print();
}
