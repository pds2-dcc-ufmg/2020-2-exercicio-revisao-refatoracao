#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

using namespace std;

void EncomendaRelampago::print() {

	Encomenda::print();
        cout << "[Encomenda Relâmpago]" << endl;
		cout << "  Peso: " << _PESO << endl;
		cout << "  Custo por kg: " << _CUSTOkg << endl;
		cout << "  Taxa adicional: " << _taxa << endl;
		cout << "  Custo total: " << _T << endl;

}

double EncomendaRelampago::calcula() {
			 
	double _x = _PESO * _CUSTOkg;
	_x += _x * _taxa;		
	return _x;

}

EncomendaRelampago::EncomendaRelampago(double PESO, double CUSTOkg, Cliente remetente, Cliente dest) {

    _PESO = PESO;
    _CUSTOkg = CUSTOkg;
    _remetente = remetente;
    _dest = dest;

};