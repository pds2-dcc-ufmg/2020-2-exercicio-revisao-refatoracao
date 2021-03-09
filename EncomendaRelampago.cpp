#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"


double const EncomendaRelampago::TAXA_ADICIONAL = 0.25;

double EncomendaRelampago::calcula_custo(){

    double custo_encomenda = peso * custo_por_kg;
    custo_encomenda += custo_encomenda * TAXA_ADICIONAL;
    
    return custo_encomenda;
}

void EncomendaRelampago::print(){ // Imprime na tela os dados de uma encomenda relâmpago

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl;
    std::cout << "  Custo por kg: " << custo_por_kg << std::endl;
    std::cout << "  Taxa adicional: " << TAXA_ADICIONAL << std::endl;
    std::cout << "  Custo total: " << custo_total << std::endl;

}