#include <iostream>
#include "Encomenda.hpp"

using namespace std;

//Getters:
double Encomenda::getPeso() {
	return peso;
}

double Encomenda::getCustoKg() {
	return custoKg;
}

double Encomenda::getTotal() {
    return total;
}

Cliente Encomenda::getRemetente() {
    return remetente;
}

Cliente Encomenda::getDest() {
    return dest;
}

//Setters:
void Encomenda::setPeso(double peso) {
	this->peso = peso;
}

void Encomenda::setCustoKg(double custoKg) {
	this->custoKg = custoKg;
}
