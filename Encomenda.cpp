#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

void Encomenda::print(){
    cout << "[Remetente]" << endl;
    this->_remetente.print();
    cout << "[Destinatário]" << endl;
    this->_dest.print();
}
