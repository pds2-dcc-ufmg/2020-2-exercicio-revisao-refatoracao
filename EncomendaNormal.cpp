#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){

    double calculo_custo_total = getPeso() * getCustoKg();
    return calculo_custo_total;
}

void EncomendaNormal::print(){
    setlocale(LC_CTYPE, "");
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << getPeso() << endl
        << "  Custo por kg: " << getCustoKg() << endl
        << "  Custo total: " << getCustoTotal() << endl;
}
