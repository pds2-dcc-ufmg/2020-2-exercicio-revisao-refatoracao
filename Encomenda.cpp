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

//Setters:

void Encomenda::setPeso(double peso) {
	this->peso = peso;
}

void Encomenda::setCustoKg(double custoKg) {
	this->custoKg = custoKg;
}
