#include "Encomenda.hpp"

Encomenda::Encomenda()
{

}


Encomenda::Encomenda(double peso, double custoKg, Cliente remetente, Cliente dest)
{
    this->peso = peso;
    this->custoKg = custoKg;
    this->custoTotal = peso * custoKg;
    this->remetente = remetente;
    this->dest = dest;
}


Encomenda::~Encomenda()
{

}


void Encomenda::print()
{
    std::cout << "[Remetente]" << endl << remetente << endl << "[Destinatário]" << dest;
}