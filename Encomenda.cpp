#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "Cliente.hpp"

Encomenda::Encomenda(double peso, double custo, Cliente _remetente, Cliente destinatario)
{
    this->PESO = peso;
    this->CUSTOkg = custo;
    this->remetente = _remetente;
    this->dest = destinatario;
}
void Encomenda::print()
{
    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    dest.print();
}

double Encomenda::getPeso()
{
    return this->PESO;
}
void Encomenda::setPeso(double peso)
{
    this->PESO = peso;
}

double Encomenda::getCustoKG()
{
    return this->CUSTOkg;
}
void Encomenda::setCustoKG(double custoKG)
{
    this->CUSTOkg = custoKG;
}

double Encomenda::getT()
{
    return this->taxaAdicional;
}
void Encomenda::setT(double _t)
{
    this->taxaAdicional = _t;
}

Cliente Encomenda::getRemetente()
{
    return this->remetente;
}
void Encomenda::setRemetente(Cliente _remetente)
{
    this->remetente = _remetente;
}

Cliente Encomenda::getDest()
{
    return this->dest;
}
void Encomenda::setDest(Cliente destinatario)
{
    this->dest = destinatario;
}