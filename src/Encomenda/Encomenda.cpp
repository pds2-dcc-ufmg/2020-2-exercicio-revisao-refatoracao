#include <iostream>
#include "Encomenda.hpp"

void Encomenda::print()
{
    std::cout << "[Remetente]" << std::endl;
    this->printRemetente();
    std::cout << "[Destinatário]" << std::endl;
    this->printDestinatario();
}

double Encomenda::calcula()
{
    double x = this->_peso * this->_custoKG;
    x += x * this->_taxa;

    return x;
}

double Encomenda::resultado()
{
    this->print();
    this->print_sub();
    std::cout << std::endl;
    return this->calcula();
}

void Encomenda::printPeso()
{
    std::cout << "  Peso: " << this->_peso << std::endl;
}

void Encomenda::printCustoKG()
{
    std::cout << "  Custo por kg: " << this->_custoKG << std::endl;
}

void Encomenda::printTotal()
{
    std::cout << "  Custo total: " << this->_total << std::endl;
}

void Encomenda::printTaxa()
{
    std::cout << " Taxa adicional: " << this->_taxa << std::endl;
}

void Encomenda::printRemetente()
{
    this->_remetente.print();
}

void Encomenda::printDestinatario()
{
    this->_destinatario.print();
}