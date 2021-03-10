#include <iostream>
#include <string>
#include "Encomenda.hpp"

using namespace std;

void Encomenda::print() {

	cout << "[Remetente]" << endl;
	_remetente.print();
	cout << "[Destinatário]" << endl;
	_dest.print();

}

Encomenda::Encomenda() {};

Encomenda::Encomenda(double PESO, double CUSTOkg, Cliente remetente, Cliente dest) {

    _PESO = PESO;
    _CUSTOkg = CUSTOkg;
    _remetente = remetente;
    _dest = dest;

}