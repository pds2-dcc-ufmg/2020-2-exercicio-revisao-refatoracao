#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"




void EncomendaNormal::print(){

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
        << "  Custo por kg: " << custoKg << std::endl
        << "  Custo total: " << t << std::endl;

}

double EncomendaNormal::calcula(){

    double x = peso * custoKg;

    return x;
}
