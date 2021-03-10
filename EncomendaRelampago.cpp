#include "EncomendaRelampago.hpp"


EncomendaRelampago::EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente dest)
{
    this->peso = peso;
    this->custoKg = custoKg;
    this->custoTotal = 1.25 * (this->peso * this->custoKg);
    this->remetente = remetente;
    this->dest = dest;
}

double EncomendaRelampago::getCustoTotal()
{
    return this->custoTotal;
}


void EncomendaRelampago::print()
{
    Encomenda::print();
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << this->peso << endl
        << "  Custo por kg: " << this->custoKg << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << this->custoTotal << endl;
}