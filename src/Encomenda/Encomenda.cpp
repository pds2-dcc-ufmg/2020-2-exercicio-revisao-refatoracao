#include <iostream>
#include "Encomenda.hpp"

void Encomenda::print()
{
    std::cout << "[Remetente]" << std::endl;
    printRemetente();
    std::cout << "[Destinatário]" << std::endl;
    printDestinatario();
}

double Encomenda::calcula()
{
    double x = this->_peso * this->_custoKG;
    x += x * this->_taxa;

    return x;
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

void Encomenda::setPeso(double Peso)
{
    this->_peso = Peso;
}

void Encomenda::setCustoKG(double CustoKG)
{
    this->_custoKG = CustoKG;
}

void Encomenda::setTotal(double Total)
{
    this->_total = Total;
}

void Encomenda::setRemetente(Cliente Remetente)
{
    this->_remetente = Remetente;
}

void Encomenda::setDestinatario(Cliente Destinatario)
{
    this->_destinatario = Destinatario;
}