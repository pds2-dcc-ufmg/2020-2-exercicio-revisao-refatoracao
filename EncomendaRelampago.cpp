#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

    double calculo_custo_total = getPeso() * getCustoKg();
    calculo_custo_total += calculo_custo_total * 0.25;

    return calculo_custo_total;
}

void EncomendaRelampago::print(){
    setlocale(LC_CTYPE, "");
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << getPeso() << endl
        << "  Custo por kg: " << getCustoKg() << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << getCustoTotal() << endl;
}
