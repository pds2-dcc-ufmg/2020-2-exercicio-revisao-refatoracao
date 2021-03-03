#include "../incl/Encomenda.hpp"

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
