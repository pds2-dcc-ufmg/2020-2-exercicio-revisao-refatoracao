#include <iostream>
#include "Encomenda.hpp"

Encomenda::Encomenda(double peso, double custoKG, Cliente remetente, Cliente destinatario, double taxa)
    : _peso(peso), _custoKG(custoKG), _remetente(remetente), _destinatario(destinatario), _taxa(taxa)
{
    this->_total = this->calcula();
};

void Encomenda::print()
{
    std::cout << "[Remetente]" << std::endl;
    this->printRemetente();
    std::cout << "[Destinatário]" << std::endl;
    this->printDestinatario();
}

double Encomenda::calcula()
{
    return this->_peso * this->_custoKG * (1 + this->_taxa);
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