#include <iostream>
#include "EncomendaRelampago.hpp"
using namespace std;


double EncomendaRelampago:: calcula(){

    double x = peso * custo_kg;
    x += x * 0.25;
    this-> set_custo_total(x);
    return x;
}

void EncomendaRelampago:: print(){

    Encomenda::print();
    cout << "[Encomenda Relâmpago]" << endl
        << "  Peso: " << peso << endl
        << "  Custo por kg: " << custo_kg << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << custo_total << endl;

}