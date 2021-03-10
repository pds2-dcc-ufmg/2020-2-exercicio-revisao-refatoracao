#include <iostream>
#include "EncomendaNormal.hpp"
using namespace std;

double EncomendaNormal:: calcula(){

	double x = peso * custo_kg;
    this-> set_custo_total(x);
	return x;
}

void EncomendaNormal:: print(){

    Encomenda::print();
    cout << "[Encomenda Normal]" << endl
        << "  Peso: " << peso << endl
        << "  Custo por kg: " << custo_kg << endl
        << "  Custo total: " << custo_total << endl;
}