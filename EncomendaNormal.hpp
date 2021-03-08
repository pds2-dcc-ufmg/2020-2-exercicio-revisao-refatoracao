#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaNormal: public Encomenda{

public:

    EncomendaNormal(int x, int y, Cliente& z, Cliente& w) : Encomenda(x, y, z, w) {};

	double calcular (){
		double valor = get_peso() * get_custo_por_kilo();
		set_custo_total(valor);
		return valor;
	};

	void print(){
		Encomenda::print();
		cout << "[Encomenda Normal]" << endl
		<< "  Peso: " << get_peso() << endl
        << "  Custo por kg: " << get_custo_por_kilo() << endl
		<< "  Custo total: " << get_custo_total() << endl;
	}


};

#endif
