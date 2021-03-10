#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"
#include "Encomenda.hpp"

using namespace std;

void EncomendaNormal::print() {

	Encomenda::print();
	cout << "[Encomenda Normal]" << endl;
	cout << "  Peso: " << _PESO << endl;
	cout << "  Custo por kg: " << _CUSTOkg << endl;
	cout << "  Custo total: " << _T << endl;

}

double EncomendaNormal::calcula() {

	double _x = _PESO * _CUSTOkg;
	return _x;

}

EncomendaNormal::EncomendaNormal(double PESO, double CUSTOkg, Cliente remetente, Cliente dest) {

    _PESO = PESO;
    _CUSTOkg = CUSTOkg;
    _remetente = remetente;
    _dest = dest;

};