#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

void Encomenda::print(){
    std::cout << "[Remetente]" << endl;
    this->_remetente.print();
    std::cout << "[Destinat�rio]" << endl;
    this->_dest.print();
}
