#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"


void EncomendaNormal::print(){
    
    Encomenda::print();
    cout << "[Encomenda Normal]" << endl;
    cout << "  Peso: " << getPeso() << endl
        << "  Custo por kg: " << getCusto() << endl
        << "  Custo total: " << getTotal() << endl;

}