#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:
		double _peso = 0.0;
		double _custo_por_kg = 0.0;
		double _total = 0.0;
		Cliente _remetente;
		Cliente _dest;
			
	public:

	Encomenda(double peso, double custo_por_kg, Cliente remetente, Cliente dest) {
		_peso = peso;
		_custo_por_kg = custo_por_kg;
		_remetente = remetente;
		_dest = dest;  
	}

	double get_total() {
		return _total;
	}

	void print() {
		cout << "[Remetente]" << endl;
		_remetente.print();
		cout << "[Destinatário]" << endl;
		_dest.print();
	}


		virtual double calcula();

};

#endif