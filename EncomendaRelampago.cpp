#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaRelampago.hpp"




void EncomendaRelampago::print(){

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
        << "  Custo por kg: " << custoKg << std::endl
        << "  Taxa adicional: " << TAXARELAMPAGO << std::endl
        << "  Custo total: " << t << std::endl;

}

double EncomendaRelampago::calcula(){

    double x = peso * custoKg;
    x += x * TAXARELAMPAGO;
    
    return x;
}
