#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "Cliente.hpp"


double EncomendaNormal::calcula_custo(){

    double custo_encomenda = peso * custo_por_kg;

    return custo_encomenda;
}

void EncomendaNormal::print(){ // Imprime na tela os dados de uma encomenda normal

    Encomenda::print(); 
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl;
    std::cout << "  Custo por kg: " << custo_por_kg << std::endl;
    std::cout << "  Custo total: " << custo_total << std::endl;

}