#include <iostream>
#include "Encomenda.hpp"


Encomenda::Encomenda () { // construtor de Encomenda

    this->_peso = 0;
    this-> _custoKG = 0;
    this->_custoTotal = 0;
    this->_quantidadeEntregas = 0;

} // fim do construtor de encomenda

void Encomenda::print() const { // printa os dados do cliente

    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.print();

} // fim do metodo print
