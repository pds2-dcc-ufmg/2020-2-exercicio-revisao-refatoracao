#include "EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente dest)
{
    this->peso = peso;
    this->custoKg;
    this->custoTotal = peso * custoKg;
    this->remetente = remetente;
    this->dest = dest;
}

double EncomendaNormal::getCustoTotal()
{
    return this->custoTotal;
}


void EncomendaNormal::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << this->peso << endl
        << "  Custo por kg: " << this->custoKg << endl
        << "  Custo total: " << this->custoTotal << endl;
}