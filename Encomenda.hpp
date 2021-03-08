#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

using namespace std;

class Encomenda{

	public:

		double _peso;
		double _custo_por_kg;
		double _total;
		Cliente _remetente;
		Cliente _dest;

		Encomenda(double peso, double custo_por_kg, Cliente& remetente, Cliente& dest) : 
    			_peso(peso), _custo_por_kg(custo_por_kg) , _remetente(remetente),  _dest(dest) {}

		void print() {
			cout << "[Remetente]" << endl;
			_remetente.print();
			cout << "[Destinatário]" << endl;
			_dest.print();
		}

		double get_total() {
			return _total;
		}

		virtual double calcula() {
			return 0.0;
		}

};

#endif