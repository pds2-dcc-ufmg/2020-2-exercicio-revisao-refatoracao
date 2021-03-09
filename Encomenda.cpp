#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

void Encomenda::print(){
    std::cout << "[Remetente]" << endl;
    this->_remetente.print();
    std::cout << "[Destinatário]" << endl;
    this->_dest.print();
}
