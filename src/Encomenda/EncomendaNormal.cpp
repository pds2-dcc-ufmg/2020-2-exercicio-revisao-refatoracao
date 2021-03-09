#include <iostream>
#include "EncomendaNormal.hpp"

void EncomendaNormal::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    printPeso();
    printCustoKG();
    printTotal();
}