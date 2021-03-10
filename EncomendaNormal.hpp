#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){

		double x = Peso * CustoKg;

		return x;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << Peso << endl;
			cout << "  Custo por kg: " << CustoKg << endl:
			cout << "  Custo total: " << CustoTotal<< endl;

	}

};

#endif
